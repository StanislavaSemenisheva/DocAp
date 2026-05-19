#include "patientcabinet.h"
#include "ui_patientcabinet.h"
#include "mainwindow.h"
#include "ordercode.h"
#include <QMessageBox>

patientcabinet::patientcabinet(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::patientcabinet)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/appicon.ico"));

    connect(ui->refreshButton, &QPushButton::clicked,
            this, &patientcabinet::onRefreshButtonClicked);
    connect(ui->exitButton, &QPushButton::clicked,
            this, &patientcabinet::onExitButtonClicked);
    connect(ui->ordersList, &QListWidget::itemClicked,
            this, &patientcabinet::onOrderClicked);
}

void patientcabinet::setPatientData(const QString &surname,
                                    const QString &name,
                                    const QString &patronymic,
                                    const QString &snils)
{
    m_surname = surname;
    m_name = name;
    m_patronymic = patronymic;
    m_snils = snils;


    QString fullName = surname + " " + name + " " + patronymic;
    ui->fullNameLabel->setText(fullName);

    loadOrders();
}

void patientcabinet::loadOrders()
{
    ui->ordersList->clear();
    m_patientOrders.clear();

    QList<OrderData> allOrders = OrderStorage::instance().getOrders();
    bool found = false;

    for (int i = 0; i < allOrders.size(); ++i) {
        const OrderData& order = allOrders[i];

        if (order.surname == m_surname &&
            order.name == m_name &&
            order.patronymic == m_patronymic &&
            order.snils == m_snils) {

            m_patientOrders.append(order);

            QString statusIcon;
            QString statusText;

            if (order.status == "ожидает") {
                statusIcon = "⏳";
                statusText = "Ожидает";
            } else if (order.status == "собирается") {
                statusIcon = "🔄";
                statusText = "Собирается";
            } else if (order.status == "Заказ собран") {
                statusIcon = "✅";
                statusText = "ГОТОВ К ВЫДАЧЕ!";
            } else {
                statusIcon = "📋";
                statusText = order.status;
            }

            QString orderText = QString("%1\n"
                                        "   💊 %2\n"
                                        "   📦 Количество: %3 шт.\n"
                                        "   📋 Статус: %4")
                                    .arg(statusIcon)
                                    .arg(order.medicineName)
                                    .arg(order.quantity)
                                    .arg(statusText);

            ui->ordersList->addItem(orderText);
            found = true;
        }
    }

    if (!found) {
        ui->ordersList->addItem("📭 У вас пока нет заказов");
        ui->ordersList->addItem("");
        ui->ordersList->addItem("💡 Чтобы сделать заказ, обратитесь к врачу");
    }
}

void patientcabinet::onOrderClicked(QListWidgetItem *item)
{
    int index = ui->ordersList->row(item);

    if (index < 0 || index >= m_patientOrders.size()) {
        return;
    }

    OrderData order = m_patientOrders[index];

    if (order.status == "Заказ собран") {
        OrderCode *codeWindow = new OrderCode();
        codeWindow->setWindowFlags(Qt::Window);
        codeWindow->setWindowTitle("Код получения заказа");
        codeWindow->setOrderCode(order.orderId);
        codeWindow->show();
    }
    else {
        QString statusMessage;
        if (order.status == "ожидает") {
            statusMessage = "Заказ принят, ожидает подтверждения аптекой.";
        } else if (order.status == "собирается") {
            statusMessage = "Заказ собирается в аптеке.";
        } else {
            statusMessage = "Статус: " + order.status;
        }

        QString message = QString("Лекарство: %1\n"
                                  "Количество: %2 шт.\n"
                                  "Статус: %3\n\n"
                                  "%4\n\n"
                                  "Код будет доступен после сборки заказа.")
                              .arg(order.medicineName)
                              .arg(order.quantity)
                              .arg(order.status)
                              .arg(statusMessage);

        QMessageBox::information(this, "Информация о заказе", message);
    }
}

void patientcabinet::onRefreshButtonClicked()
{
    loadOrders();
    QMessageBox::information(this, "Обновлено", "Список заказов обновлён!");
}

void patientcabinet::onExitButtonClicked()
{
    this->close();

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

patientcabinet::~patientcabinet()
{
    delete ui;
}

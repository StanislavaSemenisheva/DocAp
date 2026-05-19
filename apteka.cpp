#include "apteka.h"
#include "ui_apteka.h"
#include "orderstorage.h"
#include "windowsize.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDialog>

Apteka::Apteka(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Apteka)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/appicon.ico"));

    this->setFixedSize(WINDOW_WIDTH, WINDOW_HEIGHT);

    connect(ui->refreshButton, &QPushButton::clicked,
            this, &Apteka::onRefreshButtonClicked);
    connect(ui->exitButton, &QPushButton::clicked,
            this, &Apteka::onExitButtonClicked);
    connect(ui->ordersList, &QListWidget::itemDoubleClicked,
            this, &Apteka::onOrderDoubleClicked);

    loadOrders();
}

void Apteka::loadOrders()
{
    ui->ordersList->clear();
    m_orders = OrderStorage::instance().getOrders();

    if (m_orders.isEmpty()) {
        ui->ordersList->addItem("📭 Нет активных заказов");
        return;
    }

    for (const OrderData &order : m_orders) {
        QString statusIcon;
        if (order.status == "ожидает") {
            statusIcon = "⏳";
        } else if (order.status == "собирается") {
            statusIcon = "🔄";
        } else if (order.status == "заказ собран") {
            statusIcon = "✅";
        } else {
            statusIcon = "📋";
        }

        QString orderText = QString("%1 %2\n"
                                    "   👤 %3 %4 %5\n"
                                    "   💊 %6\n"
                                    "   📦 Количество: %7 шт.\n"
                                    "   📋 Статус: %8")
                                .arg(statusIcon)
                                .arg(order.orderId)
                                .arg(order.surname)
                                .arg(order.name)
                                .arg(order.patronymic)
                                .arg(order.medicineName)
                                .arg(order.quantity)
                                .arg(order.status);

        ui->ordersList->addItem(orderText);
    }
}

void Apteka::onOrderDoubleClicked(QListWidgetItem *item)
{
    int index = ui->ordersList->row(item);
    if (index < 0 || index >= m_orders.size()) {
        return;
    }

    OrderData order = m_orders[index];

    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("Информация о заказе");
    dialog->setModal(true);

    QVBoxLayout *layout = new QVBoxLayout(dialog);

    // Информация о заказе
    QLabel *infoLabel = new QLabel(QString(
                                       "🆔 Код заказа: %1\n\n"
                                       "👤 Пациент:\n"
                                       "   Фамилия: %2\n"
                                       "   Имя: %3\n"
                                       "   Отчество: %4\n"
                                       "💊 Лекарство: %6\n"
                                       "📦 Количество: %7 шт.\n"
                                       "📋 Текущий статус: %8")
                                       .arg(order.orderId)
                                       .arg(order.surname)
                                       .arg(order.name)
                                       .arg(order.patronymic)
                                       .arg(order.medicineName)
                                       .arg(order.quantity)
                                       .arg(order.status));

    infoLabel->setWordWrap(true);
    layout->addWidget(infoLabel);


    if (order.status != "заказ собран") {
        QPushButton *readyButton = new QPushButton("✅ Заказ готов");
        readyButton->setStyleSheet("background-color: green; color: white; font-size: 14px; padding: 8px;");

        connect(readyButton, &QPushButton::clicked, [this, index, dialog]() {
            OrderStorage::instance().updateOrderStatus(index, "Заказ собран");
            loadOrders();
            dialog->close();

            QMessageBox::information(this, "Статус обновлён",
                                     "Статус заказа изменён");
        });

        layout->addWidget(readyButton);
    } else {
        QLabel *alreadyLabel = new QLabel("✅ Заказ уже собран и готов к выдаче!");
        alreadyLabel->setStyleSheet("color: green; font-size: 12px;");
        layout->addWidget(alreadyLabel);
    }

    QPushButton *closeButton = new QPushButton("Закрыть");
    connect(closeButton, &QPushButton::clicked, dialog, &QDialog::close);
    layout->addWidget(closeButton);

    dialog->setLayout(layout);
    dialog->exec();
}

void Apteka::onRefreshButtonClicked()
{
    loadOrders();
    QMessageBox::information(this, "Обновлено",
                             QString("Загружено заказов: %1").arg(m_orders.size()));
}

void Apteka::onExitButtonClicked()
{
    this->close();

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

Apteka::~Apteka()
{
    delete ui;
}

#include "orderrequest.h"
#include "ui_orderrequest.h"
#include "orderstorage.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QRandomGenerator>
#include <QSpinBox>

OrderRequest::OrderRequest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderRequest)
    , m_quantity(1)
{

    ui->setupUi(this);

    this->setAttribute(Qt::WA_StyledBackground, true);


    this->setWindowIcon(QIcon(":/appicon.ico"));

    this->setFixedSize(662,449);

    ui->aptekaComboBox->addItem("ул. Ленина, 10");
    ui->aptekaComboBox->addItem("пр. Победы, 25");
    ui->aptekaComboBox->addItem("ул. Гагарина, 5");
    ui->aptekaComboBox->addItem("ул. Советская, 15");
    ui->aptekaComboBox->addItem("пр. Мира, 42");

    m_selectedApteka = ui->aptekaComboBox->currentText();

    connect(ui->aptekaComboBox, &QComboBox::currentTextChanged,
            this, [this](const QString &text) {
                m_selectedApteka = text;
            });


    ui->quantitySpinBox->setMinimum(1);
    ui->quantitySpinBox->setMaximum(10);
    ui->quantitySpinBox->setValue(1);

    ui->quantitySpinBox->setEnabled(true);
    ui->quantitySpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

    connect(ui->okButton, &QPushButton::clicked,
            this, &OrderRequest::onOkButtonClicked);
    connect(ui->quantitySpinBox, QOverload<int>::of(&QSpinBox::valueChanged),
            this, &OrderRequest::onQuantityChanged);
}

void OrderRequest::setOrderData(const QString &medicineName,
                                const QString &surname,
                                const QString &name,
                                const QString &patronymic,
                                const QString &snils)
{
    m_medicineName = medicineName;
    m_patientSurname = surname;
    m_patientName = name;
    m_patientPatronymic = patronymic;
    m_patientSnils = snils;

    if (ui->medicineNameLabel) {
        ui->medicineNameLabel->setText(medicineName);
    }

    if (ui->statusLabel) {
        ui->statusLabel->setText("Бесплатно (льгота)");
    }

    ui->quantitySpinBox->setValue(1);
}

void OrderRequest::onQuantityChanged(int value)
{
    m_quantity = value;
}

void OrderRequest::onOkButtonClicked()
{
    if (m_selectedApteka.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Выберите аптеку!");
        return;
    }

    QString quantityText;
    if (m_quantity == 1) {
        quantityText = "1 штука";
    } else if (m_quantity >= 2 && m_quantity <= 4) {
        quantityText = QString::number(m_quantity) + " штуки";
    } else {
        quantityText = QString::number(m_quantity) + " штук";
    }

    OrderData newOrder;
    newOrder.surname = m_patientSurname;
    newOrder.name = m_patientName;
    newOrder.patronymic = m_patientPatronymic;
    newOrder.snils = m_patientSnils;
    newOrder.medicineName = m_medicineName;
    newOrder.quantity = m_quantity;
    newOrder.status = "ожидает";
    newOrder.orderId = QString::number(QRandomGenerator::global()->bounded(10000000, 99999999));
    newOrder.aptekaAddress = m_selectedApteka;

    OrderStorage::instance().addOrder(newOrder);

    QString fullName = m_patientSurname + " " + m_patientName + " " + m_patientPatronymic;

    QMessageBox::information(this, "Запрос отправлен",
                             QString("Запрос на льготное лекарство:\n\n"
                                     "👤 Пациент: %1\n"
                                     "📦 Препарат: %2\n"
                                     "📊 Количество: %3\n"
                                     "🏥 Аптека: %4\n"
                                     "✅ Запрос отправлен в выбранную аптеку!")
                                 .arg(fullName)
                                 .arg(m_medicineName)
                                 .arg(quantityText)
                                 .arg(m_selectedApteka));

    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

OrderRequest::~OrderRequest()
{
    delete ui;
}

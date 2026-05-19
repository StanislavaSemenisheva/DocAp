#include "barcodegenerator.h"
#include "ui_barcodegenerator.h"
#include <QMessageBox>
#include <QRandomGenerator>
#include <QDateTime>
#include <QApplication>

BarcodeGenerator::BarcodeGenerator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BarcodeGenerator)
{
    ui->setupUi(this);

    connect(ui->sendBarcodeButton, &QPushButton::clicked,
            this, &BarcodeGenerator::onSendBarcodeButtonClicked);
}

void BarcodeGenerator::setOrderData(const QString &medicineName, double price)
{
    m_medicineName = medicineName;
    m_price = price;

    QString barcode = generateBarcode();

    QMessageBox::information(this, "Заказ сформирован",
                             QString("Лекарство: %1\nЦена: %2 ₽\nКод заказа: %3")
                                 .arg(medicineName)
                                 .arg(price)
                                 .arg(barcode));
}

QString BarcodeGenerator::generateBarcode()
{
    QString barcode = "46";

    for (int i = 0; i < 10; ++i) {
        barcode += QString::number(QRandomGenerator::global()->bounded(0, 9));
    }

    barcode += QString::number(QDateTime::currentDateTime().currentSecsSinceEpoch()).right(4);

    return barcode;
}

void BarcodeGenerator::onSendBarcodeButtonClicked()
{
    QString barcode = generateBarcode();

    QMessageBox::information(this, "Код заказа отправлен",
                             QString("Код заказа:\n%1\n\n"
                                     "Отправлен в аптеку для сбора заказа.\n"
                                     "Программа будет закрыта.")
                                 .arg(barcode));

    this->close();

    QApplication::quit();
}

BarcodeGenerator::~BarcodeGenerator()
{
    delete ui;
}

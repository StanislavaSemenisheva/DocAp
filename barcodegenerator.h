#ifndef BARCODEGENERATOR_H
#define BARCODEGENERATOR_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class BarcodeGenerator;
}

class BarcodeGenerator : public QWidget
{
    Q_OBJECT

public:
    explicit BarcodeGenerator(QWidget *parent = nullptr);
    ~BarcodeGenerator();

    void setOrderData(const QString &medicineName, double price);

private slots:
    void onSendBarcodeButtonClicked();

private:
    QString generateBarcode();
    Ui::BarcodeGenerator *ui;
    QString m_medicineName;
    double m_price;
};

#endif

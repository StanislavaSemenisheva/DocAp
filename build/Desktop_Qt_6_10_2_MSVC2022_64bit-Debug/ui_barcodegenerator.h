/********************************************************************************
** Form generated from reading UI file 'barcodegenerator.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARCODEGENERATOR_H
#define UI_BARCODEGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BarcodeGenerator
{
public:
    QPushButton *sendBarcodeButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *medicineNameLabel;
    QLabel *totalPriceLabel;
    QLabel *barcodeLabel_2;
    QLabel *barcodeLabel;

    void setupUi(QWidget *BarcodeGenerator)
    {
        if (BarcodeGenerator->objectName().isEmpty())
            BarcodeGenerator->setObjectName("BarcodeGenerator");
        BarcodeGenerator->resize(642, 485);
        sendBarcodeButton = new QPushButton(BarcodeGenerator);
        sendBarcodeButton->setObjectName("sendBarcodeButton");
        sendBarcodeButton->setGeometry(QRect(20, 440, 281, 31));
        widget = new QWidget(BarcodeGenerator);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 471, 411));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        medicineNameLabel = new QLabel(widget);
        medicineNameLabel->setObjectName("medicineNameLabel");

        verticalLayout->addWidget(medicineNameLabel);

        totalPriceLabel = new QLabel(widget);
        totalPriceLabel->setObjectName("totalPriceLabel");

        verticalLayout->addWidget(totalPriceLabel);


        verticalLayout_2->addLayout(verticalLayout);

        barcodeLabel_2 = new QLabel(widget);
        barcodeLabel_2->setObjectName("barcodeLabel_2");

        verticalLayout_2->addWidget(barcodeLabel_2);

        barcodeLabel = new QLabel(widget);
        barcodeLabel->setObjectName("barcodeLabel");

        verticalLayout_2->addWidget(barcodeLabel);


        retranslateUi(BarcodeGenerator);

        QMetaObject::connectSlotsByName(BarcodeGenerator);
    } // setupUi

    void retranslateUi(QWidget *BarcodeGenerator)
    {
        BarcodeGenerator->setWindowTitle(QCoreApplication::translate("BarcodeGenerator", "Form", nullptr));
        sendBarcodeButton->setText(QCoreApplication::translate("BarcodeGenerator", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("BarcodeGenerator", "\320\232\320\276\320\264 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("BarcodeGenerator", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\267\320\260\320\272\320\260\320\267\320\265:", nullptr));
        medicineNameLabel->setText(QCoreApplication::translate("BarcodeGenerator", "\320\233\320\265\320\272\320\260\321\200\321\201\321\202\320\262\320\276:", nullptr));
        totalPriceLabel->setText(QCoreApplication::translate("BarcodeGenerator", "\320\241\321\203\320\274\320\274\320\260:", nullptr));
        barcodeLabel_2->setText(QCoreApplication::translate("BarcodeGenerator", "\320\232\320\276\320\264 \320\267\320\260\320\272\320\260\320\267\320\260:", nullptr));
        barcodeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BarcodeGenerator: public Ui_BarcodeGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARCODEGENERATOR_H

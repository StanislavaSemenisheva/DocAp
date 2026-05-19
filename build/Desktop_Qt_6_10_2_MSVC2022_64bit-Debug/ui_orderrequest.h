/********************************************************************************
** Form generated from reading UI file 'orderrequest.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERREQUEST_H
#define UI_ORDERREQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderRequest
{
public:
    QPushButton *okButton;
    QLabel *label_4;
    QGroupBox *groupBox;
    QLabel *aptekaLabel;
    QComboBox *aptekaComboBox;
    QSpinBox *quantitySpinBox;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *statusLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *medicineNameLabel;

    void setupUi(QWidget *OrderRequest)
    {
        if (OrderRequest->objectName().isEmpty())
            OrderRequest->setObjectName("OrderRequest");
        OrderRequest->resize(662, 449);
        okButton = new QPushButton(OrderRequest);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(240, 390, 161, 41));
        label_4 = new QLabel(OrderRequest);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 20, 91, 31));
        QFont font;
        font.setPointSize(15);
        label_4->setFont(font);
        groupBox = new QGroupBox(OrderRequest);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 60, 401, 261));
        aptekaLabel = new QLabel(groupBox);
        aptekaLabel->setObjectName("aptekaLabel");
        aptekaLabel->setGeometry(QRect(10, 170, 101, 21));
        aptekaComboBox = new QComboBox(groupBox);
        aptekaComboBox->setObjectName("aptekaComboBox");
        aptekaComboBox->setGeometry(QRect(10, 200, 251, 31));
        quantitySpinBox = new QSpinBox(groupBox);
        quantitySpinBox->setObjectName("quantitySpinBox");
        quantitySpinBox->setGeometry(QRect(130, 70, 101, 31));
        quantitySpinBox->setMinimum(1);
        quantitySpinBox->setMaximum(10);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 116, 20));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 110, 211, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        statusLabel = new QLabel(layoutWidget);
        statusLabel->setObjectName("statusLabel");

        horizontalLayout->addWidget(statusLabel);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(12, 22, 361, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        medicineNameLabel = new QLabel(layoutWidget1);
        medicineNameLabel->setObjectName("medicineNameLabel");

        horizontalLayout_2->addWidget(medicineNameLabel);


        retranslateUi(OrderRequest);

        QMetaObject::connectSlotsByName(OrderRequest);
    } // setupUi

    void retranslateUi(QWidget *OrderRequest)
    {
        OrderRequest->setWindowTitle(QCoreApplication::translate("OrderRequest", "Form", nullptr));
        okButton->setText(QCoreApplication::translate("OrderRequest", "\320\237\320\276\320\264\320\277\320\270\321\201\320\260\321\202\321\214 \321\200\320\265\321\206\320\265\320\277\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("OrderRequest", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\320\227\320\260\320\272\320\260\320\267</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        aptekaLabel->setText(QCoreApplication::translate("OrderRequest", "\320\220\320\264\321\200\320\265\321\201 \320\260\320\277\321\202\320\265\320\272\320\270:", nullptr));
        label_3->setText(QCoreApplication::translate("OrderRequest", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 (\321\210\321\202):", nullptr));
        label_2->setText(QCoreApplication::translate("OrderRequest", "\320\241\321\202\320\260\321\202\321\203\321\201 \320\267\320\260\320\272\320\260\320\267\320\260:", nullptr));
        statusLabel->setText(QCoreApplication::translate("OrderRequest", "\320\241\321\203\320\274\320\274\320\260 ", nullptr));
        label->setText(QCoreApplication::translate("OrderRequest", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\265\320\277\320\260\321\200\320\260\321\202\320\260:", nullptr));
        medicineNameLabel->setText(QCoreApplication::translate("OrderRequest", "\320\237\321\200\320\265\320\277\320\260\321\200\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderRequest: public Ui_OrderRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERREQUEST_H

/********************************************************************************
** Form generated from reading UI file 'ordercode.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERCODE_H
#define UI_ORDERCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderCode
{
public:
    QLabel *label;
    QLabel *codeLabel;
    QLabel *label_2;
    QPushButton *closeButton;

    void setupUi(QWidget *OrderCode)
    {
        if (OrderCode->objectName().isEmpty())
            OrderCode->setObjectName("OrderCode");
        OrderCode->resize(495, 303);
        label = new QLabel(OrderCode);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 301, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        codeLabel = new QLabel(OrderCode);
        codeLabel->setObjectName("codeLabel");
        codeLabel->setGeometry(QRect(20, 70, 451, 101));
        QFont font1;
        font1.setPointSize(44);
        font1.setBold(true);
        codeLabel->setFont(font1);
        codeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(OrderCode);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 190, 491, 71));
        closeButton = new QPushButton(OrderCode);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(200, 248, 93, 41));

        retranslateUi(OrderCode);

        QMetaObject::connectSlotsByName(OrderCode);
    } // setupUi

    void retranslateUi(QWidget *OrderCode)
    {
        OrderCode->setWindowTitle(QCoreApplication::translate("OrderCode", "Form", nullptr));
        label->setText(QCoreApplication::translate("OrderCode", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\320\232\320\276\320\264 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\270\321\217 \320\267\320\260\320\272\320\260\320\267\320\260</span></p></body></html>", nullptr));
        codeLabel->setText(QCoreApplication::translate("OrderCode", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">\320\272\320\276\320\264</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("OrderCode", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-style:italic;\">\320\237\320\276\320\272\320\260\320\266\320\270\321\202\320\265 \321\215\321\202\320\276\321\202 \320\272\320\276\320\264 \320\262 \320\260\320\277\321\202\320\265\320\272\320\265 \320\264\320\273\321\217 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\270\321\217 \320\273\320\265\320\272\320\260\321\200\321\201\321\202\320\262\320\260</span></p></body></html>", nullptr));
        closeButton->setText(QCoreApplication::translate("OrderCode", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderCode: public Ui_OrderCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERCODE_H

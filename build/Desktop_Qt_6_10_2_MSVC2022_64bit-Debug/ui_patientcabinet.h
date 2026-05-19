/********************************************************************************
** Form generated from reading UI file 'patientcabinet.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTCABINET_H
#define UI_PATIENTCABINET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientcabinet
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *fullNameLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *ordersList;

    void setupUi(QWidget *patientcabinet)
    {
        if (patientcabinet->objectName().isEmpty())
            patientcabinet->setObjectName("patientcabinet");
        patientcabinet->resize(656, 538);
        label = new QLabel(patientcabinet);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 231, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        layoutWidget = new QWidget(patientcabinet);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 80, 631, 41));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        fullNameLabel = new QLabel(layoutWidget);
        fullNameLabel->setObjectName("fullNameLabel");

        verticalLayout->addWidget(fullNameLabel);

        layoutWidget1 = new QWidget(patientcabinet);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 480, 631, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        exitButton = new QPushButton(layoutWidget1);
        exitButton->setObjectName("exitButton");

        horizontalLayout->addWidget(exitButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refreshButton = new QPushButton(layoutWidget1);
        refreshButton->setObjectName("refreshButton");

        horizontalLayout->addWidget(refreshButton);

        layoutWidget2 = new QWidget(patientcabinet);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 130, 631, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        ordersList = new QListWidget(layoutWidget2);
        ordersList->setObjectName("ordersList");

        verticalLayout_2->addWidget(ordersList);


        retranslateUi(patientcabinet);

        QMetaObject::connectSlotsByName(patientcabinet);
    } // setupUi

    void retranslateUi(QWidget *patientcabinet)
    {
        patientcabinet->setWindowTitle(QCoreApplication::translate("patientcabinet", "Form", nullptr));
        label->setText(QCoreApplication::translate("patientcabinet", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202</span></p></body></html>", nullptr));
        fullNameLabel->setText(QCoreApplication::translate("patientcabinet", "\320\244\320\230\320\236", nullptr));
        exitButton->setText(QCoreApplication::translate("patientcabinet", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        refreshButton->setText(QCoreApplication::translate("patientcabinet", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("patientcabinet", "\320\234\320\276\320\270 \320\267\320\260\320\272\320\260\320\267\321\213:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientcabinet: public Ui_patientcabinet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTCABINET_H

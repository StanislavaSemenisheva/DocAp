/********************************************************************************
** Form generated from reading UI file 'aptekapassword.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APTEKAPASSWORD_H
#define UI_APTEKAPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AptekaPassword
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *passwordEdit;

    void setupUi(QWidget *AptekaPassword)
    {
        if (AptekaPassword->objectName().isEmpty())
            AptekaPassword->setObjectName("AptekaPassword");
        AptekaPassword->resize(662, 449);
        layoutWidget = new QWidget(AptekaPassword);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 370, 641, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_2->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName("loginButton");

        horizontalLayout_2->addWidget(loginButton);

        widget = new QWidget(AptekaPassword);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 0, 370, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");

        horizontalLayout->addWidget(passwordEdit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AptekaPassword);

        QMetaObject::connectSlotsByName(AptekaPassword);
    } // setupUi

    void retranslateUi(QWidget *AptekaPassword)
    {
        AptekaPassword->setWindowTitle(QCoreApplication::translate("AptekaPassword", "Form", nullptr));
        cancelButton->setText(QCoreApplication::translate("AptekaPassword", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        loginButton->setText(QCoreApplication::translate("AptekaPassword", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("AptekaPassword", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\320\222\321\205\320\276\320\264 \320\264\320\273\321\217 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\320\260 \320\260\320\277\321\202\320\265\320\272\320\270</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AptekaPassword", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AptekaPassword: public Ui_AptekaPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APTEKAPASSWORD_H

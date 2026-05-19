/********************************************************************************
** Form generated from reading UI file 'passwordwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDWINDOW_H
#define UI_PASSWORDWINDOW_H

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

class Ui_PasswordWindow
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *passwordEdit;

    void setupUi(QWidget *PasswordWindow)
    {
        if (PasswordWindow->objectName().isEmpty())
            PasswordWindow->setObjectName("PasswordWindow");
        PasswordWindow->resize(610, 430);
        layoutWidget = new QWidget(PasswordWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 360, 591, 61));
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

        widget = new QWidget(PasswordWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 10, 301, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(15);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(11);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");

        horizontalLayout->addWidget(passwordEdit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PasswordWindow);

        QMetaObject::connectSlotsByName(PasswordWindow);
    } // setupUi

    void retranslateUi(QWidget *PasswordWindow)
    {
        PasswordWindow->setWindowTitle(QCoreApplication::translate("PasswordWindow", "Form", nullptr));
        cancelButton->setText(QCoreApplication::translate("PasswordWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        loginButton->setText(QCoreApplication::translate("PasswordWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        titleLabel->setText(QCoreApplication::translate("PasswordWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\320\222\321\205\320\276\320\264 \320\264\320\273\321\217 \320\262\321\200\320\260\321\207\320\260</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("PasswordWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordWindow: public Ui_PasswordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDWINDOW_H

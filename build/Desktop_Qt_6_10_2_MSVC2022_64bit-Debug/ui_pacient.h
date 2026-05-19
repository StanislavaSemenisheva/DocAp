/********************************************************************************
** Form generated from reading UI file 'pacient.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACIENT_H
#define UI_PACIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pacient
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *surnameEdit;
    QLineEdit *nameEdit;
    QLineEdit *patronymicEdit;
    QLineEdit *snilsEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginButton;

    void setupUi(QWidget *Pacient)
    {
        if (Pacient->objectName().isEmpty())
            Pacient->setObjectName("Pacient");
        Pacient->resize(662, 449);
        label = new QLabel(Pacient);
        label->setObjectName("label");
        label->setGeometry(QRect(201, 11, 254, 36));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        groupBox = new QGroupBox(Pacient);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(200, 60, 321, 201));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 301, 161));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        surnameEdit = new QLineEdit(layoutWidget);
        surnameEdit->setObjectName("surnameEdit");

        verticalLayout->addWidget(surnameEdit);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName("nameEdit");

        verticalLayout->addWidget(nameEdit);

        patronymicEdit = new QLineEdit(layoutWidget);
        patronymicEdit->setObjectName("patronymicEdit");

        verticalLayout->addWidget(patronymicEdit);

        snilsEdit = new QLineEdit(layoutWidget);
        snilsEdit->setObjectName("snilsEdit");

        verticalLayout->addWidget(snilsEdit);


        horizontalLayout->addLayout(verticalLayout);

        widget = new QWidget(Pacient);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 390, 641, 51));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(widget);
        backButton->setObjectName("backButton");

        horizontalLayout_2->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        loginButton = new QPushButton(widget);
        loginButton->setObjectName("loginButton");

        horizontalLayout_2->addWidget(loginButton);


        retranslateUi(Pacient);

        QMetaObject::connectSlotsByName(Pacient);
    } // setupUi

    void retranslateUi(QWidget *Pacient)
    {
        Pacient->setWindowTitle(QCoreApplication::translate("Pacient", "Form", nullptr));
        label->setText(QCoreApplication::translate("Pacient", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\320\222\321\205\320\276\320\264 \320\264\320\273\321\217 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Pacient", "<b>\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Pacient", "<b>\320\230\320\274\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Pacient", "<b>\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_5->setText(QCoreApplication::translate("Pacient", "<b>\320\241\320\235\320\230\320\233\320\241", nullptr));
        backButton->setText(QCoreApplication::translate("Pacient", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        loginButton->setText(QCoreApplication::translate("Pacient", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pacient: public Ui_Pacient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACIENT_H

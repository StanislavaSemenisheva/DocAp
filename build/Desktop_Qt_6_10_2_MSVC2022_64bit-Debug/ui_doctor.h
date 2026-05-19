/********************************************************************************
** Form generated from reading UI file 'doctor.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTOR_H
#define UI_DOCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Doctor
{
public:
    QPushButton *nextButton;
    QGroupBox *groupBox;
    QPushButton *clearButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *surnameLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *patronymicLineEdit;
    QLineEdit *snilsLineEdit;

    void setupUi(QWidget *Doctor)
    {
        if (Doctor->objectName().isEmpty())
            Doctor->setObjectName("Doctor");
        Doctor->resize(662, 449);
        nextButton = new QPushButton(Doctor);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(520, 390, 121, 41));
        QFont font;
        font.setPointSize(10);
        nextButton->setFont(font);
        groupBox = new QGroupBox(Doctor);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(200, 50, 411, 241));
        groupBox->setFont(font);
        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(290, 190, 111, 41));
        QFont font1;
        font1.setPointSize(9);
        clearButton->setFont(font1);
        clearButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        clearButton->setMouseTracking(false);
        clearButton->setTabletTracking(false);
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(12, 30, 381, 151));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        surnameLineEdit = new QLineEdit(widget);
        surnameLineEdit->setObjectName("surnameLineEdit");

        verticalLayout->addWidget(surnameLineEdit);

        nameLineEdit = new QLineEdit(widget);
        nameLineEdit->setObjectName("nameLineEdit");

        verticalLayout->addWidget(nameLineEdit);

        patronymicLineEdit = new QLineEdit(widget);
        patronymicLineEdit->setObjectName("patronymicLineEdit");

        verticalLayout->addWidget(patronymicLineEdit);

        snilsLineEdit = new QLineEdit(widget);
        snilsLineEdit->setObjectName("snilsLineEdit");

        verticalLayout->addWidget(snilsLineEdit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Doctor);

        QMetaObject::connectSlotsByName(Doctor);
    } // setupUi

    void retranslateUi(QWidget *Doctor)
    {
        Doctor->setWindowTitle(QCoreApplication::translate("Doctor", "Form", nullptr));
        nextButton->setText(QCoreApplication::translate("Doctor", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Doctor", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202", nullptr));
        clearButton->setText(QCoreApplication::translate("Doctor", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Doctor", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Doctor", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Doctor", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("Doctor", "\320\241\320\235\320\230\320\233\320\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Doctor: public Ui_Doctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTOR_H

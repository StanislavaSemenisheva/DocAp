/********************************************************************************
** Form generated from reading UI file 'patientinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTINFO_H
#define UI_PATIENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientInfo
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *surnameLabel;
    QLabel *nameLabel;
    QLabel *patronymicLabel;
    QLabel *snilsLabel;
    QPushButton *selectMedicineButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *diseaseComboBox;
    QPushButton *backButton;

    void setupUi(QWidget *PatientInfo)
    {
        if (PatientInfo->objectName().isEmpty())
            PatientInfo->setObjectName("PatientInfo");
        PatientInfo->resize(662, 449);
        label = new QLabel(PatientInfo);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 20, 211, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        groupBox = new QGroupBox(PatientInfo);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 80, 611, 291));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(13, 21, 301, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        surnameLabel = new QLabel(layoutWidget);
        surnameLabel->setObjectName("surnameLabel");

        verticalLayout->addWidget(surnameLabel);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName("nameLabel");
        QFont font1;
        font1.setPointSize(10);
        nameLabel->setFont(font1);

        verticalLayout->addWidget(nameLabel);

        patronymicLabel = new QLabel(layoutWidget);
        patronymicLabel->setObjectName("patronymicLabel");
        patronymicLabel->setFont(font1);

        verticalLayout->addWidget(patronymicLabel);

        snilsLabel = new QLabel(layoutWidget);
        snilsLabel->setObjectName("snilsLabel");
        snilsLabel->setFont(font1);

        verticalLayout->addWidget(snilsLabel);

        selectMedicineButton = new QPushButton(groupBox);
        selectMedicineButton->setObjectName("selectMedicineButton");
        selectMedicineButton->setGeometry(QRect(50, 210, 161, 41));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 160, 241, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        diseaseComboBox = new QComboBox(widget);
        diseaseComboBox->setObjectName("diseaseComboBox");

        horizontalLayout->addWidget(diseaseComboBox);

        backButton = new QPushButton(PatientInfo);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(552, 398, 91, 41));

        retranslateUi(PatientInfo);

        QMetaObject::connectSlotsByName(PatientInfo);
    } // setupUi

    void retranslateUi(QWidget *PatientInfo)
    {
        PatientInfo->setWindowTitle(QCoreApplication::translate("PatientInfo", "Form", nullptr));
        label->setText(QCoreApplication::translate("PatientInfo", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\320\232\320\260\321\200\321\202\320\260 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        surnameLabel->setText(QCoreApplication::translate("PatientInfo", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\244\320\260\320\274\320\270\320\273\320\270\321\217</span></p></body></html>", nullptr));
        nameLabel->setText(QCoreApplication::translate("PatientInfo", "\320\230\320\274\321\217", nullptr));
        patronymicLabel->setText(QCoreApplication::translate("PatientInfo", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        snilsLabel->setText(QCoreApplication::translate("PatientInfo", "\320\241\320\235\320\230\320\233\320\241", nullptr));
        selectMedicineButton->setText(QCoreApplication::translate("PatientInfo", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\273\320\265\320\272\320\260\321\200\321\201\321\202\320\262\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("PatientInfo", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\270\320\260\320\263\320\275\320\276\320\267:</span></p></body></html>", nullptr));
        backButton->setText(QCoreApplication::translate("PatientInfo", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientInfo: public Ui_PatientInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTINFO_H

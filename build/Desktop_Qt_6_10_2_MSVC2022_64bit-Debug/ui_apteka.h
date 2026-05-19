/********************************************************************************
** Form generated from reading UI file 'apteka.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APTEKA_H
#define UI_APTEKA_H

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

class Ui_Apteka
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *refreshButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *ordersList;

    void setupUi(QWidget *Apteka)
    {
        if (Apteka->objectName().isEmpty())
            Apteka->setObjectName("Apteka");
        Apteka->resize(662, 449);
        label = new QLabel(Apteka);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 10, 201, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        layoutWidget = new QWidget(Apteka);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 400, 641, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        refreshButton = new QPushButton(layoutWidget);
        refreshButton->setObjectName("refreshButton");

        horizontalLayout->addWidget(refreshButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exitButton = new QPushButton(layoutWidget);
        exitButton->setObjectName("exitButton");

        horizontalLayout->addWidget(exitButton);

        widget = new QWidget(Apteka);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 70, 641, 291));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        ordersList = new QListWidget(widget);
        ordersList->setObjectName("ordersList");

        verticalLayout->addWidget(ordersList);


        retranslateUi(Apteka);

        QMetaObject::connectSlotsByName(Apteka);
    } // setupUi

    void retranslateUi(QWidget *Apteka)
    {
        Apteka->setWindowTitle(QCoreApplication::translate("Apteka", "Form", nullptr));
        label->setText(QCoreApplication::translate("Apteka", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\320\220\320\277\321\202\320\265\320\272\320\260-\320\267\320\260\320\272\320\260\320\267\321\213</span></p></body></html>", nullptr));
        refreshButton->setText(QCoreApplication::translate("Apteka", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        exitButton->setText(QCoreApplication::translate("Apteka", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label_2->setText(QCoreApplication::translate("Apteka", "\320\220\320\272\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\265 \320\267\320\260\320\272\320\260\320\267\321\213:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Apteka: public Ui_Apteka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APTEKA_H

#include "mainwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setWindowIcon(QIcon(":/appicon.ico"));

    a.setStyleSheet(

        "QWidget, QMainWindow, QDialog { background-color: #FFFFFF; }"

        "QPushButton {"
        "   background-color: #87CEEB;"
        "   color: #2C3E50;"
        "   border: none;"
        "   border-radius: 8px;"
        "   padding: 10px 20px;"
        "   font-weight: bold;"
        "   font-size: 12px;"
        "}"
        "QPushButton:hover {"
        "   background-color: #6BB5D5;"
        "}"
        "QPushButton:pressed {"
        "   background-color: #5BA3C7;"
        "}"

        "QLineEdit, QTextEdit {"
        "   background-color: #FFFFFF;"
        "   border: 1px solid #CCCCCC;"
        "   border-radius: 6px;"
        "   padding: 8px 12px;"
        "   font-size: 12px;"
        "}"
        "QLineEdit:focus, QTextEdit:focus {"
        "   border-color: #87CEEB;"
        "}"

        "QComboBox {"
        "   background-color: #FFFFFF;"
        "   border: 1px solid #CCCCCC;"
        "   border-radius: 6px;"
        "   padding: 8px 12px;"
        "}"
        "QComboBox:hover {"
        "   border-color: #87CEEB;"
        "}"

        "QSpinBox {"
        "   background-color: #FFFFFF;"
        "   border: 1px solid #CCCCCC;"
        "   border-radius: 6px;"
        "   padding: 8px;"
        "}"

        "QListWidget {"
        "   background-color: #FFFFFF;"
        "   border: 1px solid #CCCCCC;"
        "   border-radius: 8px;"
        "   padding: 5px;"
        "}"
        "QListWidget::item:selected {"
        "   background-color: #87CEEB;"
        "   color: #2C3E50;"
        "}"
        "QListWidget::item:hover {"
        "   background-color: #D6EEF8;"
        "}"

        "QLabel {"
        "   color: #2C3E50;"
        "   font-size: 12px;"
        "}"

        "QLabel[heading='true'] {"
        "   font-size: 16px;"
        "   font-weight: bold;"
        "   color: #2C3E50;"
        "}"

        "QDialog {"
        "   background-color: #FFFFFF;"
        "}"

        "QGroupBox {"
        "   font-weight: bold;"
        "   border: 2px solid #D6EEF8;"
        "   border-radius: 10px;"
        "   margin-top: 10px;"
        "   padding-top: 10px;"
        "}"
        "QGroupBox::title {"
        "   subcontrol-origin: margin;"
        "   left: 20px;"
        "   padding: 0 5px 0 5px;"
        "}"
        );

    MainWindow w;
    w.show();
    return a.exec();
}

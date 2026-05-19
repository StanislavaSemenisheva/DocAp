#include "passwordwindow.h"
#include "ui_passwordwindow.h"#include <QLabel>
#include <QPixmap>
#include <QMessageBox>
#include <QKeyEvent>

PasswordWindow::PasswordWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PasswordWindow)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/appicon.ico"));

    QLabel *imageLabel = new QLabel(this);
    imageLabel->setGeometry(30, 20, 140, 140);
    imageLabel->setScaledContents(true);

    QPixmap pixmap(":/icons/doctor.png");
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap);
    }

    imageLabel->show();

    ui->passwordEdit->setFocus();

    connect(ui->loginButton, &QPushButton::clicked,
            this, &PasswordWindow::onLoginButtonClicked);
    connect(ui->cancelButton, &QPushButton::clicked,
            this, &PasswordWindow::onCancelButtonClicked);

    connect(ui->passwordEdit, &QLineEdit::returnPressed,
            this, &PasswordWindow::onLoginButtonClicked);

}

void PasswordWindow::onLoginButtonClicked()
{
    QString enteredPassword = ui->passwordEdit->text();

    if (enteredPassword == CORRECT_PASSWORD) {
        emit accessGranted();
        this->close();
    } else {
        QMessageBox::warning(this, "Ошибка", "Неверный пароль!\nДоступ запрещён.");
        ui->passwordEdit->clear();
        ui->passwordEdit->setFocus();
    }
}

void PasswordWindow::onCancelButtonClicked()
{
    this->close();
}


PasswordWindow::~PasswordWindow()
{
    delete ui;
}

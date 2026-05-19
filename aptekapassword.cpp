#include "aptekapassword.h"
#include "ui_aptekapassword.h"
#include <QMessageBox>

AptekaPassword::AptekaPassword(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AptekaPassword)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/appicon.ico"));

    QLabel *imageLabel = new QLabel(this);
    imageLabel->setGeometry(20, 30, 130, 130);
    imageLabel->setScaledContents(true);

    QPixmap pixmap(":/icons/pharmacy.png");
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap);
    }


    ui->passwordEdit->setFocus();

    connect(ui->loginButton, &QPushButton::clicked,
            this, &AptekaPassword::onLoginButtonClicked);
    connect(ui->cancelButton, &QPushButton::clicked,
            this, &AptekaPassword::onCancelButtonClicked);
    connect(ui->passwordEdit, &QLineEdit::returnPressed,
            this, &AptekaPassword::onLoginButtonClicked);
}

void AptekaPassword::onLoginButtonClicked()
{
    QString enteredPassword = ui->passwordEdit->text();

    if (enteredPassword == CORRECT_PASSWORD) {
        emit accessGranted();
        this->close();
    } else {
        QMessageBox::warning(this, "Ошибка", "Неверный пароль аптеки!");
        ui->passwordEdit->clear();
        ui->passwordEdit->setFocus();
    }
}

void AptekaPassword::onCancelButtonClicked()
{
    this->close();
}

AptekaPassword::~AptekaPassword()
{
    delete ui;
}

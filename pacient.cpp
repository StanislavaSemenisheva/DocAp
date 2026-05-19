#include "pacient.h"
#include "ui_pacient.h"
#include "patientcabinet.h"
#include "windowsize.h"
#include "mainwindow.h"
#include <QLabel>
#include <QPixmap>
#include <QMessageBox>

Pacient::Pacient(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Pacient)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/appicon.ico"));

    QLabel *imageLabel = new QLabel(this);
    imageLabel->setGeometry(20, 63, 140, 140);
    imageLabel->setScaledContents(true);

    QPixmap pixmap(":/icons/free-icon-font-users-alt.png");
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap);
    }

    imageLabel->show();

    this->resize(WINDOW_WIDTH, WINDOW_HEIGHT);

    ui->snilsEdit->setInputMask("999-999-999 99");
    ui->snilsEdit->setPlaceholderText("XXX-XXX-XXX XX");

    connect(ui->loginButton, &QPushButton::clicked,
            this, &Pacient::onLoginButtonClicked);

    connect(ui->backButton, &QPushButton::clicked,
            this, &Pacient::onBackButtonClicked);
}

void Pacient::onLoginButtonClicked()
{
    QString surname = ui->surnameEdit->text();
    QString name = ui->nameEdit->text();
    QString patronymic = ui->patronymicEdit->text();
    QString snils = ui->snilsEdit->text();


    if (surname.isEmpty() || name.isEmpty() || patronymic.isEmpty() || snils.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля!");
        return;
    }

    if (snils.length() != 14) {
        QMessageBox::warning(this, "Ошибка", "СНИЛС должен содержать 11 цифр!\nФормат: XXX-XXX-XXX XX");
        return;
    }

    patientcabinet *cabinet = new patientcabinet();
    cabinet->setWindowFlags(Qt::Window);
    cabinet->setWindowTitle("Личный кабинет пациента");
    cabinet->setPatientData(surname, name, patronymic, snils);
    cabinet->show();

    this->close();
}

void Pacient::onBackButtonClicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}

Pacient::~Pacient()
{
    delete ui;
}

#include "doctor.h"
#include "ui_doctor.h"
#include "patientinfo.h"
#include "windowsize.h"
#include <QLabel>
#include <QPixmap>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

Doctor::Doctor(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Doctor)
{
    ui->setupUi(this);

    // Создаём QLabel вручную
    QLabel *imageLabel = new QLabel(this);
    imageLabel->setGeometry(20, 50, 150, 150);
    imageLabel->setScaledContents(true);

    QPixmap pixmap(":/icons/blue_man.png");
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap);
    }

    imageLabel->show();

    this->setWindowIcon(QIcon(":/appicon.ico"));

    this->resize(WINDOW_WIDTH, WINDOW_HEIGHT);

    ui->snilsLineEdit->setInputMask("999-999-999 99");
    ui->snilsLineEdit->setPlaceholderText("XXX-XXX-XXX XX");

    QRegularExpression nameRegex("[А-Яа-я\\-\\s]+");
    QValidator *nameValidator = new QRegularExpressionValidator(nameRegex, this);
    ui->surnameLineEdit->setValidator(nameValidator);
    ui->nameLineEdit->setValidator(nameValidator);
    ui->patronymicLineEdit->setValidator(nameValidator);

    connect(ui->nextButton, &QPushButton::clicked, this, &Doctor::onNextButtonClicked);
    connect(ui->clearButton, &QPushButton::clicked, this, &Doctor::onClearButtonClicked);
}
    void Doctor::onNextButtonClicked()
    {
        QString surname = ui->surnameLineEdit->text();
        QString name = ui->nameLineEdit->text();
        QString patronymic = ui->patronymicLineEdit->text();
        QString snils = ui->snilsLineEdit->text();



        if (surname.isEmpty() || name.isEmpty() || patronymic.isEmpty() || snils.isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Заполните все поля!");
            return;
        }


        if (snils.length() != 14) {
            QMessageBox::warning(this, "Ошибка", "СНИЛС должен содержать 11 цифр!\nФормат: XXX-XXX-XXX XX");
            return;
        }

        PatientInfo *patientWindow = new PatientInfo();
        patientWindow->setWindowFlags(Qt::Window);
        patientWindow->setWindowTitle("Карта пациента");
        patientWindow->setPatientData(surname, name, patronymic, snils);
        patientWindow->show();

        this->close();
    }

    void Doctor::onClearButtonClicked()
    {
        ui->surnameLineEdit->clear();
        ui->nameLineEdit->clear();
        ui->patronymicLineEdit->clear();
        ui->snilsLineEdit->clear();
        ui->surnameLineEdit->setFocus();
    }

Doctor::~Doctor()
{
    delete ui;
}

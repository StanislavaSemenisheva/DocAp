#include "patientinfo.h"
#include "ui_patientinfo.h"
#include "doctor.h"
#include "medicinelistdiabetes1.h"
#include "medicinelistdiabetes2.h"
#include "medicinelisthiv.h"
#include "medicinelisttuberculosis.h"
#include "windowsize.h"
#include <QMessageBox>

QString PatientInfo::m_currentSurname = "";
QString PatientInfo::m_currentName = "";
QString PatientInfo::m_currentPatronymic = "";
QString PatientInfo::m_currentSnils = "";

PatientInfo::PatientInfo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PatientInfo)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/appicon.ico"));

    this->resize(WINDOW_WIDTH, WINDOW_HEIGHT);

    QIcon diabetes1Icon = style()->standardIcon(QStyle::SP_ComputerIcon);
    QIcon diabetes2Icon = style()->standardIcon(QStyle::SP_ComputerIcon);
    QIcon hivIcon = style()->standardIcon(QStyle::SP_MessageBoxWarning);

    ui->diseaseComboBox->addItem("Выберите заболевание...");
    ui->diseaseComboBox->addItem("Сахарный диабет 1-го типа");
    ui->diseaseComboBox->addItem("Сахарный диабет 2-го типа");
    ui->diseaseComboBox->addItem("ВИЧ-инфекция");
    ui->diseaseComboBox->addItem("Туберкулёз");

    ui->diseaseComboBox->setStyleSheet(
        "QComboBox {"
        "   padding: 8px;"
        "   font-size: 12px;"
        "   border: 1px solid #ccc;"
        "   border-radius: 4px;"
        "}"
        "QComboBox::drop-down {"
        "   width: 20px;"
        "}"
    );

    connect(ui->backButton, &QPushButton::clicked,
            this, &PatientInfo::onBackButtonClicked);

    connect(ui->selectMedicineButton, &QPushButton::clicked,
            this, &PatientInfo::onSelectMedicineButtonClicked);
}

void PatientInfo::setPatientData(const QString &surname,
                                 const QString &name,
                                 const QString &patronymic,
                                 const QString &snils)
{
    m_surname = surname;
    m_name = name;
    m_patronymic = patronymic;
    m_snils = snils;

    m_currentSurname = surname;
    m_currentName = name;
    m_currentPatronymic = patronymic;
    m_currentSnils = snils;

    ui->surnameLabel->setText(surname);
    ui->nameLabel->setText(name);
    ui->patronymicLabel->setText(patronymic);
    ui->snilsLabel->setText(snils);
}

void PatientInfo::onSelectMedicineButtonClicked()
{

    int index = ui->diseaseComboBox->currentIndex();
    QString disease = ui->diseaseComboBox->currentText();

    if (index == 0) {
        QMessageBox::warning(this, "Ошибка", "Выберите заболевание из списка!");
        return;
    }

    MedicineListBase *medicineWindow = nullptr;

    switch (index) {
    case 1:
        medicineWindow = new MedicineListDiabetes1();
        break;
    case 2:
        medicineWindow = new MedicineListDiabetes2();
        break;
    case 3:
        medicineWindow = new Medicinelisthiv();
        break;
    case 4:
        medicineWindow = new MedicineListTuberculosis();
        break;
    default:
        QMessageBox::warning(this, "Ошибка", "Неизвестное заболевание!");
        return;
    }

    if (medicineWindow) {
        medicineWindow->setWindowFlags(Qt::Window);
        medicineWindow->setWindowTitle("Лекарства для: " + disease);
        medicineWindow->setPatientData(m_surname, m_name, m_patronymic, m_snils);
        medicineWindow->resize(550, 600);
        medicineWindow->show();
    }


    this->close();
}

void PatientInfo::onBackButtonClicked()
{
    Doctor *doctorWindow = new Doctor();
    doctorWindow->setWindowFlags(Qt::Window);
    doctorWindow->setWindowTitle("Ввод данных пациента");
    doctorWindow->show();
    this->close();
}



PatientInfo::~PatientInfo()
{
    delete ui;
}

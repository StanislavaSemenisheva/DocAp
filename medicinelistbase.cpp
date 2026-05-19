#include "medicinelistbase.h"
#include "orderrequest.h"
#include "windowsize.h"

MedicineListBase::MedicineListBase(QWidget *parent)
    : QWidget(parent)
{
    this->resize(WINDOW_WIDTH, WINDOW_HEIGHT);

    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *titleLabel = new QLabel("Список доступных льготных лекарств:", this);
    titleLabel->setStyleSheet("font-size: 14px; font-weight: bold;");
    layout->addWidget(titleLabel);

    m_medicinesList = new QListWidget(this);
    layout->addWidget(m_medicinesList);

    setLayout(layout);
    resize(500, 600);

    connect(m_medicinesList, &QListWidget::itemDoubleClicked,
            this, &MedicineListBase::onItemDoubleClicked);
}

void MedicineListBase::setPatientData(const QString &surname,
                                      const QString &name,
                                      const QString &patronymic,
                                      const QString &snils)
{
    m_surname = surname;
    m_name = name;
    m_patronymic = patronymic;
    m_snils = snils;
}

void MedicineListBase::addMedicine(const QString &medicineName)
{
    m_medicinesList->addItem(medicineName);
}

void MedicineListBase::onItemDoubleClicked(QListWidgetItem *item)
{
    if (!item) return;

    QString medicineName = item->text();

    OrderRequest *orderWindow = new OrderRequest();
    orderWindow->setWindowFlags(Qt::Window);
    orderWindow->setWindowTitle("Оформление льготного заказа");
    orderWindow->setOrderData(medicineName, m_surname, m_name, m_patronymic, m_snils);
    orderWindow->resize(400, 500);
    orderWindow->show();

    this->close();
}

MedicineListBase::~MedicineListBase()
{
}

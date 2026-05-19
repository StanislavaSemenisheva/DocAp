#ifndef MEDICINELISTBASE_H
#define MEDICINELISTBASE_H

#include <QWidget>
#include <QListWidget>
#include <QVBoxLayout>
#include <QLabel>

class MedicineListBase : public QWidget
{
    Q_OBJECT

public:
    explicit MedicineListBase(QWidget *parent = nullptr);
    virtual ~MedicineListBase();

    void setPatientData(const QString &surname,
                        const QString &name,
                        const QString &patronymic,
                        const QString &snils);

    void addMedicine(const QString &medicineName);

protected:
    virtual void setupMedicineList() = 0;

private slots:
    void onItemDoubleClicked(QListWidgetItem *item);

private:
    QListWidget *m_medicinesList;
    QString m_surname;
    QString m_name;
    QString m_patronymic;
    QString m_snils;
};

#endif

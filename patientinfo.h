#ifndef PATIENTINFO_H
#define PATIENTINFO_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class PatientInfo;
}

class PatientInfo : public QWidget
{
    Q_OBJECT

public:
    explicit PatientInfo(QWidget *parent = nullptr);
    ~PatientInfo();

    void setPatientData(const QString &surname,
                        const QString &name,
                        const QString &patronymic,
                        const QString &snils);

    QString getSurname() const { return m_surname; }
    QString getName() const { return m_name; }
    QString getPatronymic() const { return m_patronymic; }
    QString getSnils() const { return m_snils; }

private slots:
    void onBackButtonClicked();
    void onSelectMedicineButtonClicked();

private:
    Ui::PatientInfo *ui;
    QString m_surname;
    QString m_name;
    QString m_patronymic;
    QString m_snils;

    static QString m_currentSurname;
    static QString m_currentName;
    static QString m_currentPatronymic;
    static QString m_currentSnils;
};

#endif // PATIENTINFO_H

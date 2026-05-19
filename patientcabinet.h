#ifndef PATIENTCABINET_H
#define PATIENTCABINET_H

#include <QWidget>
#include <QListWidgetItem>
#include "orderstorage.h"


namespace Ui {
class patientcabinet;
}

class patientcabinet : public QWidget
{
    Q_OBJECT

public:
    explicit patientcabinet(QWidget *parent = nullptr);
    ~patientcabinet();

    void setPatientData(const QString &surname,
                        const QString &name,
                        const QString &patronymic,
                        const QString &snils);

private slots:
    void onRefreshButtonClicked();
    void onExitButtonClicked();
    void loadOrders();
    void onOrderClicked(QListWidgetItem *item);

private:
    Ui::patientcabinet *ui;
    QString m_surname;
    QString m_name;
    QString m_patronymic;
    QString m_snils;
    QList<OrderData> m_patientOrders;
};

#endif // PATIENTCABINET_H

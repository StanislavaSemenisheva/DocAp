#ifndef ORDERREQUEST_H
#define ORDERREQUEST_H

#include <QWidget>

namespace Ui {
class OrderRequest;
}

class OrderRequest : public QWidget
{
    Q_OBJECT

public:
    explicit OrderRequest(QWidget *parent = nullptr);
    ~OrderRequest();

    void setOrderData(const QString &medicineName,
                      const QString &surname,
                      const QString &name,
                      const QString &patronymic,
                      const QString &snils);

private slots:
    void onOkButtonClicked();
    void onQuantityChanged(int value);

private:
    Ui::OrderRequest *ui;
    QString m_medicineName;
    QString m_patientSurname;
    QString m_patientName;
    QString m_patientPatronymic;
    QString m_patientSnils;
    int m_quantity;
    QString m_selectedApteka;
};

#endif // ORDERREQUEST_H

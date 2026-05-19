#ifndef ORDERSTORAGE_H
#define ORDERSTORAGE_H

#include <QString>
#include <QList>


struct OrderData {
    QString surname;
    QString name;
    QString patronymic;
    QString snils;
    QString medicineName;
    int quantity;
    QString status;
    QString orderId;
    QString aptekaAddress;
};


class OrderStorage
{
public:
    static OrderStorage& instance();

    void addOrder(const OrderData& order);
    QList<OrderData> getOrders() const;
    void clearOrders();
    void updateOrderStatus(int index, const QString& status);

private:
    OrderStorage() {}
    QList<OrderData> m_orders;
};

#endif // ORDERSTORAGE_H

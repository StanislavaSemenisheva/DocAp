#include "orderstorage.h"

OrderStorage& OrderStorage::instance()
{
    static OrderStorage storage;
    return storage;
}

void OrderStorage::addOrder(const OrderData& order)
{
    m_orders.append(order);
}

QList<OrderData> OrderStorage::getOrders() const
{
    return m_orders;
}

void OrderStorage::clearOrders()
{
    m_orders.clear();
}

void OrderStorage::updateOrderStatus(int index, const QString& status)
{
    if (index >= 0 && index < m_orders.size()) {
        m_orders[index].status = status;
    }
}

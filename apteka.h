#ifndef APTEKA_H
#define APTEKA_H

#include <QWidget>
#include <QListWidgetItem>
#include "orderstorage.h"

namespace Ui {
class Apteka;
}

class Apteka : public QWidget
{
    Q_OBJECT

public:
    explicit Apteka(QWidget *parent = nullptr);
    ~Apteka();

    void loadOrders();

private slots:
    void onRefreshButtonClicked();
    void onExitButtonClicked();
    void onOrderDoubleClicked(QListWidgetItem *item);

private:
    Ui::Apteka *ui;
    QList<OrderData> m_orders;
};

#endif // APTEKA_H

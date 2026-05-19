#ifndef ORDERCODE_H
#define ORDERCODE_H

#include <QWidget>

namespace Ui {
class OrderCode;
}

class OrderCode : public QWidget
{
    Q_OBJECT

public:
    explicit OrderCode(QWidget *parent = nullptr);
    ~OrderCode();

    void setOrderCode(const QString &code);

private slots:
    void onCloseButtonClicked();

private:
    Ui::OrderCode *ui;
};

#endif // ORDERCODE_H

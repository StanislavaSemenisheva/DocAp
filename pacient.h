#ifndef PACIENT_H
#define PACIENT_H

#include <QWidget>

namespace Ui {
class Pacient;
}

class Pacient : public QWidget
{
    Q_OBJECT

public:
    explicit Pacient(QWidget *parent = nullptr);
    ~Pacient();

private slots:
    void onLoginButtonClicked();
    void onBackButtonClicked();

private:
    Ui::Pacient *ui;
};

#endif // PACIENT_H

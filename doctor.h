#ifndef DOCTOR_H
#define DOCTOR_H

#include <QWidget>

namespace Ui {
class Doctor;
}

class Doctor : public QWidget
{
    Q_OBJECT

public:
    explicit Doctor(QWidget *parent = nullptr);
    ~Doctor();

private slots:
    void onNextButtonClicked();
    void onClearButtonClicked();

private:
    Ui::Doctor *ui;
};

#endif

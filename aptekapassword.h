#ifndef APTEKAPASSWORD_H
#define APTEKAPASSWORD_H

#include <QWidget>

namespace Ui {
class AptekaPassword;
}

class AptekaPassword : public QWidget
{
    Q_OBJECT

public:
    explicit AptekaPassword(QWidget *parent = nullptr);
    ~AptekaPassword();

signals:
    void accessGranted();

private slots:
    void onLoginButtonClicked();
    void onCancelButtonClicked();

private:
    Ui::AptekaPassword *ui;
    const QString CORRECT_PASSWORD = "5678";
};

#endif

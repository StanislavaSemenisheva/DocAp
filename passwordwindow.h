#ifndef PASSWORDWINDOW_H
#define PASSWORDWINDOW_H

#include <QWidget>

namespace Ui {
class PasswordWindow;
}

class PasswordWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PasswordWindow(QWidget *parent = nullptr);
    ~PasswordWindow();

signals:
    void accessGranted();

private slots:
    void onLoginButtonClicked();
    void onCancelButtonClicked();

private:
    Ui::PasswordWindow *ui;
    const QString CORRECT_PASSWORD = "1234";
};

#endif // PASSWORDWINDOW_H

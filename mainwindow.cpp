#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "passwordwindow.h"
#include "aptekapassword.h"
#include "apteka.h"
#include "doctor.h"
#include "pacient.h"
#include <QLabel>
#include <QPixmap>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/appicon.ico"));

    QLabel *imageLabel = new QLabel(this);
    imageLabel->setGeometry(249, 18, 50, 50);
    imageLabel->setScaledContents(true);

    QPixmap pixmap(":/icons/icons8.png");
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap);
    }


    connect(ui->doctorButton, &QPushButton::clicked, this, [this]() {
        PasswordWindow *passwordWindow = new PasswordWindow();
        passwordWindow->setWindowFlags(Qt::Window);
        passwordWindow->setWindowTitle("Вход для врача");
        passwordWindow->setAttribute(Qt::WA_DeleteOnClose);


        connect(passwordWindow, &PasswordWindow::accessGranted, this, [this]() {
            // Открываем окно доктора
            Doctor *doctorWindow = new Doctor();
            doctorWindow->setWindowFlags(Qt::Window);
            doctorWindow->setWindowTitle("Ввод данных пациента");
            doctorWindow->show();

            this->close();
        });

        passwordWindow->show();
    });

    connect(ui->pacientButton, &QPushButton::clicked, this, [this]() {
        Pacient *pacientWindow = new Pacient();
        pacientWindow->setWindowFlags(Qt::Window);
        pacientWindow->setWindowTitle("Вход для пациента");
        pacientWindow->show();
        this->close();
    });

    connect(ui->aptekaButton, &QPushButton::clicked, this, &MainWindow::openApteka);
}

void MainWindow::openApteka()
{
    AptekaPassword *aptekaPasswordWindow = new AptekaPassword();
    aptekaPasswordWindow->setWindowFlags(Qt::Window);
    aptekaPasswordWindow->setWindowTitle("Вход для аптеки");
    aptekaPasswordWindow->setAttribute(Qt::WA_DeleteOnClose);

    connect(aptekaPasswordWindow, &AptekaPassword::accessGranted, this, [this]() {
        Apteka *aptekaWindow = new Apteka();
        aptekaWindow->setWindowFlags(Qt::Window);
        aptekaWindow->setWindowTitle("Аптека - Актуальные заказы");
        aptekaWindow->resize(600, 400);
        aptekaWindow->show();
        this->close();
    });

    aptekaPasswordWindow->show();
}


MainWindow::~MainWindow()
{
    delete ui;
}




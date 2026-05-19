#include "ordercode.h"
#include "ui_ordercode.h"

OrderCode::OrderCode(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderCode)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/appicon.ico"));

    ui->codeLabel->setText("00000000");
    ui->codeLabel->setStyleSheet(
        "QLabel {"
        "   font-size: 48px;"
        "   font-weight: bold;"
        "   color: #2C3E50;"
        "   qproperty-alignment: AlignCenter;"
        "}"
        );

    connect(ui->closeButton, &QPushButton::clicked,
            this, &OrderCode::onCloseButtonClicked);
}

void OrderCode::setOrderCode(const QString &code)
{
    ui->codeLabel->setText(code);
}

void OrderCode::onCloseButtonClicked()
{
    this->close();
}

OrderCode::~OrderCode()
{
    delete ui;
}

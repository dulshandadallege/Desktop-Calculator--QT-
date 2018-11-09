#include "widget.h"
#include "ui_widget.h"

#define ADD 1

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    c = new Calculator;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Widget::on_btnNumb_1_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("1");
    ui->txtNumber->setText(s);
}

void Widget::on_btnPlus_clicked()
{
    QString numStr = ui->txtNumber->text();
    int n = numStr.toInt();
    c->firstNumEntered(n);
    c->additionMode();
    ui->txtNumber->clear();
}

void Widget::on_btnEqual_clicked()
{
    QString numStr = ui->txtNumber->text();
    int n = numStr.toInt();

    c->secondNumEntered(n);
    int res = c->calculate();

    ui->txtNumber->setText(QString("%1").arg(res));
}

void Widget::on_btnClear_clicked()
{
    ui->txtNumber->clear();
    c->clear();
}

void Widget::on_btnMinus_clicked()
{
    QString numStr = ui->txtNumber->text();
    int n = numStr.toInt();
    c->firstNumEntered(n);
    c->subtractionMode();
    ui->txtNumber->clear();
}

void Widget::on_btnNumb_2_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("2");
    ui->txtNumber->setText(s);
}

void Widget::on_btnNumb_3_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("3");
    ui->txtNumber->setText(s);
}

void Widget::on_btnNumb_4_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("4");
    ui->txtNumber->setText(s);
}

void Widget::on_btnNumb_5_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("5");
    ui->txtNumber->setText(s);
}

void Widget::on_btnNumb_6_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("6");
    ui->txtNumber->setText(s);
}

void Widget::on_btnNumb_7_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("7");
    ui->txtNumber->setText(s);
}

void Widget::on_btnNumb_8_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("8");
    ui->txtNumber->setText(s);
}

void Widget::on_btnNumb_9_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("9");
    ui->txtNumber->setText(s);
}

void Widget::on_btnNumb_10_clicked()
{
    QString s = ui->txtNumber->text();
    s.append("0");
    ui->txtNumber->setText(s);
}

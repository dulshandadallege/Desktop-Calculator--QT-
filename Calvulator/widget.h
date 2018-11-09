#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "calculator.h"

namespace Ui {
    class Widget;
}

class Widget : public QWidget {
    Q_OBJECT
public:
    Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Widget *ui;
    Calculator *c;

private slots:
    void on_btnNumb_10_clicked();
    void on_btnNumb_9_clicked();
    void on_btnNumb_8_clicked();
    void on_btnNumb_7_clicked();
    void on_btnNumb_6_clicked();
    void on_btnNumb_5_clicked();
    void on_btnNumb_4_clicked();
    void on_btnNumb_3_clicked();
    void on_btnNumb_2_clicked();
    void on_btnMinus_clicked();
    void on_btnClear_clicked();
    void on_btnEqual_clicked();
    void on_btnPlus_clicked();
    void on_btnNumb_1_clicked();
};

#endif // WIDGET_H

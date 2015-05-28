#ifndef CLOSESURE_H
#define CLOSESURE_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include "mainwindow.h"
#include <QLabel>
#include <ctime>
#include <QKeyEvent>
namespace Ui {
class closesure;
}

class closesure : public QDialog
{
    Q_OBJECT

public:
    explicit closesure(QWidget *parent = 0);
    ~closesure();

private:
    Ui::closesure *ui;
    QPixmap pic;
    QLabel* ouch1;
    QLabel* ouch2;
    QLabel* ouch3;
    QPushButton* yes;
    QPushButton* no;
    void keyPressEvent(QKeyEvent *event);
private slots:
    void sure();
    void nosure();
};

#endif // CLOSESURE_H

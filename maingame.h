#ifndef MAINGAME_H
#define MAINGAME_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include "mainwindow.h"
#include <QLabel>
#include <ctime>
#include <QKeyEvent>
#include <QLCDNumber>
namespace Ui {
class maingame;
}

class maingame : public QDialog
{
    Q_OBJECT

public:
    explicit maingame(QWidget *parent = 0);
    ~maingame();

private:
    QLCDNumber* lcd;
    QPushButton* clbu;
    QPushButton* rebu;
    QPixmap pic;
    QLabel* sixteen[16];
    int randvalue,rush,i,j,k;
    int randpos,score;
    int zeronum,changnum;
    int playboard[16];
    Ui::maingame *ui;
    void keyPressEvent(QKeyEvent *event);
private slots:
    void restartgame();
    void closethis();

};

#endif // MAINGAME_H

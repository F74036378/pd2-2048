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
#include "loose.h"
namespace Ui {
class maingame;
}

class maingame : public QDialog
{
    Q_OBJECT

    friend class loose;

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
    bool cantmove;
    int highspeed;
    Ui::maingame *ui;
    void keyPressEvent(QKeyEvent *event);
private slots:
    void restartgame();
    void closethis();

};

#endif // MAINGAME_H

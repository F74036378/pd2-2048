#ifndef PANICK_H
#define PANICK_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include "mainwindow.h"
#include <QLabel>
#include <ctime>
#include <QKeyEvent>
#include <QLCDNumber>
#include "loose.h"
#include <QtGui>
#include "closesure.h"
#include "mainmode.h"

namespace Ui {
class panick;
}

class panick : public QDialog
{
    Q_OBJECT
    friend class loose;
    friend class mainmode;


public:
    explicit panick(QWidget *parent = 0);
    ~panick();

private:
    Ui::panick *ui;
    QLCDNumber* sco;
    QPushButton* clo;
    QPushButton* res;
    QPushButton* mod;
    QPixmap pix;
    QLabel* turn[16];
    int randvalue,rush,i,j,k;
    int randpos,score;
    int zeronum,changenum,highspeed;
    int playboard[16];
    bool cantmove;
    int t,rmode;
    int currentx[16];
    int currenty[16];
    void sleep(unsigned int msec);
    void keyPressEvent(QKeyEvent *event);
private slots:
    void restartgame();
    void closegame();
    void modegame();
};

#endif // PANICK_H

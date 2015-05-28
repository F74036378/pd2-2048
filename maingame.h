#ifndef MAINGAME_H
#define MAINGAME_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include "mainwindow.h"
#include <QLabel>
#include <ctime>
#include <QKeyEvent>
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
    QPixmap pic;
    QLabel* sixteen[16];
    QLabel* sco;
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

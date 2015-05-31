#ifndef MODE2_H
#define MODE2_H

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
class mode2;
}

class mode2 : public QDialog
{
    Q_OBJECT
    friend class loose;
    friend class mainmode;

public:
    explicit mode2(QWidget *parent = 0);
    ~mode2();

private:
    Ui::mode2 *ui;
    QLCDNumber* lcd;
    QPushButton* clbu;
    QPushButton* rebu;
    QPushButton* mode;
    QPixmap pic;
    QLabel* sixteen[16];
    int randvalue,rush,i,j,k;
    int randpos,score;
    int zeronum,changnum;
    int playboard[16];
    bool cantmove;
    int highspeed,level;
    void keyPressEvent(QKeyEvent *event);
private slots:
    void restartgame();
    void closethis();
    void modegame();
};

#endif // MODE2_H

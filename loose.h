#ifndef LOOSE_H
#define LOOSE_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include "mainwindow.h"
#include <QLabel>
#include <ctime>
#include <QKeyEvent>
#include <QLCDNumber>
#include <QPixmap>
namespace Ui {
class loose;
}

class loose : public QDialog
{
    Q_OBJECT

public:
    explicit loose(QWidget *parent = 0);
    ~loose();

private:
    QPixmap pic;
    QPushButton* closegame;
    QPushButton* continuegame;
    QLabel* lost;
    Ui::loose *ui;
private slots:
    void closegamef();
    void continuegamef();
};

#endif // LOOSE_H

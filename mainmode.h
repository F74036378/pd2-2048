#ifndef MAINMODE_H
#define MAINMODE_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include "mainwindow.h"
#include <QLabel>
#include <ctime>
#include <QKeyEvent>
#include <QtGui>
#include "maingame.h"

namespace Ui {
class mainmode;
}

class mainmode : public QDialog
{
    Q_OBJECT

public:
    explicit mainmode(QWidget *parent = 0);
    ~mainmode();

private:
    Ui::mainmode *ui;
    QPushButton* mode1;
    QPushButton* mode_2;
    QPushButton* mode3;

private slots:
    void classical();
    void XTile();
};

#endif // MAINMODE_H

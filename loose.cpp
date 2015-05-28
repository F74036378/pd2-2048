#include "loose.h"
#include "ui_loose.h"
#include <QtGui>
#include "maingame.h"
loose::loose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loose)
{
    ui->setupUi(this);
    QFrame *frame = new QFrame(this);
    frame->resize(400,300);
    QPixmap pixmap(":/new/prefix1/gameover.png");
    QPalette   palette;
    palette.setBrush(frame->backgroundRole(),QBrush(pixmap));
    frame->setPalette(palette);
    frame->setMask(pixmap.mask());
    frame->setAutoFillBackground(true);
    frame->show();

    closegame = new QPushButton(this);
    continuegame = new QPushButton(this);
    lost = new QLabel(this);
    connect(closegame,SIGNAL(clicked()),this,SLOT(closegamef()));
    connect(continuegame,SIGNAL(clicked()),this,SLOT(continuegamef()));
    closegame->setText("close!");
    continuegame->setText("continue!");
    closegame->setGeometry(33,225,150,50);
    continuegame->setGeometry(216,225,150,50);
    closegame->show();
    continuegame->show();
}

loose::~loose()
{
    delete ui;
}

void loose::closegamef(){
    maingame* over = new maingame(this);
    over->close();
    this->close();
}

void loose::continuegamef(){
    maingame* over = new maingame(this);
    over->restartgame();
    this->close();
}

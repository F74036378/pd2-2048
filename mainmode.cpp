#include "mainmode.h"
#include "ui_mainmode.h"
#include "mode2.h"
mainmode::mainmode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainmode)
{
    ui->setupUi(this);
    QFrame *frame = new QFrame(this);
    frame->resize(400,300);
    QPixmap pixmap(":/new/prefix1/mode.JPG");
    QPalette   palette;
    palette.setBrush(frame->backgroundRole(),QBrush(pixmap));
    frame->setPalette(palette);
    frame->setMask(pixmap.mask());
    frame->setAutoFillBackground(true);
    frame->show();
    mode1 = new QPushButton(this);
    mode_2 = new QPushButton(this);
    mode3 = new QPushButton(this);
    mode1->setGeometry(25,133,100,50);
    mode_2->setGeometry(150,133,100,50);
    mode3->setGeometry(275,133,100,50);
    mode1->setText("Classic");
    mode_2->setText("X-Tile");
    mode3->setText("Panick");
    connect(mode1,SIGNAL(clicked()),this,SLOT(classical()));
    connect(mode_2,SIGNAL(clicked()),this,SLOT(XTile()));
}

mainmode::~mainmode()
{
    delete ui;
}

void mainmode::classical(){
    maingame* classwindow = new maingame(this);
    classwindow->show();
    this->hide();
}

void mainmode::XTile(){
    mode2* two = new mode2(this);
    two->show();
    this->hide();
}

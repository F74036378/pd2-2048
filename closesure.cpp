#include "closesure.h"
#include "ui_closesure.h"
#include "maingame.h"
#include <QKeyEvent>
closesure::closesure(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::closesure)
{
    ui->setupUi(this);
    yes = new QPushButton(this);
    no = new QPushButton(this);
    yes->setGeometry(50,50,100,50);
    yes->show();
    no->setGeometry(200,50,100,50);
    no->show();
    yes->setText("Yes(y)!");
    no->setText("Nope(n)!");
    connect(yes,SIGNAL(clicked()),this,SLOT(sure()));
    connect(no,SIGNAL(clicked()),this,SLOT(nosure()));
    pic.load(":/new/prefix1/sure.gif");
    ouch1 = new QLabel(this);
    ouch2 = new QLabel(this);
    ouch3 = new QLabel(this);
    ouch1->setPixmap(pic);
    ouch1->setGeometry(32,100,86,80);
    ouch2->setPixmap(pic);
    ouch2->setGeometry(132,100,86,80);
    ouch3->setPixmap(pic);
    ouch3->setGeometry(232,100,86,80);
    ouch1->show();
    ouch2->show();
    ouch3->show();
}

closesure::~closesure()
{
    delete ui;
}

void closesure::sure(){
    this->close();
    maingame* gg = new maingame(this);
    gg->close();
}

void closesure::nosure(){
    this->hide();
}

void closesure::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Y){
        sure();
    }
    if(event->key() == Qt::Key_N){
        nosure();
    }
}

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFrame *frame = new QFrame(this);
    frame->resize(350,400);
    QPixmap pixmap(":/new/prefix1/start.png");
    QPalette   palette;
    palette.setBrush(frame->backgroundRole(),QBrush(pixmap));
    frame->setPalette(palette);
    frame->setMask(pixmap.mask());
    frame->setAutoFillBackground(true);
    frame->show();

    startg = new QPushButton(this);
    startg->setGeometry(125,250,100,50);
    startg->setText("start!!");
    startg->show();
    connect(startg,SIGNAL(clicked()),this,SLOT(gamestart()));
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gamestart(){
    mainmode* gamewindow = new mainmode(this);
    gamewindow->show();
    this->hide();
}

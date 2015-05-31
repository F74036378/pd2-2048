#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(gamestart()));
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

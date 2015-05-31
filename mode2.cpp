#include "mode2.h"
#include "ui_mode2.h"

mode2::mode2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mode2)
{
    ui->setupUi(this);
    this->setWindowTitle("GameWindow!");
    QFrame *frame = new QFrame(this);
    frame->resize(600,650);
    QPixmap pixmap(":/new/prefix1/mode2.png");
    QPalette   palette;
    palette.setBrush(frame->backgroundRole(),QBrush(pixmap));
    frame->setPalette(palette);
    frame->setMask(pixmap.mask());
    frame->setAutoFillBackground(true);
    frame->show();

    lcd = new QLCDNumber(this);
    lcd->show();
    lcd->setGeometry(20,20,100,60);

    clbu = new QPushButton(this);
    rebu = new QPushButton(this);
    mode = new QPushButton(this);
    rebu->setGeometry(450,55,100,30);
    clbu->setGeometry(450,15,100,30);
    mode->setGeometry(450,95,100,30);
    rebu->setText("restart");
    clbu->setText("close");
    mode->setText("mode");
    clbu->setFocusPolicy(Qt::NoFocus);
    rebu->setFocusPolicy(Qt::NoFocus);
    mode->setFocusPolicy(Qt::NoFocus);
    connect(rebu,SIGNAL(clicked()),this,SLOT(restartgame()));
    connect(clbu,SIGNAL(clicked()),this,SLOT(closethis()));
    connect(mode,SIGNAL(clicked()),this,SLOT(modegame()));

    randvalue = 0;
    changnum = 0;
    rush = highspeed = level = 0;
    randpos = 0;
    zeronum = 0;
    score = 0;
    cantmove = 1;
    lcd->display(score);
    for(i=0;i<16;i++){
        playboard[i]=0;
    }
    for(i=0;i<16;i++){
       sixteen[i] = new QLabel(this);
       sixteen[i]->setGeometry(100+(i%4)*110,200+(i/4)*110,70,70);
       sixteen[i]->show();
    }
    srand((unsigned int)time(0));
    randpos = rand()%16+1;
    randvalue = rand()%3+2;
    if(randvalue == 3){
        randvalue = 2;
    }
    playboard[randpos] = randvalue;
    while(1){
    randpos = rand()%16+1;
        if(playboard[randpos] == 0){
            playboard[randpos] = 1;
            break;
        }
    }
    for(i=0;i<16;i++){
        if(playboard[i]==1){
            pic.load(":/new/prefix1/magicstone.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==0){
            pic.load(":/new/prefix1/0.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==2){
            pic.load(":/new/prefix1/2.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==4){
            pic.load(":/new/prefix1/4.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==8){
            pic.load(":/new/prefix1/8.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==16){
            pic.load(":/new/prefix1/16.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==32){
            pic.load(":/new/prefix1/32.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==64){
            pic.load(":/new/prefix1/64.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==128){
            pic.load(":/new/prefix1/128.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==256){
            pic.load(":/new/prefix1/256.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==512){
            pic.load(":/new/prefix1/512.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==1024){
            pic.load(":/new/prefix1/1024.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==2048){
            pic.load(":/new/prefix1/2048.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==4096){
            pic.load(":/new/prefix1/4096.png");
            sixteen[i]->setPixmap(pic);
        }
        if(playboard[i]==8192){
            pic.load(":/new/prefix1/8192.png");
            sixteen[i]->setPixmap(pic);
        }
    }
}

mode2::~mode2()
{
    delete ui;
}

void mode2::restartgame(){
score = 0;
lcd->display(score);
for(i=0;i<16;i++){
    playboard[i] = 0 ;
}
randpos = rand()%16+1;
randvalue = rand()%3+2;
if(randvalue == 3){
    randvalue = 2;
}
playboard[randpos] = randvalue;
while(1){
randpos = rand()%16+1;
    if(playboard[randpos] == 0){
        playboard[randpos] = 1;
        break;
    }
}
for(i=0;i<16;i++){
    if(playboard[i]==1){
        pic.load(":/new/prefix1/magicstone.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==0){
        pic.load(":/new/prefix1/0.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==2){
        pic.load(":/new/prefix1/2.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==4){
        pic.load(":/new/prefix1/4.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==8){
        pic.load(":/new/prefix1/8.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==16){
        pic.load(":/new/prefix1/16.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==32){
        pic.load(":/new/prefix1/32.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==64){
        pic.load(":/new/prefix1/64.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==128){
        pic.load(":/new/prefix1/128.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==256){
        pic.load(":/new/prefix1/256.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==512){
        pic.load(":/new/prefix1/512.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==1024){
        pic.load(":/new/prefix1/1024.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==2048){
        pic.load(":/new/prefix1/2048.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==4096){
        pic.load(":/new/prefix1/4096.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==8192){
        pic.load(":/new/prefix1/8192.png");
        sixteen[i]->setPixmap(pic);
    }
}
}

void mode2::closethis(){
closesure* window = new closesure(this);
window->show();
}

void mode2::keyPressEvent(QKeyEvent *event){
if(score>6141 && level == 0){
    for(i=0;i<16;i++){
        if(playboard[i] == 0){
            playboard[i] = -1;
            level = 1;
            break;
        }
    }
}
if(event->key() == Qt::Key_D ||event->key() == Qt::Key_Right){
    for(i=0;i<4;i++){
        for(j=3;j>=0;j--){
            if(playboard[(i*4)+j]==0){
                zeronum++;
            }
            else{
                if(zeronum!=0){
                    changnum++;
                    rush = playboard[(i*4)+j];
                    playboard[(i*4)+j]=playboard[(i*4)+j+zeronum];
                    playboard[(i*4)+j+zeronum] = rush;
                    zeronum = 0;
                    rush = 0;
                    j=3;
                    continue;
                }
            }
        }
        zeronum = 0;
    }
    for(i=0;i<4;i++){
        for(j=2;j>=0;j--){
            if(playboard[(i*4)+j]!=0){
                if(playboard[(i*4)+j]==playboard[(i*4)+j+1]){
                    changnum++;
                    playboard[(i*4)+j+1] += playboard[(i*4)+j];
                    score += playboard[(i*4)+j+1];
                    for(k=j;k>0;k--){
                        playboard[(i*4)+k] = playboard[(i*4)+k-1];
                    }
                    playboard[i*4] = 0;
                    j = -1;
                    continue;
                }
            }
        }
    }
    for(i=0;i<16;i++){
        if(playboard[i] == 0){
            highspeed++;
        }
    }
    if(changnum!=0){
        if(highspeed<=4){
            for(i=0;i<16;i++){
                if(playboard[i] == 0){
                    randvalue = rand()%3+2;
                    if(randvalue == 3){
                        randvalue = 2;
                    }
                    playboard[i] = randvalue;
                    highspeed = 0;
                    break;
                }
            }
        }
        else{
            while(1){
                randpos = rand()%16+1;
                randvalue = rand()%3+2;
                if(randvalue == 3){
                    randvalue = 2;
                }
                if(playboard[randpos]==0){
                    playboard[randpos]=randvalue;
                    changnum = 0;
                    break;
                }
            }
            highspeed = 0;
        }
    }


}
if(event->key() == Qt::Key_A ||event->key() == Qt::Key_Left){
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(playboard[(i*4)+j]==0){
                zeronum++;
            }
            else{
                if(zeronum!=0){
                    changnum++;
                    rush = playboard[(i*4)+j];
                    playboard[(i*4)+j]=playboard[(i*4)+j-zeronum];
                    playboard[(i*4)+j-zeronum] = rush;
                    zeronum = 0;
                    rush = 0;
                    j=0;
                    continue;
                }
            }
        }
        zeronum = 0;
    }
    for(i=0;i<4;i++){
        for(j=1;j<4;j++){
            if(playboard[(i*4)+j]!=0){
                if(playboard[(i*4)+j]==playboard[(i*4)+j-1]){
                    changnum++;
                    playboard[(i*4)+j-1] += playboard[(i*4)+j];
                    score+=playboard[(i*4)+j-1];
                    for(k=j;k<3;k++){
                        playboard[(i*4)+k] = playboard[(i*4)+k+1];
                    }
                    playboard[(i*4)+3] = 0;
                    j = 4;
                    continue;
                }
            }
        }
    }
    for(i=0;i<16;i++){
        if(playboard[i] == 0){
            highspeed++;
        }
    }
    if(changnum!=0){
        if(highspeed<=4){
            for(i=0;i<16;i++){
                if(playboard[i] == 0){
                    randvalue = rand()%3+2;
                    if(randvalue == 3){
                        randvalue = 2;
                    }
                    playboard[i] = randvalue;
                    highspeed = 0;
                    break;
                }
            }
        }
        else{
            while(1){
                randpos = rand()%16+1;
                randvalue = rand()%3+2;
                if(randvalue == 3){
                    randvalue = 2;
                }
                if(playboard[randpos]==0){
                    playboard[randpos]=randvalue;
                    changnum = 0;
                    break;
                }
            }
            highspeed = 0;
        }
    }


}
if(event->key() == Qt::Key_W ||event->key() == Qt::Key_Up){
    for(j=0;j<4;j++){
        for(i=0;i<4;i++){
            if(playboard[(i*4)+j]==0){
                zeronum++;
            }
            else{
                if(zeronum!=0){
                    changnum++;
                    rush = playboard[(i*4)+j];
                    playboard[(i*4)+j]=playboard[((i-zeronum)*4)+j];
                    playboard[((i-zeronum)*4)+j] = rush;
                    zeronum = 0;
                    rush = 0;
                    i=0;
                    continue;
                }
            }
        }
        zeronum = 0;
    }
    for(j=0;j<4;j++){
        for(i=1;i<4;i++){
            if(playboard[(i*4)+j]!=0){
                if(playboard[(i*4)+j]==playboard[((i-1)*4)+j]){
                    changnum++;
                    playboard[((i-1)*4)+j] += playboard[(i*4)+j];
                    score += playboard[((i-1)*4)+j];
                    for(k=i;k<3;k++){
                        playboard[(k*4)+j] = playboard[((k+1)*4)+j];
                    }
                    playboard[3*4+j] = 0;
                    i = 5;
                    continue;
                }
            }
        }
    }
    for(i=0;i<16;i++){
        if(playboard[i] == 0){
            highspeed++;
        }
    }
    if(changnum!=0){
        if(highspeed<=4){
            for(i=0;i<16;i++){
                if(playboard[i] == 0){
                    randvalue = rand()%3+2;
                    if(randvalue == 3){
                        randvalue = 2;
                    }
                    playboard[i] = randvalue;
                    highspeed = 0;
                    break;
                }
            }
        }
        else{
            while(1){
                randpos = rand()%16+1;
                randvalue = rand()%3+2;
                if(randvalue == 3){
                    randvalue = 2;
                }
                if(playboard[randpos]==0){
                    playboard[randpos]=randvalue;
                    changnum = 0;
                    break;
                }
            }
            highspeed = 0;
        }
    }


}
if(event->key() == Qt::Key_S ||event->key() == Qt::Key_Down){
    for(j=0;j<4;j++){
        for(i=3;i>=0;i--){
            if(playboard[(i*4)+j]==0){
                zeronum++;
            }
            else{
                if(zeronum!=0){
                    changnum++;
                    rush = playboard[(i*4)+j];
                    playboard[(i*4)+j]=playboard[((i+zeronum)*4)+j];
                    playboard[((i+zeronum)*4)+j] = rush;
                    zeronum = 0;
                    rush = 0;
                    i=3;
                    continue;
                }
            }
        }
        zeronum = 0;
    }
    for(j=0;j<4;j++){
        for(i=2;i>=0;i--){
            if(playboard[(i*4)+j]!=0){
                if(playboard[(i*4)+j]==playboard[((i+1)*4)+j]){
                    changnum++;
                    playboard[((i+1)*4)+j] += playboard[(i*4)+j];
                    score += playboard[((i+1)*4)+j];
                    for(k=i;k>0;k--){
                        playboard[(k*4)+j] = playboard[((k-1)*4)+j];
                    }
                    playboard[j] = 0;
                    i = -1;
                    continue;
                }
            }
        }
    }
    for(i=0;i<16;i++){
        if(playboard[i] == 0){
            highspeed++;
        }
    }
    if(changnum!=0){
        if(highspeed<=4){
            for(i=0;i<16;i++){
                if(playboard[i] == 0){
                    randvalue = rand()%3+2;
                    if(randvalue == 3){
                        randvalue = 2;
                    }
                    playboard[i] = randvalue;
                    highspeed = 0;
                    break;
                }
            }
        }
        else{
            while(1){
                randpos = rand()%16+1;
                randvalue = rand()%3+2;
                if(randvalue == 3){
                    randvalue = 2;
                }
                if(playboard[randpos]==0){
                    playboard[randpos]=randvalue;
                    changnum = 0;
                    break;
                }
            }
            highspeed = 0;
        }
    }


}
lcd->display(score);
cantmove = 1;
for(i=0;i<16;i++){
    if(playboard[i]==1 || playboard[i] == -1){
        pic.load(":/new/prefix1/magicstone.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==0){
        cantmove = 0;
        pic.load(":/new/prefix1/0.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==2){
        pic.load(":/new/prefix1/2.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==4){
        pic.load(":/new/prefix1/4.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==8){
        pic.load(":/new/prefix1/8.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==16){
        pic.load(":/new/prefix1/16.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==32){
        pic.load(":/new/prefix1/32.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==64){
        pic.load(":/new/prefix1/64.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==128){
        pic.load(":/new/prefix1/128.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==256){
        pic.load(":/new/prefix1/256.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==512){
        pic.load(":/new/prefix1/512.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==1024){
        pic.load(":/new/prefix1/1024.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==2048){
        pic.load(":/new/prefix1/2048.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==4096){
        pic.load(":/new/prefix1/4096.png");
        sixteen[i]->setPixmap(pic);
    }
    if(playboard[i]==8192){
        pic.load(":/new/prefix1/8192.png");
        sixteen[i]->setPixmap(pic);
    }
}
if(cantmove){
    for(j=0;j<4;j++){
        for(i=0;i<3;i++){
            if(playboard[(i*4)+j] == playboard[((i+1)*4)+j]){
                cantmove = 0;
                j=4;
                break;
            }
        }
    }
}
if(cantmove){
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            if(playboard[(i*4)+j] == playboard[(i*4)+j+1]){
                cantmove = 0;
                i = 5;
                break;
            }
        }
    }
}
if(cantmove){
    loose* oops = new loose(this);
    oops->show();
}
}

void mode2::modegame(){
mainmode* mmode = new mainmode(this);
mmode->show();
this->hide();
}

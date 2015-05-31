#include "panick.h"
#include "ui_panick.h"

panick::panick(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::panick)
{
    ui->setupUi(this);
    this->setWindowTitle("GameWindow!");
    QFrame *frame = new QFrame(this);
    frame->resize(600,650);
    QPixmap pixmap(":/new/prefix1/images.jpg");
    QPalette   palette;
    palette.setBrush(frame->backgroundRole(),QBrush(pixmap));
    frame->setPalette(palette);
    frame->setMask(pixmap.mask());
    frame->setAutoFillBackground(true);
    frame->show();

    sco = new QLCDNumber(this);
    sco->show();
    sco->setGeometry(20,20,100,60);

    clo = new QPushButton(this);
    res = new QPushButton(this);
    mod = new QPushButton(this);
    res->setGeometry(450,55,100,30);
    clo->setGeometry(450,15,100,30);
    mod->setGeometry(450,95,100,30);
    res->setText("restart");
    clo->setText("close");
    mod->setText("mode");
    clo->setFocusPolicy(Qt::NoFocus);
    res->setFocusPolicy(Qt::NoFocus);
    mod->setFocusPolicy(Qt::NoFocus);
    connect(res,SIGNAL(clicked()),this,SLOT(restartgame()));
    connect(clo,SIGNAL(clicked()),this,SLOT(closegame()));
    connect(mod,SIGNAL(clicked()),this,SLOT(modegame()));

    randvalue = changenum = rush = highspeed = 0;
    randpos = zeronum = score = cantmove = 0;
    t = 3;
    rmode = 0;
    sco->display(score);
    for(i=0;i<16;i++){
        playboard[i]=0;
    }
    for(i=0;i<16;i++){
       turn[i] = new QLabel(this);
       turn[i]->setGeometry(100+(i%4)*110,200+(i/4)*110,70,70);
       turn[i]->show();
    }
    for(i=0;i<16;i++){
        currentx[i] = turn[i]->x();
        currenty[i] = turn[i]->y();
    }
    srand((unsigned int)time(NULL));
    randpos = rand()%16+1;
    randvalue = rand()%3+2;
    if(randvalue == 3){
        randvalue = 2;
    }
    playboard[randpos] = randvalue;
    for(i=0;i<16;i++){
        if(playboard[i]==0){
            cantmove = 0;
            pix.load(":/new/prefix1/0.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==2){
            pix.load(":/new/prefix1/2.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==4){
            pix.load(":/new/prefix1/4.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==8){
            pix.load(":/new/prefix1/8.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==16){
            pix.load(":/new/prefix1/16.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==32){
            pix.load(":/new/prefix1/32.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==64){
            pix.load(":/new/prefix1/64.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==128){
            pix.load(":/new/prefix1/128.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==256){
            pix.load(":/new/prefix1/256.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==512){
            pix.load(":/new/prefix1/512.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==1024){
            pix.load(":/new/prefix1/1024.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==2048){
            pix.load(":/new/prefix1/2048.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==4096){
            pix.load(":/new/prefix1/4096.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==8192){
            pix.load(":/new/prefix1/8192.png");
            turn[i]->setPixmap(pix);
        }
    }



}

panick::~panick()
{
    delete ui;
}

void panick::restartgame(){
    score = 0;
    sco->display(score);
    for(i=0;i<16;i++){
        playboard[i] = 0 ;
    }
    randpos = rand()%16+1;
    randvalue = rand()%3+2;
    if(randvalue == 3){
        randvalue = 2;
    }
    playboard[randpos] = randvalue;
    for(i=0;i<16;i++){
        if(playboard[i]==0){
            cantmove = 0;
            pix.load(":/new/prefix1/0.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==2){
            pix.load(":/new/prefix1/2.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==4){
            pix.load(":/new/prefix1/4.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==8){
            pix.load(":/new/prefix1/8.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==16){
            pix.load(":/new/prefix1/16.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==32){
            pix.load(":/new/prefix1/32.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==64){
            pix.load(":/new/prefix1/64.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==128){
            pix.load(":/new/prefix1/128.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==256){
            pix.load(":/new/prefix1/256.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==512){
            pix.load(":/new/prefix1/512.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==1024){
            pix.load(":/new/prefix1/1024.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==2048){
            pix.load(":/new/prefix1/2048.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==4096){
            pix.load(":/new/prefix1/4096.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==8192){
            pix.load(":/new/prefix1/8192.png");
            turn[i]->setPixmap(pix);
        }
    }


}

void panick::closegame(){
    closesure* window = new closesure(this);
    window->show();
}

void panick::keyPressEvent(QKeyEvent *event){

    if(event->key() == Qt::Key_D ||event->key() == Qt::Key_Right){
        for(i=0;i<4;i++){
            for(j=3;j>=0;j--){
                if(playboard[(i*4)+j]==0){
                    zeronum++;
                }
                else{
                    if(zeronum!=0){
                        changenum++;
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
                        changenum++;
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
        if(changenum!=0){
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
                        changenum = 0;
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
                        changenum++;
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
                        changenum++;
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
        if(changenum!=0){
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
                        changenum = 0;
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
                        changenum++;
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
                        changenum++;
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
        if(changenum!=0){
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
                        changenum = 0;
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
                        changenum++;
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
                        changenum++;
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
        if(changenum!=0){
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
                        changenum = 0;
                        break;
                    }
                }
                highspeed = 0;
            }
        }


    }

    sco->display(score);
    cantmove = 1;
    for(i=0;i<16;i++){
        if(playboard[i]==0){
            cantmove = 0;
            pix.load(":/new/prefix1/0.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==2){
            pix.load(":/new/prefix1/2.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==4){
            pix.load(":/new/prefix1/4.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==8){
            pix.load(":/new/prefix1/8.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==16){
            pix.load(":/new/prefix1/16.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==32){
            pix.load(":/new/prefix1/32.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==64){
            pix.load(":/new/prefix1/64.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==128){
            pix.load(":/new/prefix1/128.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==256){
            pix.load(":/new/prefix1/256.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==512){
            pix.load(":/new/prefix1/512.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==1024){
            pix.load(":/new/prefix1/1024.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==2048){
            pix.load(":/new/prefix1/2048.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==4096){
            pix.load(":/new/prefix1/4096.png");
            turn[i]->setPixmap(pix);
        }
        if(playboard[i]==8192){
            pix.load(":/new/prefix1/8192.png");
            turn[i]->setPixmap(pix);
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
    t = t-1;
    if(t == 0){
        for(i=0;i<10;i++){
            turn[0]->move((turn[0]->x())+(currentx[3]-currentx[0])/10,(turn[0]->y())+(currenty[3]-currenty[0])/10);
            turn[1]->move((turn[1]->x())+(currentx[7]-currentx[1])/10,(turn[1]->y())+(currenty[7]-currenty[1])/10);
            turn[2]->move((turn[2]->x())+(currentx[11]-currentx[2])/10,(turn[2]->y())+(currenty[11]-currenty[2])/10);
            turn[3]->move((turn[3]->x())+(currentx[15]-currentx[3])/10,(turn[3]->y())+(currenty[15]-currenty[3])/10);
            turn[4]->move((turn[4]->x())+(currentx[2]-currentx[4])/10,(turn[4]->y())+(currenty[2]-currenty[4])/10);
            turn[5]->move((turn[5]->x())+(currentx[6]-currentx[5])/10,(turn[5]->y())+(currenty[6]-currenty[5])/10);
            turn[6]->move((turn[6]->x())+(currentx[10]-currentx[6])/10,(turn[6]->y())+(currenty[10]-currenty[6])/10);
            turn[7]->move((turn[7]->x())+(currentx[14]-currentx[7])/10,(turn[7]->y())+(currenty[14]-currenty[7])/10);
            turn[8]->move((turn[8]->x())+(currentx[1]-currentx[8])/10,(turn[8]->y())+(currenty[1]-currenty[8])/10);
            turn[9]->move((turn[9]->x())+(currentx[5]-currentx[9])/10,(turn[9]->y())+(currenty[5]-currenty[9])/10);
            turn[10]->move((turn[10]->x())+(currentx[9]-currentx[10])/10,(turn[10]->y())+(currenty[9]-currenty[10])/10);
            turn[11]->move((turn[11]->x())+(currentx[13]-currentx[11])/10,(turn[11]->y())+(currenty[13]-currenty[11])/10);
            turn[12]->move((turn[12]->x())+(currentx[0]-currentx[12])/10,(turn[12]->y())+(currenty[0]-currenty[12])/10);
            turn[13]->move((turn[13]->x())+(currentx[4]-currentx[13])/10,(turn[13]->y())+(currenty[4]-currenty[13])/10);
            turn[14]->move((turn[14]->x())+(currentx[8]-currentx[14])/10,(turn[14]->y())+(currenty[8]-currenty[14])/10);
            turn[15]->move((turn[15]->x())+(currentx[12]-currentx[15])/10,(turn[15]->y())+(currenty[12]-currenty[15])/10);
            sleep(100);
        }
        for(i=0;i<16;i++){
            currentx[i] = turn[i]->x();
            currenty[i] = turn[i]->y();
        }
        t = 3;
    }

}


void panick::modegame(){
    mainmode* mmode = new mainmode(this);
    mmode->show();
    this->hide();
}

void panick::sleep(unsigned int msec)
{
QTime dieTime = QTime::currentTime().addMSecs(msec);
while( QTime::currentTime() < dieTime )
QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

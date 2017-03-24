#include "myrect.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include "limb.h"

#include <QDebug>

void MyRect::spawn(){
   limb * loss = new limb();
   scene()->addItem(loss);
}

void MyRect::keyPressEvent(QKeyEvent *event){
// qDebug() << "MyRect knows that you pressed a key";
    //check what key is pressed
    if (event->key() == Qt::Key_Left){
        setPos(x()-10,y()); //move left 10, keep current y
    }
    else if (event->key() == Qt::Key_Right){
        setPos(x()+10, y());
    }
    else if (event->key() == Qt::Key_Up){
        setPos(x(),y()-10); //negative moves upwards
    }
    else if (event->key() == Qt::Key_Down){
        setPos(x(),y()+10); //positive moves downwards
    }
    else if (event->key() == Qt::Key_Space){
        limb * mylimb = new limb();
        //qDebug() << "bullet created";
        mylimb->setPos(x(),y());
        scene()->addItem(mylimb);
    }

    //******************************************************
    //for hangman -- want to move printed/pushed letters to jail
    if (event->key() == Qt::Key_A){}
    else if (event->key() == Qt::Key_B){
            //stuff
}
    else if (event->key() == Qt::Key_C){}
    else if (event->key() == Qt::Key_D){}
    else if (event->key() == Qt::Key_E){}
    else if (event->key() == Qt::Key_F){}
    else if (event->key() == Qt::Key_G){}
    else if (event->key() == Qt::Key_H){}
    else if (event->key() == Qt::Key_I){}
    else if (event->key() == Qt::Key_J){}
    else if (event->key() == Qt::Key_K){}
    else if (event->key() == Qt::Key_L){}
    else if (event->key() == Qt::Key_M){}
    else if (event->key() == Qt::Key_N){}
    else if (event->key() == Qt::Key_O){}
    else if (event->key() == Qt::Key_P){}
    else if (event->key() == Qt::Key_Q){}
    else if (event->key() == Qt::Key_R){}
    else if (event->key() == Qt::Key_S){}
    else if (event->key() == Qt::Key_T){}
    else if (event->key() == Qt::Key_U){}
    else if (event->key() == Qt::Key_V){}
    else if (event->key() == Qt::Key_W){}
    else if (event->key() == Qt::Key_X){}
    else if (event->key() == Qt::Key_Y){}
    else if (event->key() == Qt::Key_Z){}
}

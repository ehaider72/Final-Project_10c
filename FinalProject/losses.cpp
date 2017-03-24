#include "Losses.h"
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>

//falling limbs

Losses::Losses(){
    //draw rect
    setRect(0,0,10,50); //xy lw

    //connect
    QTimer * timer = new QTimer(); //every time timer=0, signal executes
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    //connects timeout function to move

    timer->start(50); //50 ms
}

void Losses::move(){
    //if out of limbs then hang the man
    QList<QGraphicsItem> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i<n; ++i){
        //if (typeid(*(colliding_items[i])))
    }
    //else
    setPos(x(),y()+5);//setPos(x(),y()-10);
    if(pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "Bullet deleted";
    }
}

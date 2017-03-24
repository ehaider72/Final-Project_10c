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

bool Losses::hangTheMan(){ //evaluates number of limbs that have been hung
    QList <QGraphicsItem> colliding_items = collidingItems();
    int cnt = 0;
    n = colliding_items.size();
    const int i = 6;//max number of limbs to be hung
    a = 0;
    while(a <= n && cnt < i)
    {
        if (typeid(*colliding_items[a]) == typeid(Losses))
            cnt++; //how many body parts we've hung already

        if (cnt == i)
            return true;
        else if (a==n && cnt != i){
            return false;
        }

        a++;
    };
}

void Losses::move(){

    if(hangTheMan()){
        //make him drop
    }
    else //hang some limbs
    {
        setPos(x(),y()+5);//setPos(x(),y()-10);
        if(pos().y() + rect().height() < 0){
            scene()->removeItem(this);
            delete this;
            //qDebug() << "Bullet deleted";
        }

    }

}

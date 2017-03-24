#include "limb.h"
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

limb::limb(){
    //draw rect
    setRect(0,0,10,50); //xy lw

    //connect
    QTimer * timer = new QTimer(); //every time timer=0, signal executes
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    //connects timeout function to move

    timer->start(50); //50 ms
}

bool limb::hangTheMan(){ //evaluates number of limbs that have been hung
   // QList <QGraphicsItem> colliding_items = collidingItems();
    int cnt = 0;
   // n = colliding_items.size();
    const int i = 6;//max number of limbs to be hung
    int a = 0;
   /* while(a <= n && cnt < i)
    {
        if (typeid(*colliding_items[a]) == typeid(limb))
            cnt++; //how many body parts we've hung already

        if (cnt == i)
            return true;
        else if (a==n && cnt != i){
            return false;
        }

        a++;
    };*/
    return true; //for testing
}

void limb::move(){

    if(hangTheMan()){
        //make him drop
    }
    else //hang some limbs
    {
        //if head
       // setPos(x()+(1/3)*rect().width(),y());
        //else if body
        //else if arm1
        //else if arm2
        //else if leg1
        //else if leg2
        setPos(x(),y()+5);//setPos(x(),y()-10);
        if(pos().y() + rect().height() < 0){
            scene()->removeItem(this);
            delete this;
            //qDebug() << "Bullet deleted";
        }

    }

}

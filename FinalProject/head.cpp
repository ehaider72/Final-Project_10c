#include "head.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

head::head(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(275,100);

    setPixmap(QPixmap(":/Images/trojan_head.png"));

   // setTransformOriginPoint(400,50);
    //setRotation(180);
}

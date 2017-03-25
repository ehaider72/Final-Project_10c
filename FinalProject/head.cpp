#include "head.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

head::head(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(100,500);

    setPixmap(QPixmap(":/Images/trojan_head.png"));
    setTransformOriginPoint(50,50);
    setRotation(180);
}

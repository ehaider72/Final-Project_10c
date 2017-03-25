#include "body.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

body::body(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(100,500);

    setPixmap(QPixmap(":/Images/trojan_body.png"));
    setTransformOriginPoint(50,50);
    setRotation(180);
}


#include "leftLeg.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

leftLeg::leftLeg(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(100,500);

    setPixmap(QPixmap(":/Images/trojan_leg_left.png"));
    setTransformOriginPoint(50,50);
    setRotation(180);
}


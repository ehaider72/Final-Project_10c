#include "rightArm.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

rightArm::rightArm(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(100,500);

    setPixmap(QPixmap(":/Images/trojan_arm_right.png"));
    setTransformOriginPoint(50,50);
    setRotation(180);
}



#include "leftArm.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

leftArm::leftArm(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(100,500);

    setPixmap(QPixmap(":/Images/trojan_arm_left.png"));
    setTransformOriginPoint(50,50);
    setRotation(180);
}


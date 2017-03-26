#include "leftArm.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

leftArm::leftArm(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(210,275);

    setPixmap(QPixmap(":/Images/trojan_arm_left.png"));
}


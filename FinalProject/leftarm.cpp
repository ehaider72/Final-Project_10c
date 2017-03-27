#include <QGraphicsScene>

#include "leftArm.h"

leftArm::leftArm(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(210,275);

    setPixmap(QPixmap(":/Images/trojan_arm_left.png"));
}


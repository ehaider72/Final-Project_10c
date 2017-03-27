#include <QGraphicsScene>

#include "rightArm.h"

rightArm::rightArm(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(365,195);

    setPixmap(QPixmap(":/Images/trojan_arm_right.png"));

}



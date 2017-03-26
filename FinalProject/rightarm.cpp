#include "rightArm.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

rightArm::rightArm(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(365,195);

    setPixmap(QPixmap(":/Images/trojan_arm_right.png"));

}



#include <QGraphicsScene>

#include "leftLeg.h"


leftLeg::leftLeg(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(255,355);

    setPixmap(QPixmap(":/Images/trojan_leg_left.png"));

}


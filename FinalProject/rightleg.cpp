#include <QGraphicsScene>

#include "rightLeg.h"

rightLeg::rightLeg(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(307,355);

    setPixmap(QPixmap(":/Images/trojan_leg_right.png"));

}

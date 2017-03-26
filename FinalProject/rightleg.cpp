#include "rightLeg.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>

//falling limbs

rightLeg::rightLeg(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(307,355);

    setPixmap(QPixmap(":/Images/trojan_leg_right.png"));

}

#include "noose.h"
#include <QGraphicsScene>


//falling limbs

noose::noose(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(-270,-1);

    setPixmap(QPixmap(":/Images/trojan_noose.png"));
}


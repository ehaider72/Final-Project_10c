#include <QGraphicsScene>

#include "head.h"

head::head(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(275,100);

    setPixmap(QPixmap(":/Images/trojan_head.png"));
}

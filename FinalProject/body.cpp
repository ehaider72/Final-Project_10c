#include <QTimer>
#include <QGraphicsScene>
#include <QList>

#include "body.h"
#include "guesses.h"

//falling limbs

body::body(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(280,245);

    setPixmap(QPixmap(":/Images/trojan_body.png"));
}


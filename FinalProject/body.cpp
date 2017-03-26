#include "body.h"
#include <QTimer>
//#include <QDebug>
#include <QGraphicsScene>
#include <QList>
#include "guesses.h"

//falling limbs

body::body(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
    setPos(280,245);

    setPixmap(QPixmap(":/Images/trojan_body.png"));
}


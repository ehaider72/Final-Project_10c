#include "gameover.h"
#include <QFont>

gameover::gameover(QGraphicsItem *parent): QGraphicsTextItem(parent){


    setPlainText(QString("You hung the trojan!!!") ); // Score: 0
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",30));
    setPos(130,200);
}


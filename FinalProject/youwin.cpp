#include "youwin.h"
#include <QFont>

youwin::youwin(QGraphicsItem *parent): QGraphicsTextItem(parent){


    setPlainText(QString("You freed the trojan") );
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",30));
    setPos(130,200);
}

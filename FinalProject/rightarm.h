#ifndef RIGHTARM_H
#define RIGHTARM_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class rightArm: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    rightArm(QGraphicsItem *parent = 0);
};

#endif // RIGHTARM_H

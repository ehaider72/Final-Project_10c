#ifndef RIGHTLEG_H
#define RIGHTLEG_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class rightLeg : public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    rightLeg(QGraphicsItem *parent = 0);
};

#endif // RIGHTLEG_H

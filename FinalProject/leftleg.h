#ifndef LEFTLEG_H
#define LEFTLEG_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class leftLeg : public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    leftLeg(QGraphicsItem *parent = 0);
};

#endif // LEFTLEG_H

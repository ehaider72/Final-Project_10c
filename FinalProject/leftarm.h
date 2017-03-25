#ifndef LEFTARM_H
#define LEFTARM_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class leftArm : public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    leftArm(QGraphicsItem *parent = 0);
};

#endif // LEFTARM_H

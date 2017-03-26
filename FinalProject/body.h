#ifndef BODY_H
#define BODY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class body : public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    body(QGraphicsItem *parent = 0);

};

#endif // BODY_H

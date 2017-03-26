#ifndef NOOSE_H
#define NOOSE_H


#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class noose : public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    noose(QGraphicsItem *parent = 0);

};


#endif // NOOSE_H

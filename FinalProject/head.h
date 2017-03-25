#ifndef HEAD_H
#define HEAD_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class head : public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    head(QGraphicsItem *parent = 0);
};

#endif // LIMB_H

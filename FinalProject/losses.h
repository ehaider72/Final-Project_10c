#ifndef LOSSES_H
#define LOSSES_H

//falling limbs

#include <QGraphicsRectItem>
#include <QObject>

class Losses : public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Losses();
    void hang_him();
public slots:  //a member fn that can be connect to a signal
    void move();

};




#endif // LOSSES_H

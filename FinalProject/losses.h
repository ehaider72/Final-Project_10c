#ifndef LOSSES_H
#define LOSSES_H

//"What's happening here?"
//-generate limbs
//-make limbs fall into place
//-make body fall when hanged

#include <QGraphicsRectItem>
#include <QObject>

class Losses : public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Losses();
    bool hangTheMan();

public slots:  //a member fn that can be connect to a signal
    void move();

};




#endif // LOSSES_H

#ifndef LIMB_H
#define LIMB_H

//"What's happening here?"
//-generate limbs
//-make limbs fall into place
//-make body fall when hanged

#include <QGraphicsRectItem>
#include <QObject>

class limb : public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    limb();
    bool hangTheMan();

public slots:  //a member fn that can be connect to a signal
    void move();

};




#endif // LIMB_H

#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>
#include <QObject>

class MyRect :  public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent *event);
    void buttonPressEvent(QKeyEvent *event);
public slots:
    void spawn();
};

#endif // MYRECT_H

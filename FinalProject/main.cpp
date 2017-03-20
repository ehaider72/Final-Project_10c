#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem> //all objects in the scene are derived from this class
#include <QGraphicsView>
//#include <QGraphicsRectItem>
#include "myrect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    MyRect * rect = new MyRect();
    rect->setRect(0,0,100,100); //coordinates, dimensions of rectangle

    //add item to scene
    scene->addItem(rect);

    //make rect focusable (akahas ability to be moved)
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus(); //officially declares this item the one to be moved

    //view to visualize scene
    QGraphicsView * view = new QGraphicsView(scene);

    view->show();



    return a.exec();
}

//This file is for understanding Qt so far...will be ammended for game purposes later

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem> //for rectangle objects ... subclass of QGraphicsItem
#include <QGraphicsView> //widget to visualize scene


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //create a scene
    QGraphicsScene *scene = new QGraphicsScene();

    //create item to put in scene
    QGraphicsRectItem *rect = new QGraphicsRectItem(); //default width and length 0x0
    rect->setRect(0,0,100,100); //first two coordinates x,y location on screen, second two are length and width

    //add item to scene
    scene->addItem(rect); //note will see nothing because need to add view

    //add view
    QGraphicsView *view = new QGraphicsView(scene); //passes pointer to scene into visualizing function

    view->show();






    return a.exec();
}

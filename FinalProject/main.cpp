#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem> //all objects in the scene are derived from this class
#include <QApplication>
#include "hangman.h"
#include <QSplashScreen>
#include "mainwindow.h"


#include <QGraphicsView>

//QTimer timer = new QTimer();


hangman * game;

int main(int argc, char *argv[])
{
   // QSplashScreen *splash = new QSplashScreen();
    //splash->showMessage("Welcome to Hangman!",int allignment = Qt::AlignCenter,const QColor& color = Qt::white);

    QApplication a(argc, argv);



    game = new hangman();
    game->show();

    return a.exec();
}

/*
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    //MyRect * player = new MyRect();
    //player->setRect(0,0,100,100); //coordinates, dimensions of rectangle

    //add item to scene
    //scene->addItem(player);

    //make rect focusable (akahas ability to be moved)
    //player->setFlag(QGraphicsItem::ItemIsFocusable);
    //player->setFocus(); //officially declares this item the one to be moved

    //view to visualize scene
    QGraphicsView * view = new QGraphicsView(scene);
    //disable window from becoming infintitely big
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(800,600);
    //view->setSceneRect(0,0,800,600);

    //player->setPos(view->width()/2,view->height() - player->rect().height());

    QTimer * timer = new QTimer();
  //  QObject::connect(timer,SIGNAL(timeout()), player,SLOT(limb()));    //QObject::connect(timer,SIGNAL(timeout()), player,SLOT(spawn()));
    timer->start(2000);


    return a.exec();
}
*/

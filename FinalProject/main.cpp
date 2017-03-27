#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem> //all objects in the scene are derived from this class

#include "hangman.h"

#include "mainwindow.h"


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


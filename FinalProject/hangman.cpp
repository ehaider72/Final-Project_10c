#include <QGraphicsTextItem>
#include <QFont>
#include <QBrush>
#include <QTimer>

#include "hangman.h"
#include "head.h"
#include "body.h"
#include "rightarm.h"
#include "leftarm.h"
#include "rightleg.h"
#include "leftleg.h"
#include "noose.h"
#include "guesses.h"
#include "phrases.h"

#include "form.h"
#include "mainwindow.h"

const int maxGuesses = 6; //6 body parts

hangman::hangman(QWidget * parent) {

    f = new Form();
    f->show();

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);

    setBackgroundBrush(QBrush(QImage(":/Images/trojan_field.png")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600); //whats this do

    myNoose = new noose();
    scene->addItem(myNoose);

    myPhrase = new Phrases();

show();

}

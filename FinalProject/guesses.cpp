//keeps track of guesses and prints them

#include <QFont>
#include <QString>
#include <QGraphicsScene>
#include <QKeyEvent>

#include "guesses.h"
#include "head.h"
#include "body.h"
#include "rightarm.h"
#include "leftarm.h"
#include "rightleg.h"
#include "leftleg.h"

#include "form.h"
#include "ui_form.h"


const int maxGuesses = 6; //6 body parts

Guesses::Guesses(QGraphicsItem * parent) : QGraphicsTextItem(parent){

    setDefaultTextColor(Qt::white);
    setFont(QFont("times",16));
}

QString Guesses::getCurrentGuess(){
    return currentGuess;
}

void Guesses::setGuess(QString g)
{
    currentGuess =g;
}

int Guesses::getnumguesses()
{
    return num;
}

void Guesses::increaseguess()
{
    num++;
}

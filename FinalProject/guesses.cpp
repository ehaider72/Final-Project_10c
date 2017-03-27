//keeps track of guesses and prints them

#include <QFont>
#include <QString>
#include <QGraphicsScene>
#include <QDebug>
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

    qDebug() << "Reached guesses constructor";

    //num = 0; //initial number of letters guessed

   // setPlainText(QString("Incorrect Guesses: "));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",16));
    //printGuesses();
}

//void Guesses::printGuesses()
//{
//    guesses = guesses + currentGuess;
//    setPlainText(QString("Incorrect Guesses: ") + QString(guesses));

//}

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


//void Guesses::keyPressEvent(QKeyEvent *event){
//    switch (event->key()){
//    case Qt::Key_A:
//        currentGuess = "A";
//        break;
//    case Qt::Key_B:
//        currentGuess = "B";
//        break;
//    case Qt::Key_C:
//        currentGuess = "C";
//        break;
//    case Qt::Key_D:
//        currentGuess = "D";
//        break;
//    case Qt::Key_E:
//        currentGuess = "E";
//        break;
//    case Qt::Key_F:
//        currentGuess = "F";
//        break;
//    case Qt::Key_G:
//        currentGuess = "G";
//        break;
//    case Qt::Key_H:
//        currentGuess = "H";
//        break;
//    case Qt::Key_I:
//        currentGuess = "I";
//        break;
//    case Qt::Key_J:
//        currentGuess = "J";
//        break;
//    case Qt::Key_K:
//        currentGuess = "K";
//        break;
//    case Qt::Key_L:
//        currentGuess = "L";
//        break;
//    case Qt::Key_M:
//        currentGuess = "M";
//        break;
//    case Qt::Key_N:
//        currentGuess = "N";
//        break;
//    case Qt::Key_O:
//        currentGuess = "O";
//        break;
//    case Qt::Key_P:
//        currentGuess = "P";
//        break;
//    case Qt::Key_Q:
//        currentGuess = "Q";
//        break;
//    case Qt::Key_R:
//        currentGuess = "R";
//        break;
//    case Qt::Key_S:
//        currentGuess = "S";
//        break;
//    case Qt::Key_T:
//        currentGuess = "T";
//        break;
//    case Qt::Key_U:
//        currentGuess = "U";
//        break;
//    case Qt::Key_V:
//        currentGuess = "V";
//        break;
//    case Qt::Key_W:
//        currentGuess = "W";
//        break;
//    case Qt::Key_X:
//        currentGuess = "X";
//        break;
//    case Qt::Key_Y:
//        currentGuess = "Y";
//        break;
//    case Qt::Key_Z:
//        currentGuess = "Z";
//        break;
//    }
//}





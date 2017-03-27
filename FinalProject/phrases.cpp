
#include <QFont>
#include <QString>
#include <QGraphicsScene>
#include <QDebug>
#include <QKeyEvent>
#include <QInputDialog>

#include "head.h"
#include "body.h"
#include "rightarm.h"
#include "leftarm.h"
#include "rightleg.h"
#include "leftleg.h"
#include "guesses.h"
#include "phrases.h"
#include "hangman.h"
#include "form.h"
#include "ui_form.h"

extern hangman* game;


Phrases::Phrases(QGraphicsItem * parent) : QGraphicsTextItem(parent){

    qDebug() << "Reached Phrases constructor";

    setPlainText(QString("Unsolved Phrase: "));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",16));
    setPos(0,540);
}

void Phrases::printUnsolved(){
    setPlainText(QString("Unsolved Phrase: ") + QString(phrase));
    qDebug() << "No problems printing";
}

void Phrases::setPhrase(QString phrase1)
{
    phrase = phrase1;
    qDebug() << "successfully reached setPhrase in phrases.cpp";
}

void Phrases::setUnsolved(QString un){
    unsolved = un;
}

QString Phrases::setupUnsolved(QString myPhrase) //previously was type QString
{
    unsolved = phrase;//unsolved = myPhrase;
    for (int i = 0; i < phrase.size();i++)
    {

        unsolved[i] = '-';
    }
   printUnsolved();
   return unsolved;

}

void Phrases::updateUnsolved()  //(Guesses myGuess) //used to be QString
{
    //Guesses * guess = new Guesses();
   QString guess = game->myGuesses->getCurrentGuess();
    for(int i=0; phrase.size(); i++){
        if (phrase[i] == guess[0]){
            unsolved[i] = guess[0];
    }
    }
    printUnsolved();

}

bool Phrases::unsolvedIsSolved(){
        for(int i=0; i<phrase.size(); i++){
           if (unsolved.at(i) == '-'){
               return false;
           }
        }
        return true;
}

QString Phrases::returnphrase()
{
    qDebug() << "successfully reached returnphrase in phrases.cpp";
    return phrase;
}

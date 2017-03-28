
#include <QFont>
#include <QString>
#include <QGraphicsScene>
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

    phraseG = new Guesses();
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",16));
    setPos(0,540);
    setupUnsolved();

}

void Phrases::printUnsolved(){
    setPlainText(QString("Unsolved Phrase: ") + QString(unsolved));
}

void Phrases::setPhrase(QString phrase1)
{
    phrase = phrase1;
}

void Phrases::setUnsolved(QString un){
    unsolved = un;
}

void Phrases::setupUnsolved() //previously was type QString
{
    for (int i = 0; i < phrase.size();i++)
    {

        unsolved[i] = '@';
    }
}

void Phrases::updateUnsolved()
{
   QString guess = phraseG->getCurrentGuess();
  int count= 0; //numer of correct guesses
  QString temp = "@";

    for(int i=0; i<phrase.size(); i++){
        if (phrase[i] == guess[0]){ //if correct letter, update unsolved
            unsolved[i] = guess[0];
            count++;

        }
        else if (!(unsolved[i].isLetter())) //keep current update and previous updates, rest are '@'
        {

            unsolved[i] = temp[0];
        }

    }

    int cnt = 0;
    for (int i =0; i<phrase.size();i++){//are there are '@' left in unsolved phrase
        if(unsolved[i].isLetter())
            cnt++;  //cnt = phrase.size corresponds to zero '@' in unsolved--the unsolved is now solved
    }
    if (phrase.size() == cnt)
        solved = true;
    else if (phrase.size() != cnt)
        solved = false;


    if (count==0){
        phraseG->incorrectGuess = true;
        phraseG->increaseguess();

    }
    printUnsolved();

}

QString Phrases::returnphrase()
{
    return phrase;
}

bool Phrases::returnsolved()
{
    return solved;
}

//keeps track of guesses and prints them

#include "guesses.h"
#include <QFont>
#include <QString>
#include <QGraphicsScene>
#include <string>
#include <iostream>
#include <QDebug>
#include <QKeyEvent>
#include "body.h"
#include "head.h"
#include "leftarm.h"
#include "rightarm.h"
#include "leftleg.h"
#include "rightleg.h"

//extern head *trojanHead;
const int maxGuesses = 6; //6 body parts

Guesses::Guesses(QGraphicsItem * parent) : QGraphicsTextItem(parent){
    num = 0; //initial number of letters guessed
    std::string str;
    std::cout << "Enter a phrase that your friend can guess: ";
    std::getline(std::cin, str);
    QString phrase(str.c_str());
    QString guesses("");
    setupUnsolved(phrase);
    solved = false;

   setPlainText(QString("Incorrect Guesses: "));
   setDefaultTextColor(Qt::red);
   setFont(QFont("times",16));
}
/*
void Guesses::guessProceedure()
{
    if (!correctGuess){ //add a limb
        num++;
        if (num == 1)
        {
           head bodyPart = new head();
        }
        else if(num == 2)
        {
            body * bodyPart = new body();
        }
       else if(num == 3){
            rightArm *bodyPart = new rightArm();
        }
        else if (num == 4)
        {
            leftArm* bodyPart = new leftArm();
        }
        else if (num == 5){
            rightLeg *bodyPart = new rightLeg();
        }
        else if (num == 6){
            leftLeg* bodyPart = new leftLeg();
        }
        else
        {
            qDebug() << "You lose! "; //you lose
          //  delete trojanHead;
         //   delete trojanBody;
          //  delete trojanRArm;
           // delete trojanLArm;
           // delete trojanRLeg;
            //delete trojanLLeg;
        }

}

*/
void Guesses::printGuesses()
{
 setPlainText(QString("Incorrect Guesses: ") + QString(currentGuess));
}



QString Guesses::setupUnsolved(QString phrase)
{
    for (int i = 0; i < phrase.size();i++)
    {
        phrase[i] = '-';
    }
    return phrase;

}

QString Guesses::updateUnsolved(QString phrase, QString unsolved) //1.check if already guessed max times
{                                                                 //2.insert correct guess
    if (num != maxGuesses){                                       //3.check to hang limbs
    solved = false;                                               //4.print incorrect guesses
    correctGuess = false;                                         //5.check if has been solved
    for(int i=0; i<phrase.size(); i++){
        if (phrase[i] == currentGuess)
          {unsolved.insert(i, currentGuess); correctGuess = true;}
    }
        //this->guessProceedure();
        this->printGuesses();
    }

    for(int i=0; i<phrase.size(); i++){
       if (unsolved.at(i) == '-'){
           solved = false;
           return unsolved;
       }
    }
    solved = true;
    return unsolved;
}



void Guesses::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_A){
        currentGuess = "a";
        updateUnsolved(phrase,unsolved);
        if (solved){qDebug() << "You win! ";}
    }
/*
    else if (event->key() == Qt::Key_B) {
    //    currentGuess = b;
    }
    else if (event->key() == Qt::Key_C) {

    }
    else if (event->key() == Qt::Key_D) {}
    else if (event->key() == Qt::Key_E) {}
    else if (event->key() == Qt::Key_F) {}
    else if (event->key() == Qt::Key_G) {}
    else if (event->key() == Qt::Key_H) {}
    else if (event->key() == Qt::Key_I) {}
    else if (event->key() == Qt::Key_J) {}
    else if (event->key() == Qt::Key_K) {}
    else if (event->key() == Qt::Key_L) {}
    else if (event->key() == Qt::Key_M) {}
    else if (event->key() == Qt::Key_N) {}
    else if (event->key() == Qt::Key_O) {}
    else if (event->key() == Qt::Key_P) {}
    else if (event->key() == Qt::Key_Q) {}
    else if (event->key() == Qt::Key_R) {}
    else if (event->key() == Qt::Key_S) {}
    else if (event->key() == Qt::Key_T) {}
    else if (event->key() == Qt::Key_U) {}
    else if (event->key() == Qt::Key_V) {}
    else if (event->key() == Qt::Key_W) {}
    else if (event->key() == Qt::Key_X) {}
    else if (event->key() == Qt::Key_Y) {}
    else if (event->key() == Qt::Key_Z) {}*/
}



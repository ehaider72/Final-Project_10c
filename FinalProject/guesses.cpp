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
#include <QInputDialog>


const int maxGuesses = 6; //6 body parts

Guesses::Guesses(QGraphicsItem * parent) : QGraphicsTextItem(parent){

    num = 0; //initial number of letters guessed
    solved = false; //the phrase is unknown


    //std::string str;
  //  phrase = QInputDialog::getText(this, tr("Enter a phrase for your friend:"),tr("Phrase:"),QLineEdit::Normal,tr(""), &ok);
   // std::cout << "Enter a phrase that your friend can guess: ";
   // std::getline(std::cin, str);
    //QString phrase(str.c_str());
    QString guesses("");

    setPlainText(QString(setupUnsolved(phrase)));

    setPlainText(QString("Incorrect Guesses: "));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",16));
}

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
    switch (event->key()){
    case Qt::Key_A:
        currentGuess = "A";
        break;
    case Qt::Key_B:
        currentGuess = "B";
        break;
    case Qt::Key_C:
        currentGuess = "C";
        break;
    case Qt::Key_D:
        currentGuess = "D";
        break;
    case Qt::Key_E:
        currentGuess = "E";
        break;
    case Qt::Key_F:
        currentGuess = "F";
        break;
    case Qt::Key_G:
        currentGuess = "G";
        break;
    case Qt::Key_H:
        currentGuess = "H";
        break;
    case Qt::Key_I:
        currentGuess = "I";
        break;
    case Qt::Key_J:
        currentGuess = "J";
        break;
    case Qt::Key_K:
        currentGuess = "K";
        break;
    case Qt::Key_L:
        currentGuess = "L";
        break;
    case Qt::Key_M:
        currentGuess = "M";
        break;
    case Qt::Key_N:
        currentGuess = "N";
        break;
    case Qt::Key_O:
        currentGuess = "O";
        break;
    case Qt::Key_P:
        currentGuess = "P";
        break;
    case Qt::Key_Q:
        currentGuess = "Q";
        break;
    case Qt::Key_R:
        currentGuess = "R";
        break;
    case Qt::Key_S:
        currentGuess = "S";
        break;
    case Qt::Key_T:
        currentGuess = "T";
        break;
    case Qt::Key_U:
        currentGuess = "U";
        break;
    case Qt::Key_V:
        currentGuess = "V";
        break;
    case Qt::Key_W:
        currentGuess = "W";
        break;
    case Qt::Key_X:
        currentGuess = "X";
        break;
    case Qt::Key_Y:
        currentGuess = "Y";
        break;
    case Qt::Key_Z:
        currentGuess = "Z";
        break;
    }
}





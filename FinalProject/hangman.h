#ifndef HANGMAN_H
#define HANGMAN_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include "head.h"
#include "body.h"
#include "rightArm.h"
#include "leftArm.h"
#include "rightLeg.h"
#include "leftLeg.h"
#include "guesses.h"

class hangman : public QGraphicsView{
public:
    hangman(QWidget * parent = 0);
    QGraphicsScene * scene;

    body * myBody;
    head * myHead;
    leftArm * myLArm;
    rightArm * myRArm;
    leftLeg * myLLeg;
    rightLeg * myRLeg;
    Guesses * myGuesses;
};

#endif // HANGMAN_H

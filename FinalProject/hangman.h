#ifndef HANGMAN_H
#define HANGMAN_H

#inlcude <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include "head.h"
#include "head.h"
#include "rightArm.h"
#include "leftArm.h"
#include "rightLeg.h"
#include "leftLeg.h"

class hangman : public QGraphicsView{
public:
    hangman(QWidget * parent = 0);
    QGraphicsScene * scene;

    body * myBod;
    head * myHead;
    leftArm * myLArm;
    rightArm * myRArm;
    leftLeg * myLLeg;
    rightLeg * myRLeg;
};

#endif // HANGMAN_H

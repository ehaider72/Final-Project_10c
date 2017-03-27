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
#include "phrases.h"
#include "noose.h"
#include "gameover.h"
#include "youwin.h"
class hangman :  public QGraphicsView{
    Q_OBJECT
public:
    hangman(QWidget * parent = 0);
    QGraphicsScene * scene;

    body * myBody;
    head * myHead;
    leftArm * myLArm;
    rightArm * myRArm;
    leftLeg * myLLeg;
    rightLeg * myRLeg;
    noose * myNoose;
    Form * f;
    Phrases* myPhrase;
    gameover * over;
    youwin * win;
};

#endif // HANGMAN_H

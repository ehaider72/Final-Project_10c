#ifndef GUESSES_H
#define GUESSES_H

#include <QGraphicsTextItem>
#include <QObject>

#include "ui_form.h"
#include "form.h"

class Guesses : public QGraphicsTextItem{
    Q_OBJECT
public:

    Guesses(QGraphicsItem * parent = 0 );

//    void printGuesses();
//    void keyPressEvent(QKeyEvent *event);
    QString getCurrentGuess();
    void setGuess(QString g);
    int getnumguesses ();
    void increaseguess();
//signals:
//    void guessStarted();
//public slots:
//    void getPhrase();

private:
    int num = 0;
    bool correctGuess;
    QString currentGuess = "";//current guess (ex 'A')
    //QString guesses = "";     //list of incorrect guesses

};



#endif // GUESSES_H

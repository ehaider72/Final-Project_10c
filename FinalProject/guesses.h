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

    QString getCurrentGuess();
    void setGuess(QString g);
    int getnumguesses ();
    void increaseguess();

private:
    int num = 0;
    bool correctGuess;
    QString currentGuess = "";//current guess (ex 'A')

};



#endif // GUESSES_H

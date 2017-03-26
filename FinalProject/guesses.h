#ifndef GUESSES_H
#define GUESSES_H

#include <QGraphicsTextItem>
//#include <string>

class Guesses : public QGraphicsTextItem{
public:
    Guesses(QGraphicsItem * parent = 0 );
    void printGuesses();
    QString setupUnsolved(QString phrase);
    QString updateUnsolved(QString phrase, QString unsolved);
    void keyPressEvent(QKeyEvent *event);
    void guessProceedure();

private:
    int num; //how many (incorrect) guesses have been made
    QString currentGuess; //current guess (ex 'A')
    QString phrase; //the entered phrase
    QString guesses; //list of incorrect guesses
    QString unsolved; //phrase replaced by '-'
    bool solved; //was the word guessed correctly?
    bool correctGuess;
};



#endif // GUESSES_H

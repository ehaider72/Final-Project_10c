#ifndef PHRASES_H
#define PHRASES_H
#include <QGraphicsTextItem>
#include <QObject>
//#include <string>
#include "ui_form.h"
#include "form.h"
#include "guesses.h"

class Phrases : public QGraphicsTextItem{
    Q_OBJECT
public:

    Phrases(QGraphicsItem * parent = 0 );

    void printUnsolved();
    void setPhrase(QString phrase);
    void setUnsolved(QString un);
    QString setupUnsolved(QString phrase);
    //QString updateUnsolved(Guesses myGuess);
    QString returnphrase();
    bool unsolvedIsSolved();

    //void keyPressEvent(QKeyEvent *event);


/*
signals:
    void guessStarted();
public slots:
    void getPhrase();
*/
public slots:
    //void printUnsolved();
    //void setupUnsolved();// (QString phrase);
    void updateUnsolved();

private:
    QString phrase = "";
    QString unsolved = "";
};


#endif // PHRASES_H

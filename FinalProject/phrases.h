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
    void setupUnsolved();
    QString returnphrase();
    bool unsolvedIsSolved();
    bool returnsolved();
    Guesses* phraseG= nullptr;

public slots:
    void updateUnsolved();

private:
    QString phrase;
    QString unsolved;
    bool solved = false;
};


#endif // PHRASES_H

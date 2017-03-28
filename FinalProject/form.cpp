#include <QGraphicsScene>

#include "form.h"
#include "guesses.h"
#include "phrases.h"
#include "hangman.h"
#include "ui_form.h"

extern hangman * game;

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

   // QObject::connect(ui->pushButton,SIGNAL(isClicked()),g,SLOT(g.getPhrase(myPhrase) ));
}

Form::~Form()
{
    delete ui;
}

void Form::setPhrase(QString word)
{
   formPhrase =word;
}

void Form::on_pushButton_clicked()
{
   QString tempformPhrase = ui->lineEdit->text();   //sets word as phrase
   setPhrase(tempformPhrase);
    ui->lineEdit->setText(QString(""));
}


 QString Form::returnPhrase ()
 {
     return formPhrase;
 }

 QString Form::returnGuess()
 {
     return formGuess;
 }

 void Form::setGuess(QString word)
 {
     formGuess= word;
 }

void Form::on_pushButton_2_clicked()
{
     QString tempformGuess = ui->lineEdit_2->text();
    setGuess(tempformGuess);

    game->myPhrase->phraseG->setGuess(returnGuess());
    game->myPhrase->setPhrase(returnPhrase());
    game->myPhrase->printUnsolved();
    game->myPhrase ->updateUnsolved();

    game->scene->addItem(game->myPhrase);



if (game->myPhrase->phraseG->incorrectGuess){
    switch (game->myPhrase->phraseG->getnumguesses()){
        case 1:

            game->myHead = new head();
            game->scene->addItem(game->myHead);
            break;
        case 2:

            game->myBody = new body();
            game->scene->addItem(game->myBody);
            break;
        case 3:

            game->myRArm = new rightArm();
            game->scene->addItem(game->myRArm);
            break;

        case 4:

            game->myLArm = new leftArm();
            game->scene->addItem(game->myLArm);
            break;

        case 5:
            game->myRLeg = new rightLeg();
            game->scene->addItem(game->myRLeg);
            break;
        case 6:
            game->myLLeg = new leftLeg();
            game->scene->addItem(game->myLLeg);
            game->over = new gameover();
            game->scene->addItem(game->over);
            break;

    }
}

    if(game->myPhrase->returnsolved())
     {
        if (game->myPhrase->phraseG->getnumguesses() == 1)
        {
            delete game->myHead;

        }
        else if (game->myPhrase->phraseG->getnumguesses() == 2)
        {
            delete game->myHead;

            delete game->myBody;

        }
        else if (game->myPhrase->phraseG->getnumguesses() == 3)
        {
            delete game->myHead;

            delete game->myBody;

            delete game->myRArm;

        }
        else if (game->myPhrase->phraseG->getnumguesses() == 4)
        {
            delete game->myHead;

            delete game->myBody;

            delete game->myRArm;

            delete game->myLArm;

        }
        else if (game->myPhrase->phraseG->getnumguesses() == 5)
        {
            delete game->myHead;
            delete game->myBody;
            delete game->myRArm;
            delete game->myLArm;
            delete game->myRLeg;
        }
        else if (game->myPhrase->phraseG->getnumguesses() == 6)
        {
            delete game->myHead;
            delete game->myBody;
            delete game->myRArm;
            delete game->myLArm;
            delete game->myRLeg;
            delete game->myLLeg;
        }

        game->win = new youwin();
        game->scene->addItem(game->win);

    }
    game->myPhrase->phraseG->incorrectGuess = false;
    ui->lineEdit_2->setText(QString(""));


}

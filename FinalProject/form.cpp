#include <QGraphicsScene>
#include <QDebug>

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
   QString tempformPhrase = ui->lineEdit->text();
   setPhrase(tempformPhrase);
    ui->lineEdit->setText(QString(""));

    qDebug() << "successfully reached on_pushButton_clicked";
    //formPhrase= 'lol';
    //this->close();
}

//void Form:: sendingPhrase(QString word)
//{
//    return;
//}

 QString Form::returnPhrase ()
 {
     qDebug() << "successfuly reached returnPhrase() in form.cpp";
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
   // Phrases* myPhrase = new Phrases();

    game->myPhrase->phraseG->setGuess(returnGuess());
    game->myPhrase->setPhrase(returnPhrase());
    //game->myPhrase->setupUnsolved(game->myPhrase->returnphrase());
    game->myPhrase->printUnsolved();
    game->myPhrase ->updateUnsolved();

    game->scene->addItem(game->myPhrase);
    qDebug() << " reached head1" <<game->myPhrase->phraseG->getnumguesses();
    switch (game->myPhrase->phraseG->getnumguesses()){
        case 1:
            game->myHead = new head();
            game->scene->addItem(game->myHead);
            qDebug() << "successfuly reached head1";
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
            break;

    }
}

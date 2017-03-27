#include <QGraphicsScene>
#include <QDebug>

#include "form.h"
#include "guesses.h"
#include "phrases.h"

#include "ui_form.h"



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

void Form::on_pushButton_clicked()
{
    myPhrase = ui->lineEdit->text();
    //Phrases * word = new Phrases();
    emit clicked();
    qDebug() << "successfully reached on_pushButton_clicked";

    //word->setPhrase(myPhrase);
   // word->setPhrase(ui->returnPhrase());
   // word->setupUnsolved(word->returnphrase());
   // word->setupUnsolved(myPhrase);
    //scene()->addItem(word);
   // word->printUnsolved();

    //emit sendingPhrase(myPhrase);
    this->close();
}

//void Form:: sendingPhrase(QString word)
//{
//    return;
//}

 QString Form::returnPhrase ()
 {
     qDebug() << "successfuly reached returnPhrase() in form.cpp";
     return myPhrase;
 }

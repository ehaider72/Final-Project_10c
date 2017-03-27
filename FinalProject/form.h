#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QString>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:

    explicit Form(QWidget *parent = 0);
    ~Form();
    void setPhrase(QString word);
    QString returnPhrase ();
    QString returnGuess();
    void setGuess(QString word);


public slots:
    void on_pushButton_clicked();

signals:
    void sendingPhrase(QString word);
    void clicked();

private slots:
    void on_pushButton_2_clicked();

private:
     QString formPhrase= "not right form contructor";
      QString formGuess= "contructor form";
    Ui::Form *ui;
};

#endif // FORM_H

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

    QString returnPhrase ();

     QString myPhrase;

public slots:
    void on_pushButton_clicked();

signals:
    void sendingPhrase(QString word);
    void clicked();

private:
    Ui::Form *ui;
};

#endif // FORM_H

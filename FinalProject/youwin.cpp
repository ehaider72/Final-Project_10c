#include "youwin.h"
#include <QFont>
#include <QMediaPlayer>

youwin::youwin(QGraphicsItem *parent): QGraphicsTextItem(parent){


    setPlainText(QString("You freed the trojan") );
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",30));
    setPos(130,200);


    // play background music
        QMediaPlayer * music = new QMediaPlayer();
        music->setMedia(QUrl("qrc:/gameover.mp3"));
        music->play();


}

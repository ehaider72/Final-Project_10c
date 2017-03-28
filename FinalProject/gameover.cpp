#include "gameover.h"
#include <QFont>
#include <QMediaPlayer>

gameover::gameover(QGraphicsItem *parent): QGraphicsTextItem(parent){


    setPlainText(QString("You hung the trojan!!!") ); // Score: 0
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",30));
    setPos(130,200);

    // play background music
        QMediaPlayer * music = new QMediaPlayer();
        music->setMedia(QUrl("qrc:/Large_Stadium_Applause.mp3"));
        music->play();


}


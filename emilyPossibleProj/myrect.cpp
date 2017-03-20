#include "myrect.h"

#include <QDebug> //lets see what this does

//called in response to keys being pressed
void MyRect::keyPressEvent(QKeyEvent *event){

    qDebug() << "MyRect knows that you pressed a key";
}

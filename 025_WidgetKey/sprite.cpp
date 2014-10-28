#include "sprite.h"

Sprite::Sprite(QImage bild)
{
    this->bild = bild;
    x = bild.width();
    y = bild.height();
    anzahl = x / y;
}

QImage Sprite::getImage() {
    return bild;
}

QImage Sprite::getImage(int sequence) {
    if (sequence <= anzahl) {
        return bild;
    } else {
        return bild;
    }

}


#ifndef KLASA_H
#define KLASA_H
#include "klasaif.h"
#include <QDebug>
class Klasa : public KlasaIf
{
public:
    Klasa();
    int & suma(int &a, int b);
    int doPotegi(int & a);
    int * doPotegiPointer(int * a);
    QString wyprintuj(QString &str);
    QString wyprintujPointer(QString  * str);
};

#endif // KLASA_H

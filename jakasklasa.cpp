#include "jakasklasa.h"
#include <QDebug>
jakasKlasa::jakasKlasa(KlasaIf * klaska)
{
 m_klaska = klaska;
}
void jakasKlasa::zrobCos()
{
 int a=2,b=3;
 QString *str1 = new QString("WITAM");
 QString str2 ("POPO");
 qDebug() << "str2 w funkcji przed wywikaniem mocka: " << str2;
 m_klaska->suma(a,b);
 m_klaska->wyprintujPointer(str1);
m_klaska->wyprintuj(str2);
qDebug() << "str2 w funkcji po wywikaniem mocka: " << str2;

// m_klaska->doPotegiPointer(&b);
 /*m_klaska->wyprintuj(str1);
 m_klaska->wyprintujPointer(&str1);*/


}

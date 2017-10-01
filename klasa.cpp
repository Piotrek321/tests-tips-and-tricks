#include "klasa.h"

Klasa::Klasa()
{

}

int & Klasa::suma(int & a,int b)
{qDebug() <<"SUMA";
    a = a+b;
  return a;
}

int Klasa::doPotegi(int & a)
{
    int z = a*a;
    a = 99;
    qDebug() << "Dopotegi: " << a << endl;
  return z ;
}

int * Klasa::doPotegiPointer(int * a)
{
  int * x = new int((*a) * (*a));
  qDebug() << "*X: " << *x << endl;
  return x;
}

QString Klasa::wyprintuj(QString &str)
{
  qDebug() <<"Str: " << str;
  return str;
}

QString Klasa::wyprintujPointer(QString *str)
{
    *str = "XXXX";

    qDebug() <<"wyprintujPointer: " << *str;
    return *str;

}

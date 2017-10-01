#ifndef KLASAIF_H
#define KLASAIF_H
#include <iostream>
#include <string.h>
#include <QString>
using namespace std;
class KlasaIf
{
public:
    KlasaIf(){};
    virtual ~KlasaIf(){};
    virtual int &suma(int& a,int b) = 0;
    virtual int doPotegi(int & a) = 0;
    virtual int * doPotegiPointer(int * a) = 0;
    virtual QString wyprintuj(QString &str) = 0;
    virtual QString wyprintujPointer(QString * str) = 0;

};

#endif // KLASAIF_H

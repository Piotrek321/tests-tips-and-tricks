#ifndef MOCKKLASA_H
#define MOCKKLASA_H
#include "klasaif.h"
#include <gtest/gtest.h>
#include "gmock/gmock.h"
class mockClasa : public KlasaIf
{
public:
    mockClasa(){};
    ~mockClasa(){};
    MOCK_METHOD2(suma, int&(int &a ,int b));
    MOCK_METHOD1(doPotegi, int(int &a));
    MOCK_METHOD1(doPotegiPointer, int *(int *a));
    MOCK_METHOD1(wyprintuj, QString(QString &str));
    MOCK_METHOD1(wyprintujPointer, QString(QString * str));
   //virtual int * doPotegiPointer(int * a) = 0;



};

#endif // MOCKKLASA_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "klasa.h"
#include "mockklasa.h"
#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "jakasklasa.h"
using namespace testing;
class Test1 : public testing::Test{
public:
     Test1(){};

};

TEST_F(Test1, testt1)
{
    EXPECT_EQ(1, 1);
    mockClasa * mock;
    mock = new mockClasa;
    jakasKlasa klasa(mock);
    int x;
    //int z =100;
    int a=2,b=3;
    EXPECT_CALL(*mock, suma(a,b)).WillOnce(ReturnRef(x));
    QString *str = new QString();
    QString sss ("ABC");
    EXPECT_CALL(*mock, wyprintujPointer(_)).WillOnce(SaveArgPointee <0>(str)); //srt == WITAM po wywolaniu funkcji
    EXPECT_CALL(*mock, wyprintuj(_)).WillOnce(SetArgReferee <0>(sss));

    //EXPECT_CALL(*mock, doPotegi(_)).WillOnce(SaveArgPointee<0>(&z));
   // EXPECT_CALL(*mock, doPotegi(_)).WillOnce(DoAll(SaveArg<0>(z),(Return(4))));
    qDebug() << "sss przed zrob cos: " << sss;
    klasa.zrobCos();
    qDebug() << "str po zrobcos: " << *str; //WITAM
    qDebug() << "ss zrobcoss: " << sss;
    qDebug() << "*str zrobcos: " << *str;
    ASSERT_THAT(0, Eq(0));
  delete mock;

}

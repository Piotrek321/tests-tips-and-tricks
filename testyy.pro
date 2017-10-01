include(gtest_dependency.pri)
QT += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG += qt
QT += core

HEADERS +=     tst_test1.h \
    klasaif.h \
    klasa.h \
    mockklasa.h \
    jakasklasa.h \
    megaklasa.h

SOURCES +=     main.cpp \
    klasa.cpp \
    jakasklasa.cpp \
    megaklasa.cpp

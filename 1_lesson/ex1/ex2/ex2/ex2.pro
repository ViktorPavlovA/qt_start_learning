TEMPLATE = app
TARGET = ex1

QT = core gui

INCLUDEPATH += /usr/include/c++/11/

CONFIG += c++11 c++14 c++17

HEADERS += \
    form.h \
    iostream
    vector

HEADERS += filesystem

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    form.cpp \
    main.cpp

FORMS += \
    form.ui

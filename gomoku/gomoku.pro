#-------------------------------------------------
#
# Project created by QtCreator 2014-06-12T12:45:44
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nienazwany5
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glwidget.cpp

HEADERS  += mainwindow.h \
    glwidget.h \
    mojdll.h \
    mojdll_global.h

FORMS    += mainwindow.ui
LIBS +="F:\Users\Szymon\Desktop\gomoku\build-gomoku-Desktop_Qt_5_2_1_MinGW_32bit-Debug\debug\mojdll.dll"

#-------------------------------------------------
#
# Project created by QtCreator 2014-06-12T12:53:51
#
#-------------------------------------------------

QT       += widgets opengl

TARGET = mojdll
TEMPLATE = lib

DEFINES += MOJDLL_LIBRARY

SOURCES += mojdll.cpp

HEADERS += mojdll.h\
        mojdll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

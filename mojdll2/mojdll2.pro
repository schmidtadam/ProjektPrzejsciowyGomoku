#-------------------------------------------------
#
# Project created by QtCreator 2014-06-12T15:40:07
#
#-------------------------------------------------

QT       += widgets opengl

TARGET = mojdll2
TEMPLATE = lib

DEFINES += MOJDLL2_LIBRARY

SOURCES += mojdll2.cpp

HEADERS += mojdll2.h\
        mojdll2_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

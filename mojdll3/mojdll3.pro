#-------------------------------------------------
#
# Project created by QtCreator 2014-09-17T18:53:01
#
#-------------------------------------------------

QT       -= gui

TARGET = mojdll3
TEMPLATE = lib

DEFINES += MOJDLL3_LIBRARY

SOURCES += mojdll3.cpp

HEADERS += mojdll3.h\
        mojdll3_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

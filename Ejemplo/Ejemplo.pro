TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    bloques.cpp \
    vector.cpp \
    ../vectores/plataforma.cpp

HEADERS += \
    bloques.h \
    vector.h \
    ../vectores/plataforma.h

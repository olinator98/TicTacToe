TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    player.cpp \
    gameplan.cpp \
    gui.cpp

HEADERS += \
    player.h \
    gameplan.h \
    gui.h

unix:!macx {
TEMPLATE	= app
CONFIG		+= qt release c++11
HEADERS		= qt-signal-slot-test.h
SOURCES		= qt-signal-slot-test.cpp
TARGET		= qt-signal-slot-test
INSTALLS        += target
QT             	+= widgets
target.path     = /usr/local/bin
}

macx {
TEMPLATE	= app
CONFIG		+= qt release c++11
HEADERS		= qt-signal-slot-test.h
SOURCES		= qt-signal-slot-test.cpp
TARGET		= qt-signal-slot-test
INCLUDEPATH += /usr/local/include
INSTALLS        += target
QT             	+= widgets
target.path     = /usr/local/bin
}

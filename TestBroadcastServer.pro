include(../RibiLibraries/WebApplication.pri)
include(../RibiLibraries/BigInteger.pri)
include(../RibiLibraries/BoostAll.pri)
include(../RibiLibraries/Wt.pri)
include(../RibiLibraries/GeneralConsole.pri)
include(../RibiLibraries/GeneralWeb.pri)

include(../RibiClasses/CppWtBroadcastServer/CppWtBroadcastServer.pri)

SOURCES += wtmain.cpp \
    testbroadcastservermenudialog.cpp \
    testbroadcastserverwtmenudialog.cpp \
    testbroadcastserverwtmaindialog.cpp

HEADERS += \
    testbroadcastservermenudialog.h \
    testbroadcastserverwtmaindialog.h \
    testbroadcastserverwtmenudialog.h

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        FileFunctions.cpp \
        cpu.cpp \
        customlist.cpp \
        main.cpp \
        menu.cpp

HEADERS += \
    FileFunctions.hpp \
    cpu.hpp \
    customlist.hpp \
    menu.hpp

DISTFILES += \
    CPU.txt \
    WorkPlan.txt

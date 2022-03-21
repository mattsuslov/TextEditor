QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialogchangeletter.cpp \
    dialogchangesubstring.cpp \
    dialogcompessnumbers.cpp \
    dialogdeletegroups.cpp \
    dialogdeletestring.cpp \
    dialoginsertstring.cpp \
    dialoginsertsubstring.cpp \
    dialogmuliplyinsert.cpp \
    main.cpp \
    editorwindow.cpp \
    textcontainer.cpp

HEADERS += \
    dialogchangeletter.h \
    dialogchangesubstring.h \
    dialogcompessnumbers.h \
    dialogdeletegroups.h \
    dialogdeletestring.h \
    dialoginsertstring.h \
    dialoginsertsubstring.h \
    dialogmuliplyinsert.h \
    editorwindow.h \
    textcontainer.h

FORMS += \
    dialogchangeletter.ui \
    dialogchangesubstring.ui \
    dialogcompessnumbers.ui \
    dialogdeletegroups.ui \
    dialogdeletestring.ui \
    dialoginsertstring.ui \
    dialoginsertsubstring.ui \
    dialogmuliplyinsert.ui \
    editorwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

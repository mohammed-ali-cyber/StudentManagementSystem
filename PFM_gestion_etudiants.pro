QT       += core gui
QT += sql
QT += core gui sql widgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ajou_sup.cpp \
    databasesetup.cpp \
    filrer.cpp \
    lister.cpp \
    main.cpp \
    mainwindow.cpp \
    modif_info.cpp \
    modif_note.cpp \
    partie_enseg.cpp \
    partie_etudiant.cpp

HEADERS += \
    ajou_sup.h \
    databasesetup.h \
    filrer.h \
    lister.h \
    mainwindow.h \
    modif_info.h \
    modif_note.h \
    partie_enseg.h \
    partie_etudiant.h

FORMS += \
    ajou_sup.ui \
    filrer.ui \
    lister.ui \
    mainwindow.ui \
    modif_info.ui \
    modif_note.ui \
    partie_enseg.ui \
    partie_etudiant.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

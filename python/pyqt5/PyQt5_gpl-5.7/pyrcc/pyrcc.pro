TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = pyrcc.pyd
    target.files = pyrcc.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = pyrcc.so
    target.files = pyrcc.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/pyrcc
sip.files = ../sip/pyrcc/pyrccmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=pyrcc.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += ../qpy/pyrcc

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"

    equals(QT_MINOR_VERSION, 5) {
        QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
    }
}

TARGET = pyrcc
HEADERS = sipAPIpyrcc.h ../qpy/pyrcc/rcc.h
SOURCES = sippyrccRCCResourceLibrary.cpp sippyrcccmodule.cpp ../qpy/pyrcc/rcc.cpp

TEMPLATE = lib
CONFIG += warn_on plugin
QT += x11extras
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtX11Extras.pyd
    target.files = QtX11Extras.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtX11Extras.so
    target.files = QtX11Extras.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtX11Extras
sip.files = ../sip/QtX11Extras/qx11info_x11.sip ../sip/QtX11Extras/QtX11Extrasmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtX11Extras.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m

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

TARGET = QtX11Extras
HEADERS = sipAPIQtX11Extras.h
SOURCES = sipQtX11ExtrasQX11Info.cpp sipQtX11Extrascmodule.cpp sipQtX11Extrasxcb_connection_t.cpp sipQtX11ExtrasDisplay.cpp

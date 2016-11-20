TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += webchannel network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebChannel.pyd
    target.files = QtWebChannel.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtWebChannel.so
    target.files = QtWebChannel.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtWebChannel
sip.files = ../sip/QtWebChannel/QtWebChannelmod.sip ../sip/QtWebChannel/qwebchannelabstracttransport.sip ../sip/QtWebChannel/qwebchannel.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebChannel.exp
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

TARGET = QtWebChannel
HEADERS = sipAPIQtWebChannel.h
SOURCES = sipQtWebChannelQWebChannelAbstractTransport.cpp sipQtWebChannelQHash0100QString0101QObject.cpp sipQtWebChannelQWebChannel.cpp sipQtWebChannelcmodule.cpp

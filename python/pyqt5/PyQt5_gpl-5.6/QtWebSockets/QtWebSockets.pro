TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += websockets
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebSockets.pyd
    target.files = QtWebSockets.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtWebSockets.so
    target.files = QtWebSockets.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtWebSockets
sip.files = ../sip/QtWebSockets/QtWebSocketsmod.sip ../sip/QtWebSockets/qwebsocketserver.sip ../sip/QtWebSockets/qwebsocketprotocol.sip ../sip/QtWebSockets/qwebsocketcorsauthenticator.sip ../sip/QtWebSockets/qmaskgenerator.sip ../sip/QtWebSockets/qwebsocket.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebSockets.exp
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

TARGET = QtWebSockets
HEADERS = sipAPIQtWebSockets.h
SOURCES = sipQtWebSocketsQMaskGenerator.cpp sipQtWebSocketsQList0100QWebSocketProtocolVersion.cpp sipQtWebSocketsQWebSocket.cpp sipQtWebSocketsQWebSocketServer.cpp sipQtWebSocketsQWebSocketProtocol.cpp sipQtWebSocketsQWebSocketCorsAuthenticator.cpp sipQtWebSocketscmodule.cpp

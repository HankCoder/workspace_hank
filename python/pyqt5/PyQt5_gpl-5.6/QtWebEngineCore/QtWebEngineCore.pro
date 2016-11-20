TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += webenginecore
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebEngineCore.pyd
    target.files = QtWebEngineCore.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtWebEngineCore.so
    target.files = QtWebEngineCore.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtWebEngineCore
sip.files = ../sip/QtWebEngineCore/qwebengineurlschemehandler.sip ../sip/QtWebEngineCore/qwebenginecookiestore.sip ../sip/QtWebEngineCore/qwebengineurlrequestinterceptor.sip ../sip/QtWebEngineCore/qwebengineurlrequestinfo.sip ../sip/QtWebEngineCore/QtWebEngineCoremod.sip ../sip/QtWebEngineCore/qwebengineurlrequestjob.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebEngineCore.exp
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

TARGET = QtWebEngineCore
HEADERS = sipAPIQtWebEngineCore.h
SOURCES = sipQtWebEngineCoreQWebEngineCookieStore.cpp sipQtWebEngineCoreQWebEngineUrlRequestJob.cpp sipQtWebEngineCorecmodule.cpp sipQtWebEngineCoreQWebEngineUrlRequestInterceptor.cpp sipQtWebEngineCoreQWebEngineUrlRequestInfo.cpp sipQtWebEngineCoreQWebEngineUrlSchemeHandler.cpp

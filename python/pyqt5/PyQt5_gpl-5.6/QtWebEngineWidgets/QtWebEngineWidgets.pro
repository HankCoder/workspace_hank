TEMPLATE = lib
CONFIG += warn_on plugin
QT += webenginewidgets webchannel network widgets
CONFIG += release
CONFIG += c++11
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebEngineWidgets.pyd
    target.files = QtWebEngineWidgets.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtWebEngineWidgets.so
    target.files = QtWebEngineWidgets.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtWebEngineWidgets
sip.files = ../sip/QtWebEngineWidgets/qwebenginedownloaditem.sip ../sip/QtWebEngineWidgets/qwebengineview.sip ../sip/QtWebEngineWidgets/qwebenginescript.sip ../sip/QtWebEngineWidgets/qwebengineprofile.sip ../sip/QtWebEngineWidgets/qwebenginecertificateerror.sip ../sip/QtWebEngineWidgets/qwebenginesettings.sip ../sip/QtWebEngineWidgets/qwebenginefullscreenrequest.sip ../sip/QtWebEngineWidgets/qwebenginehistory.sip ../sip/QtWebEngineWidgets/qwebenginepage.sip ../sip/QtWebEngineWidgets/qwebenginescriptcollection.sip ../sip/QtWebEngineWidgets/QtWebEngineWidgetsmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebEngineWidgets.exp
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

TARGET = QtWebEngineWidgets
HEADERS = sipAPIQtWebEngineWidgets.h
SOURCES = sipQtWebEngineWidgetsQWebEngineHistoryItem.cpp sipQtWebEngineWidgetsQWebEngineHistory.cpp sipQtWebEngineWidgetsQWebEngineSettings.cpp sipQtWebEngineWidgetsQWebEngineDownloadItem.cpp sipQtWebEngineWidgetsQWebEngineView.cpp sipQtWebEngineWidgetsQWebEngineFullScreenRequest.cpp sipQtWebEngineWidgetsQList0100QWebEngineScript.cpp sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp sipQtWebEngineWidgetsQWebEnginePage.cpp sipQtWebEngineWidgetsQWebEngineScript.cpp sipQtWebEngineWidgetsQWebEngineScriptCollection.cpp sipQtWebEngineWidgetscmodule.cpp sipQtWebEngineWidgetsQList0100QWebEngineHistoryItem.cpp sipQtWebEngineWidgetsQWebEngineProfile.cpp sipQtWebEngineWidgetsQWebEngineCertificateError.cpp

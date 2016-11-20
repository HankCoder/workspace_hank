TEMPLATE = lib
CONFIG += warn_on plugin
QT += help
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtHelp.pyd
    target.files = QtHelp.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtHelp.so
    target.files = QtHelp.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtHelp
sip.files = ../sip/QtHelp/qhelpsearchquerywidget.sip ../sip/QtHelp/QtHelpmod.sip ../sip/QtHelp/qhelpenginecore.sip ../sip/QtHelp/qhelpengine.sip ../sip/QtHelp/qhelpcontentwidget.sip ../sip/QtHelp/qhelpsearchresultwidget.sip ../sip/QtHelp/qhelpsearchengine.sip ../sip/QtHelp/qhelpindexwidget.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtHelp.exp
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

TARGET = QtHelp
HEADERS = sipAPIQtHelp.h
SOURCES = sipQtHelpQHelpSearchResultWidget.cpp sipQtHelpQHelpContentItem.cpp sipQtHelpQHelpSearchQueryWidget.cpp sipQtHelpQHelpIndexModel.cpp sipQtHelpcmodule.cpp sipQtHelpQHelpEngineCore.cpp sipQtHelpQHelpEngine.cpp sipQtHelpQMap0100QString0100QUrl.cpp sipQtHelpQHelpContentWidget.cpp sipQtHelpQHelpSearchQuery.cpp sipQtHelpQList0100QStringList.cpp sipQtHelpQList0100QHelpSearchQuery.cpp sipQtHelpQHelpSearchEngine.cpp sipQtHelpQHelpContentModel.cpp sipQtHelpQHelpIndexWidget.cpp

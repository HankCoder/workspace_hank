TEMPLATE = lib
CONFIG += warn_on plugin
QT += help
CONFIG += release

win32 {
    PY_MODULE = QtHelp.pyd
    target.files = QtHelp.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtHelp.so
    target.files = QtHelp.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtHelp
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtHelp/qhelpsearchquerywidget.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtHelp/QtHelpmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtHelp/qhelpenginecore.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtHelp/qhelpengine.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtHelp/qhelpcontentwidget.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtHelp/qhelpsearchresultwidget.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtHelp/qhelpsearchengine.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtHelp/qhelpindexwidget.sip
INSTALLS += sip
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += /usr/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtHelp
HEADERS = sipAPIQtHelp.h
SOURCES = sipQtHelpQHelpSearchResultWidget.cpp sipQtHelpQHelpContentItem.cpp sipQtHelpQHelpSearchQueryWidget.cpp sipQtHelpQHelpIndexModel.cpp sipQtHelpcmodule.cpp sipQtHelpQHelpEngineCore.cpp sipQtHelpQHelpEngine.cpp sipQtHelpQMap0100QString0100QUrl.cpp sipQtHelpQHelpContentWidget.cpp sipQtHelpQHelpSearchQuery.cpp sipQtHelpQList0100QStringList.cpp sipQtHelpQList0100QHelpSearchQuery.cpp sipQtHelpQHelpSearchEngine.cpp sipQtHelpQHelpContentModel.cpp sipQtHelpQHelpIndexWidget.cpp
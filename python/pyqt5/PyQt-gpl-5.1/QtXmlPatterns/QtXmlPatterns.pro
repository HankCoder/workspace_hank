TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xmlpatterns network
CONFIG += release

win32 {
    PY_MODULE = QtXmlPatterns.pyd
    target.files = QtXmlPatterns.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtXmlPatterns.so
    target.files = QtXmlPatterns.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtXmlPatterns
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qsimplexmlnodemodel.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qxmlnamepool.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qabstractxmlreceiver.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qxmlresultitems.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qxmlserializer.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qxmlschemavalidator.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qabstractmessagehandler.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/QtXmlPatternsmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qxmlformatter.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qxmlschema.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qabstracturiresolver.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qxmlquery.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qxmlname.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qabstractxmlnodemodel.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtXmlPatterns/qsourcelocation.sip
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

TARGET = QtXmlPatterns
HEADERS = sipAPIQtXmlPatterns.h
SOURCES = sipQtXmlPatternsQAbstractUriResolver.cpp sipQtXmlPatternsQXmlResultItems.cpp sipQtXmlPatternsQXmlQuery.cpp sipQtXmlPatternsQSimpleXmlNodeModel.cpp sipQtXmlPatternsQAbstractXmlReceiver.cpp sipQtXmlPatternsQXmlItem.cpp sipQtXmlPatternsQXmlSchema.cpp sipQtXmlPatternsQAbstractXmlNodeModel.cpp sipQtXmlPatternscmodule.cpp sipQtXmlPatternsQVector0100QXmlName.cpp sipQtXmlPatternsQXmlNamePool.cpp sipQtXmlPatternsQXmlSchemaValidator.cpp sipQtXmlPatternsQXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlName.cpp sipQtXmlPatternsQXmlFormatter.cpp sipQtXmlPatternsQSourceLocation.cpp sipQtXmlPatternsQAbstractMessageHandler.cpp sipQtXmlPatternsQVector0100QXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlSerializer.cpp
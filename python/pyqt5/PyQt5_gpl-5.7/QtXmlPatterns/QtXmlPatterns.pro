TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xmlpatterns network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXmlPatterns.pyd
    target.files = QtXmlPatterns.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtXmlPatterns.so
    target.files = QtXmlPatterns.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtXmlPatterns
sip.files = ../sip/QtXmlPatterns/qsimplexmlnodemodel.sip ../sip/QtXmlPatterns/qxmlnamepool.sip ../sip/QtXmlPatterns/qabstractxmlreceiver.sip ../sip/QtXmlPatterns/qxmlresultitems.sip ../sip/QtXmlPatterns/qxmlserializer.sip ../sip/QtXmlPatterns/qxmlschemavalidator.sip ../sip/QtXmlPatterns/qabstractmessagehandler.sip ../sip/QtXmlPatterns/QtXmlPatternsmod.sip ../sip/QtXmlPatterns/qxmlformatter.sip ../sip/QtXmlPatterns/qxmlschema.sip ../sip/QtXmlPatterns/qabstracturiresolver.sip ../sip/QtXmlPatterns/qxmlquery.sip ../sip/QtXmlPatterns/qxmlname.sip ../sip/QtXmlPatterns/qabstractxmlnodemodel.sip ../sip/QtXmlPatterns/qsourcelocation.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXmlPatterns.exp
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

TARGET = QtXmlPatterns
HEADERS = sipAPIQtXmlPatterns.h
SOURCES = sipQtXmlPatternsQAbstractUriResolver.cpp sipQtXmlPatternsQXmlResultItems.cpp sipQtXmlPatternsQXmlQuery.cpp sipQtXmlPatternsQSimpleXmlNodeModel.cpp sipQtXmlPatternsQAbstractXmlReceiver.cpp sipQtXmlPatternsQXmlItem.cpp sipQtXmlPatternsQXmlSchema.cpp sipQtXmlPatternsQAbstractXmlNodeModel.cpp sipQtXmlPatternscmodule.cpp sipQtXmlPatternsQVector0100QXmlName.cpp sipQtXmlPatternsQXmlNamePool.cpp sipQtXmlPatternsQXmlSchemaValidator.cpp sipQtXmlPatternsQXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlName.cpp sipQtXmlPatternsQXmlFormatter.cpp sipQtXmlPatternsQSourceLocation.cpp sipQtXmlPatternsQAbstractMessageHandler.cpp sipQtXmlPatternsQVector0100QXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlSerializer.cpp

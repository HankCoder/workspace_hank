TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXml.pyd
    target.files = QtXml.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtXml.so
    target.files = QtXml.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtXml
sip.files = ../sip/QtXml/qdom.sip ../sip/QtXml/qxml.sip ../sip/QtXml/QtXmlmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXml.exp
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

TARGET = QtXml
HEADERS = sipAPIQtXml.h
SOURCES = sipQtXmlQDomProcessingInstruction.cpp sipQtXmlQDomNamedNodeMap.cpp sipQtXmlQDomElement.cpp sipQtXmlQXmlLocator.cpp sipQtXmlQDomComment.cpp sipQtXmlQXmlAttributes.cpp sipQtXmlQXmlReader.cpp sipQtXmlQXmlInputSource.cpp sipQtXmlQDomEntity.cpp sipQtXmlQDomDocument.cpp sipQtXmlQDomCharacterData.cpp sipQtXmlQDomCDATASection.cpp sipQtXmlQDomNodeList.cpp sipQtXmlQDomText.cpp sipQtXmlQDomAttr.cpp sipQtXmlQXmlSimpleReader.cpp sipQtXmlQXmlErrorHandler.cpp sipQtXmlcmodule.cpp sipQtXmlQDomDocumentType.cpp sipQtXmlQDomNode.cpp sipQtXmlQXmlDTDHandler.cpp sipQtXmlQXmlDeclHandler.cpp sipQtXmlQXmlLexicalHandler.cpp sipQtXmlQDomDocumentFragment.cpp sipQtXmlQXmlParseException.cpp sipQtXmlQDomImplementation.cpp sipQtXmlQDomEntityReference.cpp sipQtXmlQXmlNamespaceSupport.cpp sipQtXmlQXmlEntityResolver.cpp sipQtXmlQDomNotation.cpp sipQtXmlQXmlContentHandler.cpp sipQtXmlQXmlDefaultHandler.cpp

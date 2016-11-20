TEMPLATE = lib
CONFIG += warn_on plugin
QT += qml
CONFIG += release

win32 {
    PY_MODULE = QtQml.pyd
    target.files = QtQml.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtQml.so
    target.files = QtQml.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtQml
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qmlregistertype.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlpropertyvaluesource.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/QtQmlmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlengine.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlpropertymap.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qpyqmllistproperty.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlerror.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlextensionplugin.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlincubator.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlcontext.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlcomponent.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlexpression.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmllist.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qmlattachedpropertiesobject.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qjsvalueiterator.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlscriptstring.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlnetworkaccessmanagerfactory.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlparserstatus.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qjsengine.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlproperty.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qqmlapplicationengine.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtQml/qjsvalue.sip
INSTALLS += sip
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/qpy/QtQml
LIBS += -L../qpy/QtQml -lqpyqml

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtQml
HEADERS = sipAPIQtQml.h
SOURCES = sipQtQmlQJSValueIterator.cpp sipQtQmlQQmlListProperty0100QObject.cpp sipQtQmlQQmlContext.cpp sipQtQmlQQmlExtensionPlugin.cpp sipQtQmlQQmlExpression.cpp sipQtQmlQQmlParserStatus.cpp sipQtQmlQQmlPropertyValueSource.cpp sipQtQmlQQmlImageProviderBase.cpp sipQtQmlQJSEngine.cpp sipQtQmlQQmlEngine.cpp sipQtQmlQQmlListReference.cpp sipQtQmlQQmlImageProviderBaseFlags.cpp sipQtQmlQQmlNetworkAccessManagerFactory.cpp sipQtQmlQQmlApplicationEngine.cpp sipQtQmlQQmlComponent.cpp sipQtQmlQList0100QQmlError.cpp sipQtQmlQQmlScriptString.cpp sipQtQmlQQmlProperty.cpp sipQtQmlQQmlIncubator.cpp sipQtQmlQQmlPropertyMap.cpp sipQtQmlQList0100QJSValue.cpp sipQtQmlcmodule.cpp sipQtQmlQJSValue.cpp sipQtQmlQQmlIncubationController.cpp sipQtQmlQQmlError.cpp sipQtQmlQList0100QQmlProperty.cpp
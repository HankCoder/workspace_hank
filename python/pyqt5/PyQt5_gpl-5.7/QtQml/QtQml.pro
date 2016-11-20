TEMPLATE = lib
CONFIG += warn_on plugin
QT += qml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtQml.pyd
    target.files = QtQml.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtQml.so
    target.files = QtQml.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtQml
sip.files = ../sip/QtQml/qmlregistertype.sip ../sip/QtQml/qqmlpropertyvaluesource.sip ../sip/QtQml/QtQmlmod.sip ../sip/QtQml/qqmlengine.sip ../sip/QtQml/qqmlpropertymap.sip ../sip/QtQml/qpyqmllistproperty.sip ../sip/QtQml/qqmlerror.sip ../sip/QtQml/qqmlextensionplugin.sip ../sip/QtQml/qqmlincubator.sip ../sip/QtQml/qqmlcontext.sip ../sip/QtQml/qqmlabstracturlinterceptor.sip ../sip/QtQml/qqmlcomponent.sip ../sip/QtQml/qqmlexpression.sip ../sip/QtQml/qqmllist.sip ../sip/QtQml/qmlattachedpropertiesobject.sip ../sip/QtQml/qjsvalueiterator.sip ../sip/QtQml/qqmlfileselector.sip ../sip/QtQml/qqmlscriptstring.sip ../sip/QtQml/qqmlnetworkaccessmanagerfactory.sip ../sip/QtQml/qqmlparserstatus.sip ../sip/QtQml/qjsengine.sip ../sip/QtQml/qqmlproperty.sip ../sip/QtQml/qqmlapplicationengine.sip ../sip/QtQml/qjsvalue.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtQml.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += ../qpy/QtQml

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

TARGET = QtQml
HEADERS = sipAPIQtQml.h ../qpy/QtQml/qpyqmlobject.h ../qpy/QtQml/qpyqmlsingletonobject.h ../qpy/QtQml/qpyqmllistproperty.h ../qpy/QtQml/qpyqml_api.h ../qpy/QtQml/qpyqml_listdata.h ../qpy/QtQml/qpyqmllistpropertywrapper.h
SOURCES = sipQtQmlQJSValueIterator.cpp sipQtQmlQQmlListProperty0100QObject.cpp sipQtQmlQQmlContext.cpp sipQtQmlQQmlExtensionPlugin.cpp sipQtQmlQQmlExpression.cpp sipQtQmlQQmlParserStatus.cpp sipQtQmlQQmlPropertyValueSource.cpp sipQtQmlQQmlImageProviderBase.cpp sipQtQmlQJSEngine.cpp sipQtQmlQQmlEngine.cpp sipQtQmlQQmlListReference.cpp sipQtQmlQQmlImageProviderBaseFlags.cpp sipQtQmlQQmlNetworkAccessManagerFactory.cpp sipQtQmlQQmlApplicationEngine.cpp sipQtQmlQQmlComponent.cpp sipQtQmlQList0100QQmlError.cpp sipQtQmlQQmlScriptString.cpp sipQtQmlQQmlProperty.cpp sipQtQmlQQmlIncubator.cpp sipQtQmlQQmlPropertyMap.cpp sipQtQmlQList0100QJSValue.cpp sipQtQmlQJSEngineExtensions.cpp sipQtQmlcmodule.cpp sipQtQmlQQmlAbstractUrlInterceptor.cpp sipQtQmlQJSValue.cpp sipQtQmlQQmlIncubationController.cpp sipQtQmlQQmlError.cpp sipQtQmlQList0100QQmlProperty.cpp sipQtQmlQQmlFileSelector.cpp ../qpy/QtQml/qpyqmlobject.cpp ../qpy/QtQml/qpyqml_register_singleton_type.cpp ../qpy/QtQml/qpyqml_post_init.cpp ../qpy/QtQml/qpyqml_register_type.cpp ../qpy/QtQml/qpyqml_listdata.cpp ../qpy/QtQml/qpyqmlsingletonobject.cpp ../qpy/QtQml/qpyqmllistproperty.cpp ../qpy/QtQml/qpyqml_qjsvalue.cpp ../qpy/QtQml/qpyqmllistpropertywrapper.cpp

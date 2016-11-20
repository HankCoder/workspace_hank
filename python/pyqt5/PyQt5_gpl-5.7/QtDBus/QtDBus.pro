TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += dbus
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDBus.pyd
    target.files = QtDBus.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtDBus.so
    target.files = QtDBus.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtDBus
sip.files = ../sip/QtDBus/qdbusextratypes.sip ../sip/QtDBus/qdbusabstractadaptor.sip ../sip/QtDBus/qpydbusreply.sip ../sip/QtDBus/qdbusconnection.sip ../sip/QtDBus/qdbuspendingcall.sip ../sip/QtDBus/qdbusabstractinterface.sip ../sip/QtDBus/qdbusinterface.sip ../sip/QtDBus/qdbusmessage.sip ../sip/QtDBus/qdbuserror.sip ../sip/QtDBus/qdbusunixfiledescriptor.sip ../sip/QtDBus/qdbusargument.sip ../sip/QtDBus/QtDBusmod.sip ../sip/QtDBus/qdbusconnectioninterface.sip ../sip/QtDBus/qdbusservicewatcher.sip ../sip/QtDBus/qpydbuspendingreply.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDBus.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += ../qpy/QtDBus

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

TARGET = QtDBus
HEADERS = sipAPIQtDBus.h ../qpy/QtDBus/qpydbusreply.h ../qpy/QtDBus/qpydbus_chimera_helpers.h ../qpy/QtDBus/qpydbuspendingreply.h ../qpy/QtDBus/qpydbus_api.h
SOURCES = sipQtDBusQPyDBusPendingReply.cpp sipQtDBusQDBusUnixFileDescriptor.cpp sipQtDBusQDBusReply0100QStringList.cpp sipQtDBusQDBusServiceWatcherWatchMode.cpp sipQtDBusQDBusReply2600.cpp sipQtDBuscmodule.cpp sipQtDBusQDBusServiceWatcher.cpp sipQtDBusQDBusSignature.cpp sipQtDBusQDBusPendingCallWatcher.cpp sipQtDBusQDBusArgument.cpp sipQtDBusQDBusReply0400.cpp sipQtDBusQPyDBusReply.cpp sipQtDBusQDBusReply1900.cpp sipQtDBusQDBusObjectPath.cpp sipQtDBusQDBusConnection.cpp sipQtDBusQDBusConnectionConnectionCapabilities.cpp sipQtDBusQDBusVariant.cpp sipQtDBusQDBusError.cpp sipQtDBusQDBusInterface.cpp sipQtDBusQDBusReply0100QString.cpp sipQtDBusQDBusPendingCall.cpp sipQtDBusQDBusConnectionInterface.cpp sipQtDBusQDBusAbstractInterface.cpp sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.cpp sipQtDBusQDBusAbstractAdaptor.cpp sipQtDBusQDBusMessage.cpp sipQtDBusQDBus.cpp sipQtDBusQDBusConnectionRegisterOptions.cpp ../qpy/QtDBus/qpydbus_post_init.cpp ../qpy/QtDBus/qpydbus_chimera_helpers.cpp ../qpy/QtDBus/qpydbusreply.cpp ../qpy/QtDBus/qpydbuspendingreply.cpp

TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += dbus
CONFIG += release

win32 {
    PY_MODULE = QtDBus.pyd
    target.files = QtDBus.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtDBus.so
    target.files = QtDBus.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtDBus
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusextratypes.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusabstractadaptor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qpydbusreply.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusconnection.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbuspendingcall.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusabstractinterface.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusinterface.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusmessage.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbuserror.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusunixfiledescriptor.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusargument.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/QtDBusmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusconnectioninterface.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qdbusservicewatcher.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtDBus/qpydbuspendingreply.sip
INSTALLS += sip
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/qpy/QtDBus
LIBS += -L../qpy/QtDBus -lqpydbus

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDBus
HEADERS = sipAPIQtDBus.h
SOURCES = sipQtDBusQPyDBusPendingReply.cpp sipQtDBusQDBusUnixFileDescriptor.cpp sipQtDBusQDBusReply0100QStringList.cpp sipQtDBusQDBusServiceWatcherWatchMode.cpp sipQtDBusQDBusReply2600.cpp sipQtDBuscmodule.cpp sipQtDBusQDBusServiceWatcher.cpp sipQtDBusQDBusSignature.cpp sipQtDBusQDBusPendingCallWatcher.cpp sipQtDBusQDBusArgument.cpp sipQtDBusQDBusReply0400.cpp sipQtDBusQPyDBusReply.cpp sipQtDBusQDBusReply1900.cpp sipQtDBusQDBusObjectPath.cpp sipQtDBusQDBusConnection.cpp sipQtDBusQDBusConnectionConnectionCapabilities.cpp sipQtDBusQDBusVariant.cpp sipQtDBusQDBusError.cpp sipQtDBusQDBusInterface.cpp sipQtDBusQDBusReply0100QString.cpp sipQtDBusQDBusPendingCall.cpp sipQtDBusQDBusConnectionInterface.cpp sipQtDBusQDBusAbstractInterface.cpp sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.cpp sipQtDBusQDBusAbstractAdaptor.cpp sipQtDBusQDBusMessage.cpp sipQtDBusQDBus.cpp sipQtDBusQDBusConnectionRegisterOptions.cpp
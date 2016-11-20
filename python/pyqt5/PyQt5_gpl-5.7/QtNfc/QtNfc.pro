TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += nfc
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtNfc.pyd
    target.files = QtNfc.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtNfc.so
    target.files = QtNfc.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtNfc
sip.files = ../sip/QtNfc/qnearfieldtarget.sip ../sip/QtNfc/qqmlndefrecord.sip ../sip/QtNfc/qnearfieldmanager.sip ../sip/QtNfc/qndefnfcurirecord.sip ../sip/QtNfc/qndefnfcsmartposterrecord.sip ../sip/QtNfc/QtNfcmod.sip ../sip/QtNfc/qndefrecord.sip ../sip/QtNfc/qnearfieldsharemanager.sip ../sip/QtNfc/qndefmessage.sip ../sip/QtNfc/qndeffilter.sip ../sip/QtNfc/qndefnfctextrecord.sip ../sip/QtNfc/qnearfieldsharetarget.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtNfc.exp
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

TARGET = QtNfc
HEADERS = sipAPIQtNfc.h
SOURCES = sipQtNfcQNearFieldTargetAccessMethods.cpp sipQtNfcQNdefNfcSmartPosterRecord.cpp sipQtNfcQNdefMessage.cpp sipQtNfcQNdefNfcIconRecord.cpp sipQtNfcQNearFieldTargetRequestId.cpp sipQtNfcQNearFieldManager.cpp sipQtNfcQQmlNdefRecord.cpp sipQtNfcQNearFieldShareManager.cpp sipQtNfcQNearFieldShareManagerShareModes.cpp sipQtNfcQList0100QNdefNfcTextRecord.cpp sipQtNfcQNearFieldManagerTargetAccessModes.cpp sipQtNfcQNdefFilterRecord.cpp sipQtNfcQNearFieldTarget.cpp sipQtNfcQNdefFilter.cpp sipQtNfcQNearFieldShareTarget.cpp sipQtNfcQList0100QNdefRecord.cpp sipQtNfcQList0100QNdefNfcIconRecord.cpp sipQtNfcQList0100QNdefMessage.cpp sipQtNfcQNdefNfcUriRecord.cpp sipQtNfcQNdefRecord.cpp sipQtNfccmodule.cpp sipQtNfcQNdefNfcTextRecord.cpp

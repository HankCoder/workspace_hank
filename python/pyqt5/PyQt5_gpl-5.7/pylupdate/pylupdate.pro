TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = pylupdate.pyd
    target.files = pylupdate.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = pylupdate.so
    target.files = pylupdate.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/pylupdate
sip.files = ../sip/pylupdate/pylupdatemod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=pylupdate.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += ../qpy/pylupdate

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

TARGET = pylupdate
HEADERS = sipAPIpylupdate.h ../qpy/pylupdate/simtexth.h ../qpy/pylupdate/translator.h ../qpy/pylupdate/pylupdate.h ../qpy/pylupdate/metatranslator.h ../qpy/pylupdate/proparser.h
SOURCES = sippylupdatecmodule.cpp sippylupdateQMap0100QString0100QString.cpp sippylupdateMetaTranslator.cpp ../qpy/pylupdate/fetchtr.cpp ../qpy/pylupdate/sametexth.cpp ../qpy/pylupdate/proparser.cpp ../qpy/pylupdate/translator.cpp ../qpy/pylupdate/merge.cpp ../qpy/pylupdate/metatranslator.cpp ../qpy/pylupdate/numberh.cpp ../qpy/pylupdate/simtexth.cpp

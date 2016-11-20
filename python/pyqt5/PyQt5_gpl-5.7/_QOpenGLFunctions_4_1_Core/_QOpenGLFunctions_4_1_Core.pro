TEMPLATE = lib
CONFIG += warn_on plugin
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = _QOpenGLFunctions_4_1_Core.pyd
    target.files = _QOpenGLFunctions_4_1_Core.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = _QOpenGLFunctions_4_1_Core.so
    target.files = _QOpenGLFunctions_4_1_Core.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/_QOpenGLFunctions_4_1_Core
sip.files = ../sip/_QOpenGLFunctions_4_1_Core/_QOpenGLFunctions_4_1_Coremod.sip ../sip/_QOpenGLFunctions_4_1_Core/qopenglfunctions_4_1_core.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=_QOpenGLFunctions_4_1_Core.exp
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

TARGET = _QOpenGLFunctions_4_1_Core
HEADERS = sipAPI_QOpenGLFunctions_4_1_Core.h
SOURCES = sip_QOpenGLFunctions_4_1_Corecmodule.cpp sip_QOpenGLFunctions_4_1_CoreQOpenGLFunctions_4_1_Core.cpp

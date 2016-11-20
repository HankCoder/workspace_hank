TEMPLATE = lib
CONFIG += warn_on plugin
CONFIG += release

win32 {
    PY_MODULE = _QOpenGLFunctions_2_0.pyd
    target.files = _QOpenGLFunctions_2_0.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = _QOpenGLFunctions_2_0.so
    target.files = _QOpenGLFunctions_2_0.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/_QOpenGLFunctions_2_0
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/_QOpenGLFunctions_2_0/_QOpenGLFunctions_2_0mod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/_QOpenGLFunctions_2_0/qopenglfunctions_2_0.sip
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

TARGET = _QOpenGLFunctions_2_0
HEADERS = sipAPI_QOpenGLFunctions_2_0.h
SOURCES = sip_QOpenGLFunctions_2_0cmodule.cpp sip_QOpenGLFunctions_2_0QOpenGLFunctions_2_0.cpp
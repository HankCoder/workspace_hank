TEMPLATE = lib
CONFIG += warn_on plugin
QT += opengl
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtOpenGL.pyd
    target.files = QtOpenGL.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtOpenGL.so
    target.files = QtOpenGL.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtOpenGL
sip.files = ../sip/QtOpenGL/qgl.sip ../sip/QtOpenGL/QtOpenGLmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtOpenGL.exp
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

TARGET = QtOpenGL
HEADERS = sipAPIQtOpenGL.h
SOURCES = sipQtOpenGLQGLFormat.cpp sipQtOpenGLQGLWidget.cpp sipQtOpenGLQGLFormatOptions.cpp sipQtOpenGLQGLContextBindOptions.cpp sipQtOpenGLQGL.cpp sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp sipQtOpenGLQGLContext.cpp sipQtOpenGLcmodule.cpp

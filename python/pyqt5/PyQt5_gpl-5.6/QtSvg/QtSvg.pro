TEMPLATE = lib
CONFIG += warn_on plugin
QT += svg
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSvg.pyd
    target.files = QtSvg.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtSvg.so
    target.files = QtSvg.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtSvg
sip.files = ../sip/QtSvg/qsvgwidget.sip ../sip/QtSvg/QtSvgmod.sip ../sip/QtSvg/qsvggenerator.sip ../sip/QtSvg/qgraphicssvgitem.sip ../sip/QtSvg/qsvgrenderer.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSvg.exp
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

TARGET = QtSvg
HEADERS = sipAPIQtSvg.h
SOURCES = sipQtSvgQGraphicsSvgItem.cpp sipQtSvgQSvgRenderer.cpp sipQtSvgcmodule.cpp sipQtSvgQSvgGenerator.cpp sipQtSvgQSvgWidget.cpp

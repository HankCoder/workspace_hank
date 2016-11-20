TEMPLATE = lib
CONFIG += warn_on plugin
QT += svg
CONFIG += release

win32 {
    PY_MODULE = QtSvg.pyd
    target.files = QtSvg.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtSvg.so
    target.files = QtSvg.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtSvg
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSvg/qsvgwidget.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSvg/QtSvgmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSvg/qsvggenerator.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSvg/qgraphicssvgitem.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSvg/qsvgrenderer.sip
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

TARGET = QtSvg
HEADERS = sipAPIQtSvg.h
SOURCES = sipQtSvgQGraphicsSvgItem.cpp sipQtSvgQSvgRenderer.cpp sipQtSvgcmodule.cpp sipQtSvgQSvgGenerator.cpp sipQtSvgQSvgWidget.cpp
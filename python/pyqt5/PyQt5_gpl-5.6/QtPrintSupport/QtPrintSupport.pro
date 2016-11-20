TEMPLATE = lib
CONFIG += warn_on plugin
QT += printsupport
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtPrintSupport.pyd
    target.files = QtPrintSupport.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtPrintSupport.so
    target.files = QtPrintSupport.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtPrintSupport
sip.files = ../sip/QtPrintSupport/qprinterinfo.sip ../sip/QtPrintSupport/qprintengine.sip ../sip/QtPrintSupport/qprintpreviewwidget.sip ../sip/QtPrintSupport/qabstractprintdialog.sip ../sip/QtPrintSupport/QtPrintSupportmod.sip ../sip/QtPrintSupport/qprintdialog.sip ../sip/QtPrintSupport/qpyprintsupport_qlist.sip ../sip/QtPrintSupport/qprinter.sip ../sip/QtPrintSupport/qprintpreviewdialog.sip ../sip/QtPrintSupport/qpagesetupdialog.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtPrintSupport.exp
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

TARGET = QtPrintSupport
HEADERS = sipAPIQtPrintSupport.h
SOURCES = sipQtPrintSupportQList0100QPageSize.cpp sipQtPrintSupportQPageSetupDialog.cpp sipQtPrintSupportQList0100QPrinterDuplexMode.cpp sipQtPrintSupportQAbstractPrintDialog.cpp sipQtPrintSupportQList0600QPair0100QString0100QSizeF.cpp sipQtPrintSupportQList0100QPrinterInfo.cpp sipQtPrintSupportQPrintEngine.cpp sipQtPrintSupportQPrinter.cpp sipQtPrintSupportQPrinterInfo.cpp sipQtPrintSupportcmodule.cpp sipQtPrintSupportQPrintPreviewWidget.cpp sipQtPrintSupportQPrintDialog.cpp sipQtPrintSupportQPrintPreviewDialog.cpp sipQtPrintSupportQAbstractPrintDialogPrintDialogOptions.cpp sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp

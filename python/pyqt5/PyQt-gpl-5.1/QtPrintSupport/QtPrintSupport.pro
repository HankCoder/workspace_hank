TEMPLATE = lib
CONFIG += warn_on plugin
QT += printsupport
CONFIG += release

win32 {
    PY_MODULE = QtPrintSupport.pyd
    target.files = QtPrintSupport.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtPrintSupport.so
    target.files = QtPrintSupport.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtPrintSupport
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qprinterinfo.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qprintengine.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qprintpreviewwidget.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qabstractprintdialog.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/QtPrintSupportmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qprintdialog.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qprinter.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qprintpreviewdialog.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtPrintSupport/qpagesetupdialog.sip
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

TARGET = QtPrintSupport
HEADERS = sipAPIQtPrintSupport.h
SOURCES = sipQtPrintSupportQPageSetupDialog.cpp sipQtPrintSupportQAbstractPrintDialog.cpp sipQtPrintSupportQList0600QPair0100QString0100QSizeF.cpp sipQtPrintSupportQList0100QPrinterInfo.cpp sipQtPrintSupportQPrintEngine.cpp sipQtPrintSupportQPrinter.cpp sipQtPrintSupportQPrinterInfo.cpp sipQtPrintSupportcmodule.cpp sipQtPrintSupportQPrintPreviewWidget.cpp sipQtPrintSupportQPrintDialog.cpp sipQtPrintSupportQPrintPreviewDialog.cpp sipQtPrintSupportQAbstractPrintDialogPrintDialogOptions.cpp sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp
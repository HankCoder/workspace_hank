TEMPLATE = lib
CONFIG += warn_on plugin
QT += testlib widgets
CONFIG += release

win32 {
    PY_MODULE = QtTest.pyd
    target.files = QtTest.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtTest.so
    target.files = QtTest.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtTest
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtTest/qsignalspy.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtTest/qtestmouse.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtTest/QtTestmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtTest/qtestkeyboard.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtTest/qtestsystem.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtTest/qtestcase.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtTest/qtesttouch.sip
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

TARGET = QtTest
HEADERS = sipAPIQtTest.h
SOURCES = sipQtTestQSignalSpy.cpp sipQtTestcmodule.cpp sipQtTestQTest.cpp sipQtTestQTestQTouchEventSequence.cpp
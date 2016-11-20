TEMPLATE = lib
CONFIG += warn_on plugin
QT += testlib widgets
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtTest.pyd
    target.files = QtTest.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtTest.so
    target.files = QtTest.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtTest
sip.files = ../sip/QtTest/qsignalspy.sip ../sip/QtTest/qtestmouse.sip ../sip/QtTest/QtTestmod.sip ../sip/QtTest/qtestkeyboard.sip ../sip/QtTest/qtestsystem.sip ../sip/QtTest/qtestcase.sip ../sip/QtTest/qtesttouch.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtTest.exp
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

TARGET = QtTest
HEADERS = sipAPIQtTest.h
SOURCES = sipQtTestQSignalSpy.cpp sipQtTestcmodule.cpp sipQtTestQTest.cpp sipQtTestQTestQTouchEventSequence.cpp

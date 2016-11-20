CONFIG      += plugin release warn_on
QT          += qml

# Work around QTBUG-39300.
CONFIG -= android_install

TARGET      = pyqt5qmlplugin
TEMPLATE    = lib

INCLUDEPATH += /usr/include/python2.7 /usr/include/python2.7
LIBS        += -L/usr/lib -lpython2.7

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /opt/Qt5.6.2/5.6/gcc_64/plugins/PyQt5

python.path = /opt/Qt5.6.2/5.6/gcc_64/plugins/PyQt5
python.files = python

INSTALLS    += target python

INCLUDEPATH += /home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/qmlscene
VPATH = /home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/qmlscene


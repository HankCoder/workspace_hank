CONFIG      += plugin release warn_on
QT          += qml

TARGET      = pyqt5qmlplugin
TEMPLATE    = lib

INCLUDEPATH += /usr/local/python3/include/python3.5m /usr/include/python2.7
LIBS        += -L/usr/local/python3/lib -lpython3.5m

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /opt/Qt5.6.2/5.6/gcc_64/plugins/PyQt5

python.path = /opt/Qt5.6.2/5.6/gcc_64/plugins/PyQt5
python.files = python

INSTALLS    += target python

INCLUDEPATH += /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/qmlscene
VPATH = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/qmlscene

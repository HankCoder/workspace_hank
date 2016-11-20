CONFIG      += plugin release warn_on
QT          += designer

TARGET      = pyqt5
TEMPLATE    = lib

INCLUDEPATH += /usr/local/python3/include/python3.5m
LIBS        += -L/usr/local/python3/lib -lpython3.5m

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /opt/Qt5.6.2/5.6/gcc_64/plugins/designer

python.path = /opt/Qt5.6.2/5.6/gcc_64/plugins/designer
python.files = python

INSTALLS    += target python

INCLUDEPATH += /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/designer
VPATH = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/designer

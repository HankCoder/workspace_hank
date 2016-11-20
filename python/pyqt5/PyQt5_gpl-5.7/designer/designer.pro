CONFIG      += plugin release warn_on
QT          += designer

# Work around QTBUG-39300.
CONFIG -= android_install

TARGET      = pyqt5
TEMPLATE    = lib

INCLUDEPATH += /usr/include/python2.7
LIBS        += -L/usr/lib -lpython2.7
DEFINES     += PYTHON_LIB=\\\"libpython2.7.so\\\"

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /opt/Qt5.6.2/5.6/gcc_64/plugins/designer

python.path = /opt/Qt5.6.2/5.6/gcc_64/plugins/designer
python.files = python

INSTALLS    += target python

INCLUDEPATH += /home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/designer
VPATH = /home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/designer


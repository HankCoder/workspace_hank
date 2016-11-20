TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS = qpy QtCore QtGui QtHelp QtMultimedia QtMultimediaWidgets QtNetwork QtOpenGL QtPrintSupport QtQml QtQuick QtSensors QtSerialPort QtSql QtSvg QtTest QtWidgets QtXmlPatterns _QOpenGLFunctions_2_0 QtDesigner QtDBus Qt pylupdate pyrcc designer qmlscene

init_py.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/__init__.py
init_py.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += init_py

uic_package.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/pyuic/uic
uic_package.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += uic_package

pyuic5.files = pyuic5
pyuic5.path = /usr/local/python3/bin
INSTALLS += pyuic5

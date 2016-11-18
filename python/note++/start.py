#!/usr/bin/python
# -*- coding: utf-8 -*-
import sys
from PyQt4 import QtCore, QtGui
from ui_editor import Ui_notepad
class StartQt4(QtGui.QMainWindow):

    def __init__(self, parent=None):
        QtGui.QWidget.__init__(self, parent)
        self.ui = Ui_notepad()
        self.ui.setupUi(self)
        self.setWindowTitle('note++')
        QtCore.QObject.connect(self.ui.button_open, QtCore.SIGNAL("clicked()"),
                               self.file_dialog)
        QtCore.QObject.connect(self.ui.button_save, QtCore.SIGNAL("clicked()"),
                               self.file_save)

    def file_dialog(self):
        fd = QtGui.QFileDialog(self)
        self.filename = fd.getOpenFileName()
        from os.path import isfile
        if isfile(self.filename):
            s = open(self.filename, 'r').read()
            self.ui.editor_window.setPlainText(s)

    def file_save(self):
        fd = QtGui.QFileDialog()
        self.filename = fd.getSaveFileName()
        fobj = open(self.filename, 'w')
        fobj.write(self.ui.editor_window.toPlainText())
        fobj.close()
        self.ui.editor_window.setText('File saved!')

def main():
    app = QtGui.QApplication(sys.argv)
    myapp = StartQt4()
    myapp.show()
    sys.exit(app.exec_())

if __name__ == "__main__":
    main()
#!/usr/bin/python
#_*_ coding: utf-8 _*_

import sys
from PyQt4 import QtGui

class Icon(QtGui.QWidget):
    def __init__(self, parent=None):
        QtGui.QWidget.__init__(self, parent)

        self.setGeometry(300, 300, 250, 150)
        self.setWindowTitle('Icon')
        self.setWindowIcon(QtGui.QIcon('../png/tree.png'))

app=QtGui.QApplication(sys.argv)
icon=Icon()
icon.show()
sys.exit(app.exec_())
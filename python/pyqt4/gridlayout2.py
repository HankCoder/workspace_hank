#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys
from PyQt4 import QtGui

class GridLayout(QtGui.QWidget):

    def __init__(self, parent=None):
        QtGui.QWidget.__init__(self)

        self.setWindowTitle('grid layout')

        title = QtGui.QLabel('Title')
        authot = QtGui.QLabel('Author')
        review = QtGui.QLabel('Review')

        titleEdit = QtGui.QLineEdit()
        authorEdit = QtGui.QLineEdit()
        reviewEdit = QtGui.QLineEdit()

        grid = QtGui.QGridLayout()
        grid.setSpacing(10)

        grid.addWidget(title,1, 0)
        grid.addWidget(titleEdit,1, 1)

        grid.addWidget(authot, 2, 0)
        grid.addWidget(authorEdit, 2, 1)

        grid.addWidget(review, 3, 0)
        grid.addWidget(reviewEdit, 3, 1, 5,1)

        self.setLayout(grid)
        self.resize(350, 300)

app = QtGui.QApplication(sys.argv)
qb = GridLayout()
qb.show()
sys.exit(app.exec_())
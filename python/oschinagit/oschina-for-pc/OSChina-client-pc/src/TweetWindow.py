#! /usr/bin/env python  
# -*- coding: utf-8 -*-
import AppProperty,Utils
from PyQt4.QtGui import QWidget
from PyQt4.QtCore import Qt,QUrl,pyqtSignature
from PyQt4.QtWebKit import QWebView,QWebSettings

class TweetWindow(QWidget):
    def __init__(self):  
        super(TweetWindow, self).__init__()
        self.setWindowFlags(Qt.FramelessWindowHint|Qt.WindowStaysOnTopHint|Qt.Popup|Qt.Tool)
        self.setAttribute(Qt.WA_TranslucentBackground,True)
        self.resize(550,520)
        point = Utils.getDesktopCenterPoint(self)
        self.move(point["x"],point["y"])
        self.webview = QWebView(self)
        self.webview.settings().setAttribute(QWebSettings.JavascriptEnabled, True)
        self.webview.settings().setAttribute(QWebSettings.DeveloperExtrasEnabled, True)
        self.webview.settings().setAttribute(QWebSettings.LocalContentCanAccessRemoteUrls, True)
        self.webview.settings().setAttribute(QWebSettings.LocalStorageEnabled, True)
        self.webview.settings().setLocalStoragePath(AppProperty.HomeDir+"/data")
        #self.webview.setContextMenuPolicy(Qt.NoContextMenu)
        self.webview.settings().setDefaultTextEncoding("utf-8")
        self.webview.setGeometry(1,1,self.width()-2,self.height()-2)
        self.webview.page().mainFrame().javaScriptWindowObjectCleared.connect(self.setJavaScriptObject)
        self.webview.setStyleSheet("QWebView{background-color: rgba(255, 193, 245, 0%); }")
        self.webview.page().networkAccessManager().setCookieJar(AppProperty.CookieJar)
        self.webview.load(QUrl.fromLocalFile(AppProperty.HomeDir+"/html/tweetWindow.html"))
        
    def setJavaScriptObject(self):
        self.webview.page().mainFrame().addToJavaScriptWindowObject("_window_", self)
        #self.webview.page().mainFrame().addToJavaScriptWindowObject("_service_", self._service_)
        self.webview.page().mainFrame().addToJavaScriptWindowObject("_notifications_", AppProperty._notifications_)
          
    @pyqtSignature("")
    def quit(self):
        self.close()
    
    @pyqtSignature("int,int")
    def moveTo(self,offsetX,offsetY):
        self.move(self.x()+offsetX,self.y()+offsetY)
    
    @pyqtSignature("",result="QString")
    def loadHtml(self):
        if AppProperty.NewTweetHtml!="":
            return AppProperty.NewTweetHtml
        
        file_object = open('html/sendTweetPage.html')
        try:
            tweetHtml = file_object.read()
        finally:
            file_object.close()
        tweetHtml = tweetHtml.replace("${home}","file:///"+AppProperty.HomeDir.replace("\\","/")+"/")
        AppProperty.NewTweetHtml = tweetHtml
        return tweetHtml
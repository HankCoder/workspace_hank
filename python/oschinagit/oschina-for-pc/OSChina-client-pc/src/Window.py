#! /usr/bin/env python  
# -*- coding: utf-8 -*-
'''
Created on 2013-5-29

@author: fants
'''
import os
from PyQt4.QtGui import *
from PyQt4.QtCore import *
from RoundWindow import RoundWindow
from PyQt4.QtWebKit import *
import httplib2
import AppProperty
import base64
import webbrowser
from TweetWindow import TweetWindow
import Utils

class Window(RoundWindow): 
    tweetWin=None
    def __init__(self, url,width,height,windowType=0,handleMethod=""):  
        super(Window, self).__init__()
        self.resize(width,height)
        self.round()
        point = Utils.getDesktopCenterPoint(self)
        self.move(point["x"],point["y"])
        
        self.setWindowTitle(AppProperty.AppTitle)
        self.setWindowIcon(AppProperty.AppIcon)
        self.webview = QWebView(self)
        #QWebPage.Notifications
        self.webview.settings().setAttribute(QWebSettings.DeveloperExtrasEnabled, True)
        self.webview.settings().setAttribute(QWebSettings.LocalContentCanAccessRemoteUrls, True)
        self.webview.settings().setAttribute(QWebSettings.LocalStorageEnabled, True)
        self.webview.settings().setLocalStoragePath(AppProperty.HomeDir+"/data")
        #self.webview.setContextMenuPolicy(Qt.NoContextMenu)
        self.webview.settings().setDefaultTextEncoding("utf-8")
        
        self.webview.setGeometry(1,1,self.width()-2,self.height()-2)
        self.webview.setStyleSheet("QWebView{background-color: rgba(255, 193, 245, 0%); }")
        self.webview.page().networkAccessManager().setCookieJar(AppProperty.CookieJar)
        self.webview.page().mainFrame().javaScriptWindowObjectCleared.connect(self.setJavaScriptObject)
        self.webview.page().linkClicked.connect(self.linkClicked)
        #self.webview.page().featurePermissionRequested.connect(self.permissionRequested)
         
        self.webview.page().setLinkDelegationPolicy(QWebPage.DelegateAllLinks)

        self.handleMethod= handleMethod
        self.subUrl=url
        self.windowType=windowType
        self.url = QUrl.fromLocalFile(AppProperty.HomeDir+"/html/window.html")
        self.webview.load(self.url)
    
    #def permissionRequested(self,frame,feature):
    #    self.webview.page().setFeaturePermission(frame, feature, QWebPage.PermissionGrantedByUser)
         
    def linkClicked(self,url):
        webbrowser.open(url.toString())
     
    def setJavaScriptObject(self):
        self.webview.page().mainFrame().addToJavaScriptWindowObject("_window_", self)
        self.webview.page().mainFrame().addToJavaScriptWindowObject("_service_", AppProperty._service_)
        self.webview.page().mainFrame().addToJavaScriptWindowObject("_notifications_", AppProperty._notifications_)
     
    def cancelAutoLogin(self):
        self.webview.page().mainFrame().evaluateJavaScript("window.localStorage.autoLogin='false';") 
        
    @pyqtSignature("",result="QString")
    def getUrl(self):
        return self.subUrl
    
    @pyqtSignature("",result="QString")
    def getHandleMethod(self):
        return self.handleMethod
    
    @pyqtSignature("",result="int")
    def getWindowType(self):
        return self.windowType

    @pyqtSignature("")
    def openTweetWindow(self):
        if self.tweetWin!=None:
            self.tweetWin.show()
            return 
        self.tweetWin = TweetWindow()
        self.tweetWin.show()
        qe = QEventLoop()
        qe.exec_()
    
    @pyqtSignature("")
    def minimize(self):
        if(self.windowType==0):
            self.hide()
        else:
            self.showMinimized()
    
    @pyqtSignature("")
    def quit(self):
        if(self.windowType==0):
            res = QMessageBox.question(self, "关闭提示", "你点击了关闭按钮\n你是想“最小化”还是“退出”？","最小化", "退出","取消",0,2)
            if(res==1):
                QApplication.instance().quit()
            elif(res==0):
                self.hide()
        else:
            self.close()
    
    @pyqtSignature("int,int")
    def moveTo(self,offsetX,offsetY):
        self.move(self.x()+offsetX,self.y()+offsetY)
    
    @pyqtSignature("QString,int,int,int,QString")
    def open(self,url,width,height,windowType,handleMethod):
        win = Window(url,width,height,windowType,handleMethod)
        win.show()
        qe = QEventLoop()
        qe.exec_() 
    
    @pyqtSignature("",result="QString")
    def getSkinItem(self):
        path = AppProperty.HomeDir+"/imgs/skin/"
        html = ["<ul>"]
        for file in os.listdir(path):
            html.append("<li>")
            html.append("<img src='../imgs/skin/"+file+"'/>")
            html.append("</li>")
        html.append("</ul>")
        return ''.join(html)
        
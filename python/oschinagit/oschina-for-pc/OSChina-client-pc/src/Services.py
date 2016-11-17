#! /usr/bin/env python  
# -*- coding: utf-8 -*-
'''
Created on 2013-6-2

@author: fants
'''
import xmltodict, json,re,os
from PyQt4.QtCore import pyqtSignature,QObject,QEventLoop
from PyQt4.QtGui import QMessageBox
from URLs import URLs
from Window import Window
from bs4 import BeautifulSoup,Comment
import AppProperty
import httplib2
import thread
import Utils

class Service(QObject):
    
    def __init__(self):
        super(Service, self).__init__()
        self.http = None 
        self.headers = None
        self.isUserDataLoaded = 0
        
    @pyqtSignature("QString",result="QString")
    def xml2json(self,xml):
        #print json.dumps(xmltodict.parse(str(xml)[39:].strip()))
        return json.dumps(xmltodict.parse(str(xml)[39:].strip()))
     
    @pyqtSignature("QString",result="QString")
    def handleTweetHtml(self,html):
        soup = BeautifulSoup(str(html))
        soup = soup.find("div",id="OSC_Content")
        for el in soup.findAll(("style","script")):
            el.extract()
        soup.find("div",id="li_loading").extract()
        html = str(soup)
        html = html.replace("/img/portrait.gif","../imgs/portrait.gif")
        html = html.replace("/js/ke/plugins/emoticons/","../imgs/emoticons/")
        return html
    
    @pyqtSignature("QString",result="QString")
    def handleTweetDetailHtml(self,html):
        html = Utils.useLocalResource(html)
        soup = BeautifulSoup(str(html))
        soup.find("meta").insert_before(soup.new_tag("base", href="http://my.oschina.net"))
        soup.find(text=re.compile("top.location=self.location")).parent.extract()
        for el in soup.findAll("div",id=("OSC_Banner","OSC_Topbar","OSC_Footer","topcontrol")):
            el.extract()
        soup.find("h1","caption").extract()
        
        soup.find("div",id="TweetReplyPage").parent["style"] = "vertical-align:top;"
        soup.find("td",{"width":336,"valign":"top"}).extract()
        #soup.find("div",id="OSC_Content")["style"] = "margin-top:0px;"
        soup.find("div",id="OSC_Screen")["style"] = "width:500px;margin-bottom:13px;"
        soup.body["style"]="background:none;"
        if(soup.find("ul","pager")!=None):
            for a in soup.find("ul","pager").findAll("a"):
                a["href"]="javascript:parent.loadSubPage('"+a["href"]+"')"

        ssoup = str(soup).replace("$(document).ready(function() {","mminit();function mminit(){")
        inx = ssoup.find("function set_fellow_memo")
        ssoup = ssoup[0:inx-6]+ssoup[inx:]
        #print ssoup
        return ssoup

    @pyqtSignature("QString",result="QString")
    def handleAllTweetHtml(self,html):
        soup = BeautifulSoup(str(html))
        soup.find("meta").insert_before(soup.new_tag("base", href="http://www.oschina.net"))
        soup.find("div",id="OSC_Content").find("style").string='''
            body,table,input,textarea,select,button {
                font-family: inherit;
            }
            body{background:none;}
            table{border-collapse:collapse;border:none;}
            #TopTweets ul li .tweet {width:219px;}
            .logs ul { list-style-type: none; margin:0px;width:100%; }
            
            .logs ul li {
                overflow:hidden;
                padding:5px 3px;
                margin: 0px;
                border-bottom: 1px solid #eee;
            }
            .logs ul li a {text-decoration:none;}
            
            .logs ul li .portrait {float:left; width:45px;}
            .logs ul li .portrait img {width:40px;height:40px;margin-top:2px;}
            .logs ul li .tweet {float:left;width: 219px;font-size: 10pt;}
            .logs ul li .tweet p {color: #000; overflow:hidden; word-break:break-all; line-height:22px;}
            .logs ul li .tweet .outline {color:#888; font-size:9pt;}
        '''
        soup.find(text=re.compile("top.location=self.location")).parent.extract()
        for el in soup.findAll("div",id=("OSC_Banner","OSC_NavTop","OSC_Footer","topcontrol")):
            el.extract()
            
        soup.find("div","google_ads").parent.extract()
        soup.find("div",id="HotTweets").parent.extract()
        ss = soup.find(text=re.compile("\$\(document\).ready\(")).parent
        ss.string = ss.string[0:len(ss.string)-4]
        soup.find("td",id="TopTweets").find("h1").extract()
        soup.find("div",id="OSC_Screen")["style"] = "width:278px;"

        ssoup = str(soup).replace("$(document).ready(function() {",'''mminit();
            function mminit(){
            //评论数点击事件
            $("#tiles").on("click",".tweet .outline a",function(){
                parent.parent._window_.open($(this).attr("href"),530,520,1,"handleTweetDetailHtml");
                return false;
            });
        ''')

        return ssoup
    
    @pyqtSignature("",result="QString")
    def getUserSpace(self):
        return AppProperty.UserSpace
    
    @pyqtSignature("QString")
    def setUserSpace(self,url):
        AppProperty.UserSpace = url
    
    @pyqtSignature("", result="QString")
    def getFriendsList(self):
        soup = BeautifulSoup(AppProperty.HomeSpaceHtml)
        friends = {}
        nodes = soup.find("div",id="Fellows").find("ul").findAll("img")
        for el in nodes:
            friends[el["user"]] = {"portrait":el["src"],"name":el["title"]} 
        print json.dumps(friends)
    
    @pyqtSignature("",result="int")
    def isUserDataLoaded(self):
        return self.isUserDataLoaded; 

    @pyqtSignature("",result="QString")
    def getUserResume(self):
        return AppProperty.MyResume
        
    @pyqtSignature("")
    def getUserDataStart(self):
        def userData(data):
            if(data == ""):return
            AppProperty.HomeSpaceHtml = data
            soup = BeautifulSoup(data)
            AppProperty.MyResume = soup.find("div", id="MyResume").string
            AppProperty.UserSpace = soup.find("div","Owner").find("a","Img")["href"]+"/home"
            self.isUserDataLoaded = 1
            print AppProperty.MyResume
        
        self.asynHttpGet(AppProperty.UserSpace, userData)
    
    def asynHttpGet(self,url,callback):
        thread.start_new_thread(self.httpGet, (url,callback))
    
    def httpGet(self,url,callback=None):
        #h = httplib2.Http(".cache")
        if(self.http==None):
            self.http = httplib2.Http()
        if(self.headers==None):
            cookies = ""
            for cookie in AppProperty.CookieJar.allCookies():
                if str(cookie.name())=="oscid":
                    cookies = str(cookie.name())+"="+str(cookie.value())
                    break
             
            self.headers = {
                "User-Agent":"Mozilla/5.0 (Windows NT 6.2; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/27.0.1453.110 Safari/537.36",
                "Cookie":cookies
            }
        try:   
            r,content = self.http.request(str(url), "GET",headers=self.headers)
        except Exception,e:
            content = ""
            print e
        
        if(callback!=None):
            callback(content)
        else:
            return content
        
    @pyqtSignature("QString")
    def out(self,xml):
        print xml

    @pyqtSignature("QString,QString,QString,int")
    def showTrayMessage(self,title,content,icon,time):
        AppProperty.TrayIcon.showMessage(title,content,Utils.getQtTrayIconFromString(icon),time)
        
       

# _*_ coding: utf-8 _*_

import requests
import re
import sys
reload(sys)
sys.setdefaultencoding("utf-8")
class spider(object):
    def __init__(self):
        print u'开始爬区内容...'

    def getsource(self, url):
        html = requests.get(url)
        return html.text

    def changepage(self, url, total_page):
        now_page = int(re.search('pageNum=(\d+)', url, re.S).group(1))
        print 'now page: %d' % now_page
        page_group = []
        for i in range(now_page, total_page + 1):
            link = re.sub('pageNum=\d+', 'pageNum=%s' % i, url, re.S)
            page_group.append(link)
        return page_group

    def geteveryclass(self, source):
        everyclass = re.findall('(<li id=.*?</li>)', source, re.S)
        return everyclass

    def getinfo(self, eachclass):
        info = {}
        info['title'] = re.search('<h2 class="lesson-info-h2".*>(.*?)</a>', eachclass, re.S).group(1)
        info['content'] = re.search('<p.*>(.*?)</p>', eachclass, re.S).group(1)
        timeandlevel = re.findall('<em>(.*?)</em>', eachclass, re.S)
        info['classtime'] = timeandlevel[0]
        info['classlevel'] = timeandlevel[1]
        info['learnnum'] = re.search('"learn-number".*>(.*?)</em>', eachclass, re.S).group(1)
        #print info['title'], info['content'], info['classtime'], info['classlevel'],info['learnnum']
        return info

    def saveinfo(self, classinfo):
        f = open('info.txt', 'a')
        for eachinfo in classinfo:
            f.writelines('title:' + str(eachinfo['title']).rstrip() + '\n')
            f.writelines('content:' + str(eachinfo['content']).rstrip() + '\n')
            f.writelines('classtime:' + eachinfo['classtime'] + '\n')
            f.writelines('classlevel:' + eachinfo['classlevel'] + '\n')
            f.writelines('learnnum:' + eachinfo['learnnum'] + '\n')
        f.close()

if __name__ == '__main__':
    classinfo = []
    url = 'http://www.jikexueyuan.com/course/?pageNum=1'
    jikespider = spider()
    all_links = jikespider.changepage(url, 2)
    for link in all_links:
        print u'正在处理页面: ' + link
        html = jikespider.getsource(link)
        everyclass = jikespider.geteveryclass(html)
        for each in everyclass:
            info = jikespider.getinfo(each)
            classinfo.append(info)
    jikespider.saveinfo(classinfo)
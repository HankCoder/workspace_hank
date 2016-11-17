#_*_ coding: utf-8 _*_

from lxml import etree
html = """
<!DOCTYPE html>
<html>
<head lang="en">
    <emta charset="UTF-8">
    <title>ceshi</title>
</head>
<body>
<div id = "content">
    <ul id = "useful">
        <li>this is one info</li>
        <li>this is two info</li>
        <li>this is three info</li>
    </ul>
    <ul id = "useless">
        <li>no need info</li>
        <li>no need infoo</li>
        <li>no need info</li>
    </ul>
    <div id = "url">
        <a href="http://jikexueyuan.com">jikexueyuan</a>
        <a href="http://jikexueyuan.com/course/" title="jikexueyuankechengku">dianjiwodakai</a>
    </div>
</div>
</body>
</html>
"""

selector = etree.HTML(html)
# content = selector.xpath('//ul[@id="useful"]/li/text()')
# for each in content:
#     print each

# link = selector.xpath('//a/@href')
# for each in link:
#     print each
#

title = selector.xpath('//a/@title')
print title[0]
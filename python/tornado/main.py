#!/usr/bin/env python
#-*- coding: utf-8 -*-
import sys
import tornado.httpserver
import tornado.ioloop
import tornado.web
import tornado.options
from tornado.options import define, options
"""
@Version: 0.1
@Author: ErrareHest
@Email: luohao0414@gamil.com
@License: Copyright(c) 2016 ND
@filename: main.py
@time: 16-11-24 上午10:12
"""
reload(sys)
sys.setdefaultencoding('utf-8')

define("port",default=8000, type=int)
class IndexHandler(tornado.web.RequestHandler):
    def get(self):
        arg = self.get_argument('q', 'hello')
        self.write(arg + ' world!')

def main():
    tornado.options.parse_command_line()
    app = tornado.web.Application(handlers=[(r'/', IndexHandler)])
    http_server = tornado.httpserver.HTTPServer(app)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.instance().start()

if __name__ == '__main__':
    main()

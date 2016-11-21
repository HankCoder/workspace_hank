#!/usr/bin/env python3.4
# encoding: utf-8

"""
@version: 3.4
@author: ErrareHest
@license: Apache Licence 
@file: contextTest.py
@time: 2016/11/21 15:50
"""

from threading import RLock
lock = RLock()
def syschronized(function):
    def _syschronized(*args, **kw):
        lock.acquire()
        try:
            return function(*args, **kw)
        finally:
            lock.release()
    return _syschronized

@syschronized
def thread_safe():
    pass

def main():
    pass


if __name__ == "__main__":
    main()
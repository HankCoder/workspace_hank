# -*- coding: utf-8 -*-
import multitask

import time

def coroutine_1():
    for i in range(3):
        print ('c1')
        yield i

def coroutine_2():
    for i in range(3):
        print ('c2')
        yield i

def main():

    multitask.add(coroutine_1())
    multitask.add(coroutine_2())
    multitask.run()
if __name__ == '__main__':
    main()
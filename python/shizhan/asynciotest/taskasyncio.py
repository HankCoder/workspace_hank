#!/usr/bin/env python3
# _*_ coding _*_

import threading
import asyncio

@asyncio.coroutine
def hello():
    print('hello world! (%s)' % threading.currentThread())
    yield from asyncio.sleep(1)
    print('Hello again! (%s)' % threading.currentThread())

loop = asyncio.get_event_loop()
tasks = [hello(), hello()]
loop.run_until_complete(asyncio.wait(tasks))
loop.close()

from ctypes import *
msvcrt = cdll.msvcrt
mssage_string = "Hello world!"
msvcrt.printf("Testing: %s", mssage_string)
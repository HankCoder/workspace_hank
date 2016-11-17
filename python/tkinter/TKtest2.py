#_*_ coding: utf-8 _*_
from Tkinter import *
root = Tk()
#root.option_readfile('optionDB')
root.title('Toplevel')

Label(root, text='This is the main （default） Toplevel').pack(pady=10)
t1 = Toplevel(root)
root.mainloop()
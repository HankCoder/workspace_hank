#!/usr/bin/env python
# -*- conding: utf-8 -*-

class MyIterator(object):
	def __init__(self, step):
		self.step = step
	def next(self):
		if self.step == 0:
			raise StopIteration
		self.step -= 1
		return self.step

	def __iter__(self):
		return self
def main():
	for i in MyIterator(10):
		print i

if __name__ == "__main__":
	main()

#_*_ coding:utf-8 _*_
import curses
from random import randrange,choice #generator and place new tile
from collections import defaultdict

letter_codes = [ord(ch) for ch in 'WASDRQwasdrq']
actions = ['Up', 'Left', 'Down', 'Right', 'Restart', 'Exit']
actions_dict = dict(zip(letter_codes, actions * 2))

def get_user_action(keyboard):
	char = "N"
	while char not in actions_dict:
		char = keyboard.getch()
	return actions_dict[char]

def transpose(field):
	return [list(row) for row in zip(*field)]
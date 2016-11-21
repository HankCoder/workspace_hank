# -*- coding: utf-8 -*-

def psychologist():
    print ('please tell me your problems')
    while True:
        answer = (yield)
        if answer is not None:
            if answer.endswith('?'):
                print("Don`t ask youself too much questions")
            elif 'good' in answer:
                print("A that`s goog, go on")
            elif 'bad' in answer:
                print("Don`t be so negative")

def main():
    free = psychologist()
    free.__next__()
    free.send('I feel bad')
    free.send('Why I shouldn`t ?')
    free.send('ok then i should find what is good for me')

if __name__ == '__main__':
    main()
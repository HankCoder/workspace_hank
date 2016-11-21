#-*- coding: utf-8 -*-

def my_generator():
    try:
        yield 'something'
    except ValueError:
        yield 'dealing with the exception'
    finally:
        print ("ok let`s clean")

def main():
    gen = my_generator()
    gen.__next__()
    gen.throw(ValueError('mean mean mean'))
    gen.close()
    gen.__next__()

if __name__ == '__main__':
    main()
from math import *

l=float(input('Enter lengt of your pendulum: '))


def period(l):
    print(round(2*pi*sqrt(l/9.2), 2))

period(l)
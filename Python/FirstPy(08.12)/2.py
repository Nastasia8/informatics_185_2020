from math import pi, sqrt


def period(l):
    g = 9.8
    return pi*2*sqrt(l/g)


print(period(10))

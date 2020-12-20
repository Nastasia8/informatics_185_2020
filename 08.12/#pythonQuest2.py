from math import pi, sqrt


def calculatePeriod(l):
    T = 2 * pi * sqrt(l/9.8)
    return T

L = float(input("Enter the pendulum lenght"))
print(calculatePeriod(L))
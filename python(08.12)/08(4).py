from math import pow

def deposit(P, I, m, n):
    power=int((m/12)*n)
    S=P*pow(1+(I/(m/12)), power)
    print(S)

I=0,15

m=float(input('M: '))
n=float(input('N: '))
P=float(input('P: '))

deposit(P, I, m, n)
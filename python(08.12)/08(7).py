from math import sqrt, pow

x=float(input('X: '))
y=float(input('Y: '))
z=float(input('Z: '))
D=0
def findingRoots(D, x, y):
    if D < 0: print('There are no roots')
    elif D == 0:
        print(-y/(2*x))
    else:
        print('F1 = ', (-y+sqrt(D))/(2*x), 'F2 = ', (-y-sqrt(D))/(2*x))

def discriminant(x, y, z):
    global D
    D=pow(y, 2) - 4*x*z

discriminant(x, y, z)
findingRoots(D, x, y)
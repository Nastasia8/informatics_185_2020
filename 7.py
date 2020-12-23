from math import *
print("введите x, y, z")
x=(input())
y=(input())
z=(input())
def deskrim(x,y,z):
    D=y**2-4*x*z
    if D<0:
        print("корней нет")
    if D==0:
        print((y*-1)/(2*x))
    if D>0:
        print(((y*-1)+sqrt(D))/(2*x))
        print(((y*-1)+sqrt(D))/(2*x))

deskrim(x,y,z)
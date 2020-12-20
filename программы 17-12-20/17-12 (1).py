from math import sqrt,log,fabs
a=4.1
b=2.7
xn=1.21
xk=5.2
deltaX=0.8
f = open('rezult.txt', 'a')
def funkA(a,b,xn,xk,deltaX):
    x=xn
    y=0
    while x < xk:
        y=(a*sqrt(x)-b*log(x,5))/(log(fabs(x-1),10))
        x=x+deltaX
        f.write("funk A --> "+ str(y)+"\n")
funkA(a,b,xn,xk,deltaX)
spisok=(1.9,2.15,2.34,2.73,3.16)

def funkB(spisok):
    for x in spisok:
        y=(a*sqrt(x)-b*log(x,5))/(log(fabs(x-1),10))
        f.write("funk B --> "+ str(y)+"\n")
funkB(spisok)
f.close()
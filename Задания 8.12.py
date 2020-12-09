import math
#1
text ="The tiger once ranged widely from the Eastern Anatolia Region in the west to the Amur River basin, and in the south from the foothills of the Himalayas to Bali in the Sunda islands."
print("col-vo a = " + str(text.count('a')))
print("col-vo s = " + str(text.count('s')))

#2
l = int(input("len ") )
def mayatnik(l):
    T=0.2
    T = 2*math.pi*math.sqrt(l/9.8)
    print("period = "+str(T))
mayatnik(l)
#3
def calc(x,y,n):
    if n==1:
        print(str(x) +" + "+ str(y) +" = "+ str(x+y))
    elif n==2:
        print(str(x) +" - "+ str(y) +" = "+ str(x-y))
    elif n==3:
      print(str(x) +" / "+ str(y) +" = "+ str(x/y))
    elif n==4:
        print(str(x) +" * "+ str(y) +" = "+ str(x*y))
    elif n==5:
        print(str(x) +" ** "+ str(y) +" = "+ str(x**y))
calc(5,3,1)
calc(4,7,2)
calc(8,4,3)
calc(6,3,4)
calc(7,2,5)
#4
P = float(input("sum "))
I = 15
n = int(input("quantity age "))
m = int(input("3 or 6 or 12 month "))
def procent(P,I,n,m):
    if (m==3 or m==6 or m==12):
        S = P*(1+(I/100)/(m/12))**(m/12*n)
        print("S = "+str(S))
    else:
        print("m - error")

procent(P,I,n,m)
#5
k=int(input("k = "))
n=1
def count(n,k):
    for x in range(n,k):
        S=(n+3**n)/(n+5**(2*n))
    print("S = "+str(S))

count(n,k)
#6

def ranges():
    result = 0
    array = input("nunbers ")
    array = array.split(' ')
    for i in range(len(array)):
        if array[i]!=" ":
            if int(array[i])%2!=0:
                result=result+int(array[i])
    print("summ nechetnoe = " + str(result))
ranges()
#7
def deskrim(x,y,z):
    D=y**2-4*x*z
    if D<0:
        print("korni none")
    if D==0:
        f=(y*-1)/(2*x)
        print("1 koren "+str(f))
    if D>0:
        f=((y*-1)+math.sqrt(D))/(2*x)
        f2=((y*-1)-math.sqrt(D))/(2*x)
        print("2 korna "+str(f)+" "+str(f2))
x,y,z = map(int, input("x y z ->").split())
deskrim(x,y,z)
#8
def number16():
    p=1
    a=input("16-3nachnoe -> ")
    if len(a)==16:
        for i in range(len(a)):
            p=p*int(a[i])
        print("proizzv = "+str(p))
    else:
        print("Error")
number16()
a = input("Program work") 
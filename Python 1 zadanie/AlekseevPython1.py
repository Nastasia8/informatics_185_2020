#6 задание
summa = 0
k = int(input("Введите нижнюю границу диапазона:"))
l = int(input("Введите верхнюю границу диапазона:"))
for i in range(k, l+1):
    if(i % 2 != 0):
        summa += i
print(summa)

#5 задание
summa=1
n=1
k=int(input("Введите границу последовательности: "))
def math(n,summa, k):
    for i in range(n, k+1):
        summa *= (n+3**n)/(n+5**(2*n))
math(n,summa,k)
print(summa)

#Не понимаю, почему выводит только 1

#7 задание
from math import sqrt
print("Формула дискриминанта D = y^2 - 4xz")
x=int(input("Введите x "))
y=int(input("Введите y "))
z=int(input("Введите z "))
D = y**2 - 4*x*z
def Maths(D, x, y, z):
    if (D<0):
        print("Корней нет")

    if (D==0):
        print("Имеется один корень: ", (-y)/2*x)

    if (D>0):
        print("Имеется два корня: ", ((-y+sqrt(D))/2*x),", ",((-y-sqrt(D))/2*x))
        
Maths(D,x,y,z)

#Zadanie 1
s = 'The tiger once ranged widely from the Eastern Anatolia Region in the west to the Amur River basin, and in the south from the foothills of the Himalayas to Bali in the Sunda islands.'
print(len(s))
print(s.count('a'))
print(s.count('s'))

#Zadanie 2
from math import sqrt, pi
def PeriodMath(l):
    g=9.8
    print(2*pi*sqrt(l/g))

l = int(input("Vvedite dliny mayatnika "))
PeriodMath(l)

#Zadanie 3
def summ(x,y):
    print(x+y)

def delen(x,y):
    print(x/y)

def razn(x,y):
    print(x-y)

def proizv(x,y):
    print(x*y)

def step(x,y):
    print(x**y)

x=int(input("Vvedite pervoe 4islo "))
y=int(input("Vvedite vtoroe 4islo"))

k=int(input("Vvedite nomer komandy: 1 - summa, 2 - delenie, 3 - proizvedenie, 4 - raznost, 5 - vozvedenie v stepen"))

if k==1:
    summa(x,y)

if k==2:
    delen(x,y)

if k==3:
    proizv(x,y)

if k==4:
    razn(x,y)

if k==5:
    step(x,y)

#8 zadanie
digit = int(input("Введите шестизначное число "))

umn = 1

while digit > 0:
    k = digit % 10
    umn = umn * k
    digit = digit // 10

print("Произведение цифр = ", umn)
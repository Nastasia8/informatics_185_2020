print("Введите 2 числа")
from math import *
x=float(input())
y=float(input())

def kalk(x, y):
    print("Сделайте свой выбор сумма-1, произведение-2, деление-3, вычитание чисел-4,  возведение числа x в степень y-5 ")
    choice = int(input())
    if choice==1:
        print(x+y)
    elif choice==2:
        print(x*y)
    elif choice==3:
        if (y != 0):
            print(x/y)
    elif choice==4:
        print(x-y)
    elif choice==5:
        print(pow(x, y))
while exit:
    kalk(x, y)
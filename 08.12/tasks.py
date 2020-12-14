
import math 
print ("Первое задание:" + "\n")
Tiger = "The tiger once ranged widely from the Eastern Anatolia Region in the west to the Amur River basin, and in the south from the foothills of the Himalayas to Bali in the Sunda islands."
a=0
s=0
for b in Tiger :
    if b == "a":
        a+= 1
    if b == "s":
        s+= 1
print ("Символов  a ", a)
print ("Символов s " ,s)



print ("Второе задание:" + "\n")

def math_mayatnik ():
    g=9.8
    L = float (input("Enter L: "))
    result = round((2*math.pi*math.sqrt(L/g)),2)
    print (result)

math_mayatnik ()

print ("Третье задание:" + "\n")

def calculate () :  
    x = float (input ("Введите x: " ))
    y = float (input ("Введите y: " ))
    what = input ("Введите операцию (+ , - , * , / , **)\n")
    if what == "+": 
         print ("x+y=", x+y)
    elif what == "-" :
         print ("x-y=", x-y)
    elif what == "*" :
         print ("x*y=", x*y)
    elif what == "/" :
         print ("x/y=", x/y)
    elif what == "**" :
         print ("x^y=", x**y)
    else:
         print ("Неизвестное действие")

calculate()

print ("Четвертое задание:" + "\n")

P = float (input ("Введите P: " ))
I = float (input ("Введите I: " ))
m = float (input ("Введите m: " ))
n = float (input ("Введите n: " ))

def calc_stoimost():
     S=round ((P*(1+(I/100)/(m/12))**(m/12*n)),1)
     print ("Будущая стоимость вклада", S)

calc_stoimost ()
print ("Пятое задание:" + "\n")

def rezult_proizved () :
    
    rezultat=1
    for n in range (1, k+1):
        rezultat=rezultat*(n+3**n)/(n+5**(2*n))

    return rezultat


k = int (input("Введите k: "))

print ("Результат: ", rezult_proizved())

print ("Шестое задание:" + "\n")

def calculate_nechet ():
    v= int (input("Сколько чисел вы хотите ввести ? "))
    sum=0
    for i in range (1, v+1):
        value = int (input ())
        if ((value%2)==1):
            sum+=value
    return sum

print ("Сумма не четных чисел = " , calculate_nechet())

print ("Седьмое задание:" + "\n")

def uravneniye ():
     x = float (input ("Введите x: " ))
     y = float (input ("Введите y: " ))
     z = float (input ("Введите z: " ))

     if (y**2-4*x*z<0):
        print ('Корней нет')
     elif y**2-4*x*z==0:
         print ("f= ", (-y/(2*x)))
     else:
         print ("f1=", (-y+math.sqrt(y**2-4*x*z))/(2*x))
         print ("f2=", (-y-math.sqrt(y**2-4*x*z))/(2*x))

uravneniye()

print ("Восьмое задание:" + "\n")

def proizved ():
    value= int (input("Введите восьмизначное число "))
    proizvedchisel=1
    while value>0:
         proizvedchisel *= value % 10 
         value = value // 10
    print ("Произведения чисел восьмизначного числа =", proizvedchisel)

proizved()
import math
print("\n\n\nПервое задание\n")
text = "The tiger once ranged widely from the Eastern Anatolia Region in the west to the Amur River basin, and in the south from the foothills of the Himalayas to Bali in the Sunda islands."
print (text)
a = 0
s = 0
for x in text:
    if x == "a":
        a += 1
    if x == "s":
        s += 1
print (a, "символов 'a'")
print (s, "символов 's'")




print ("\n\n\nВторое задание\n")
def mathPendulum():
    g = 9.8
    L = float (input("Введите значение L\n"))
    result = round((2 * math.pi * math.sqrt(L / g)), 2)
    print (result)
mathPendulum()




print ("\n\n\nТретье задание\n")
def calculator():
    print ("Калькулятор типа (x 'действие' y =)")
    x = float (input ("x = "))
    y = float (input ("y = "))
    sign = input ("+(сложение), -(вычитание), *(умножение), /(деление), **(возведение в степень)\nВведите знак действия\n")
    if sign == "+": 
         print (x, "+", y, "=", x + y)
    elif sign == "-":
         print (x, "-", y, "=", x - y)
    elif sign == "*":
         print (x, "*", y, "=", x * y)
    elif sign == "/":
         print (x, "/", y, "=", x / y)
    elif sign == "**":
         print (x, "^", y, "=", x ** y)
    else:
         print ("Ошибка ввода")
calculator()




print ("\n\n\nЧетвёртое задание\n")
P = float (input ("Сумма вклада: "))
I = float (input ("Ставка за период: "))
m = float (input ("Количество начислений процентов в год: "))
n = float (input ("Количество лет: "))
def calculateCost():
     S = round((P * (1 + (I / 100) / (m / 12)) ** (m / 12 * n)), 1)
     print ("Будущая стоимость вклада:", S)
calculateCost()





print ("\n\n\nПятое задание\n")
def resultСomposition():
    result = 1
    for n in range (1, k + 1):
        result = result * (n + 3 ** n) / (n + 5 ** (2 * n))
    return result
k = int (input("Введите k: "))
print ("Результат: ", resultСomposition())





print ("\n\n\nШестое задание\n")
def calculateOdd ():
    v = int (input("Укажите диапазон\n"))
    sum = 0
    for i in range (1, v + 1):
        value = int (input ())
        if ((value % 2) == 1):
            sum += value
    return sum
print ("Сумма нечётных чисел заданного диапазона - ", calculateOdd())





print ("\n\n\nСедьмое задание\n")
def equation ():
     x = float (input("x = "))
     y = float (input("y = "))
     z = float (input("z =  "))
     if (y ** 2 - 4 * x * z < 0):
        print ('Корней нет')
     elif y ** 2 - 4 * x * z == 0:
         print ("x = ", (-y / (2 * x)))
     else:
         print ("x1 =", (-y + math.sqrt(y ** 2 - 4 * x * z)) / (2 * x))
         print ("x2 =", (-y - math.sqrt(y ** 2 - 4 * x * z)) / (2 * x))
equation()





print ("\n\n\nВосьмое задание\n")
def сomposition():
    value = int (input("Введите восьмизначное число\n"))
    сompositionNumbers = 1
    while value > 0:
         сompositionNumbers *= value % 10 
         value = value // 10
    print ("Произведения чисел восьмизначного числа - ", сompositionNumbers)
сomposition()
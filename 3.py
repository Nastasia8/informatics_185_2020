print ("\n\n\n3-е задание\n")
def calculator():
    print ("Калькулятор типа (x 'действие' y =)")
    x = float (input ("x = "))
    y = float (input ("y = "))
    sign = input ("+(сложение), -(вычитание), *(умножение), /(деление), **(возведение в степень)\nВведите знак действия\n")
    if sign == "+": 
         print (x,"+", y,"=", x + y)
     elifsign == " -":
         print (x," -", y,"=", x - y)
     elifsign == "*":
         print (x,"*", y,"=", x * y)
     elifsign == "/":
         print (x,"/", y,"=", x / y)
     elifsign == "**":
         print (x,"^", y,"=", x * * y)
    else:
         print ("Ошибка ввода")
calculator()
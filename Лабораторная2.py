#1.2(1)
print('Номер 1, первый способ:')
print('\t')
x = int(input('ENTER x:'))

fact = 1
while x >= 1:
    fact *= x
    x -= 1
print ("Fact of x =", fact)
print('\t')
#1.2(2)
print('Номер 1, второй способ:')
print('\t')
x = int(input('ENTER x:'))
def fact(x):
    if x == 0:
        return 1
    return fact(x-1) * x
print (fact(x))  
print('\t')
#3.2
print('Номер 3')
print('\t')
x = int(input("Введите высоту треугольника:"))
y = 0
while x > y:
    print (y * "◘")
    y += 1    
while y >= 1:
    print (y * "◘")
    y -= 1
print('\t')    
if x == 0:
    print ("Empty, just empty...")
print ("\t") 
#5.2
print('Номер 5')
print('\t')
def function (a,b):
    x = a * b
    while a != 0 and b !=0:
        if a > b:
            a %= b
        else:
            b %= a
    return x // (a+b)   
x = int(input("Введите x:"))  
y = int(input("Введите y:")) 
print ("НОК числел =", function (x,y))

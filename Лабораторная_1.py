
#2.1
print('Номер 2')
print('\t')
print([number**2 for number in range (1,21,2)])
print('\t')

#3.1
print('Номер 3')
print('\t')
k = int(input("Введите число: "))
x = 1
Rezultat = 1
for x in range (x, k+1):
    Rezultat*=(2**x)-1
print(Rezultat)
print('\t')

#4.1(1)
print('Номер 4')
print('Первый способ\t')
print('\t')
def listsum(Spisok):
    Summa = 0
    for x in Spisok:
        if x < 0:
            Summa = Summa + x
    return Summa        
    
print (listsum([7, 1, 3, 4, 3, 9, 14, -5, -17, -13, -19, -18]))
print('\t')

#4.1(2)
print('Номер 4')
print('Второй способ\t')
print('\t')
Summa = 0
x = [7, 1, 3, 4, 3, 9, 14, -5, -17, -13, -19, -18]
i = -1
while x[i] < 0:
    Summa += x[i]
    i -= 1
print (Summa)
print('\t')
#5
print('Номер 5')
print('\t')

def Function (x,y):
    Chisla = [print(z**x**y if z%2==1 else z)for z in range(1,21)]
    return(Chisla)
print (Function (2,5))
print('\t')
#6
print('Номер 6')
print('\t')
words = "Hello hi how hello are and you I am fine thank you and you hello You Thank And"
dict = {}
for word in words.split(" "):
    if word in dict:
        dict[word] = dict[word]+1
    else:
        dict[word] = 1
print(dict)
print('\t')
#7.1
print('Номер 7')
print('\t')
matrica = [[13,24],[55,41]]
def show(matrica):
    for x in range (len(matrica)):
        for y in matrica [x]:
            print(y, end = '  ')  
        print ('\n') 
def function (matrica):
    for x in range (len(matrica)):
        matrica [x][1-x] *=2
print ('Матрица до:')
print ('\t')
show (matrica)
print ('Матрица после:')
print ('\t')
function(matrica)
show (matrica)
print('\t')

#9.1
print('Номер 9')
print('\t')
def function(a,b):
    for x in b:
        if x in a:
            return True
        return False
print (function({78,568675,456,23},[78,23,400]))
print (function({99,2},[45,3]))
print (function({5,8},[32,12,5]))  
print('\t')

#10
print('Номер 10')
print('\t')

list=[6, 43, -2, 11, -55, -12, 3, 345, 0]
Dict= {i:"positive" if i>0 else "negative" if i<0 else "zero" for i in list}
print(Dict)
print ("Первое задание : \n")
spisok= [3, 8, 2, 1, 4, 7, 5, 6, 10, 9]
new_spicok= []

def chetnost1():
     for x in spisok:
        if x%2==0:
            new_spicok.append(x)
     new_spicok.sort()
     print (new_spicok)

chetnost1()

def odd(x):
    return x % 2 ==0

n_s2 =list (filter (odd, spisok))
n_s2.sort()
print (n_s2)

new_s3 = list(filter(lambda x: x % 2 ==0 , spisok ))
new_s3.sort()

print (new_s3)

print ("Второе задание : \n")

Animals = ["tiger", "leopard", " elephant", "Fox", "wolf", "camel", "raccoon"]
Animals = list(map(lambda x: x[-1], Animals ))
Animals.sort()
print(Animals)

print ("Третье задание : \n")

def obmen(x):
    t = x[0]
    x[0] = x[-1]
    x[-1] = t

Animals = ["tiger", "leopard", " elephant", "Fox", "wolf", "camel", "raccoon"]
obmen(Animals)
print(Animals)

print ("Четвертое задание : \n")

A = {"tiger", 0, "leopard", "elephant", 2, 7}
B = {1, "camel", "elephant", 2, 9}
#Встроенные функции
c = A.intersection(B) 
d = A.union(B) 
print(c, "\n")
print(d, "\n")
#Без встроенных функций 
intersection = set()
for i in A:
    for j in B:
        if i == j:
            intersection.add(j)
print(intersection, "\n")

union = A
for i in B:
    union.add(i)
print(union, "\n")

print ("Пятое задание : \n")

kortej = (1, 2, 2, 3, 1, 2, 4, 3, 2, 2)
b = []
for i in range(len(kortej)):
    if kortej[i] == 2:
        b.append(i)
print(b)

print ("Шестое задание : \n")
def display(a, b):
    d = list()
    count = a.count(b)
    if count == 0:
        print("The tuple doesn't contain a character = ", b)
    elif count == 1:    
        for i in range(len(a)):
            if a[i] == b:
                d.append(i)
        print(a[d[0]:]) 
    else:
        for i in range(len(a)):
            if a[i] == b:
                d.append(i)
        print(a[d[0] : d[-1]+1])
a = (1, 2, 3, 4, 5, 4, 6, 2, 4, 7, 9, 4, 5, 6, 5, 0, 4, 2)
b = int(input("Введите символ: "))
display(a,b)


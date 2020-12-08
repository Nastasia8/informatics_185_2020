print('+ : 1')
print('* : 2')
print('/ : 3')
print('- : 4')
print('** : 5')
x = int(input("Vedi x"))
y = int(input("Vedi y"))


def schet(x, y):
    p = int(input("Enter the number of operation(1-5)"))
    if p == 1:
        print(x+y)
    if p == 2:
        print(x*y)
    if p == 3:
        print(x/y)
    if p == 4:
        print(x-y)
    if p == 5:
        print(x**y)


schet(x, y)

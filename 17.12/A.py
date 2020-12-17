from math import *
results = []
def calculation(results, a, xi, xf, dx):
    while xi <= xf:
        y = round((log10(a+xi) ** 2)/((a+xi)**2), 3)
        xi+=dx
        results.append(y)
    print(results)
def add_to_file(results):
    f = open('data_from_A_and_B.txt', 'w')
    f.write('Exercise A: \n')
    counter = 1
    for y in results:
        f.write(f'Y{counter} = ' + str(y) + '\t')
        counter+=1
    f.close()

a = float(input('Enter a: '))
xi = float(input('Enter initial x: '))
xf = float(input('Enter final x: '))
dx = float(input('Enter delta x: '))

calculation(results, a, xi, xf, dx)
add_to_file(results)
from math import *

def calculation(variables, results):
    a = float(input('Enter a: '))
    for x in variables:
        y = round((log10(a+x)**2)/((a+x)**3), 3)
        results.append(y)
    print(results)

def add_to_file(results):
    f = open('data_from_A_and_B.txt', 'a')
    f.write('Exercise B: \n')
    counter = 1
    for y in results:
        f.write(f'Y{counter} = ' + str(y) + '\t')
    f.close()

variables = []
results = []

for i in range(1,6):
    x = float(input(f'\n Enter x{i}: '))
    variables.append(x)
print(variables)

calculation(variables, results)
add_to_file(results)
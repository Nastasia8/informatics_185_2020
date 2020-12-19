from math import sqrt, log10
a = 7.2
b = 4.2
x = 1.82


def zapis(x, a, b):
    while x <= 5.31:
        with open("hello.txt", "a") as hello_file:
            print(sqrt((abs(a-b*x)/(log10(x))**3)), file=hello_file)
        x += 0.7
    with open("hello.txt", "a") as hello_file:
        print('-------------', file=hello_file)


zapis(x, a, b)

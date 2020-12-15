# 2
import copy
a = ['tiger', 'leopard', 'elephant', 'Fox', 'wolf', 'camel', 'raccoon']
b = copy.deepcopy(a)
g = " sdfsfd"


def fuction(item):
    return (list(item).pop())


b = sorted(list(map(fuction, b)))
print(b)

# 3


def swap(x):
    x[0], x[-1] = x[-1], x[0]


swap(b)
print(b)

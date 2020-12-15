from copy import deepcopy


def chet(x):
    if x % 2 == 0:
        return x


a = [3, 8, 2, 1, 4, 7, 5, 6, 10, 9]
b = []
# a
for item in a:
    if item % 2 == 0:
        b.append(item)
print(b)
# b
b = []
b = (list(filter(chet, a)))
print(b)
# c
b = list(filter(lambda x: x % 2 == 0, a))
print(sorted(b))

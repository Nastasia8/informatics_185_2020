a = 1, 2, 3, 4, 5, 4, 6, 2, 4, 7, 9, 4, 5, 6, 5, 0, 4, 2
x = int(input('x = '))
b = []


def slize(a, x):
    k = 0
    for i in range(len(a)):
        if a[i] == x and k < 2:
            k += 1
            b.append(i)
    if k == 2:
        print(a[b[0]:b[1]+1])
    if k == 1:
        print('Only one item')
    if k == 0:
        print('not item')


slize(a, x)

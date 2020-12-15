a = {'s': 9, 'f': 6, 'd': 7, 'g': 10}
print(a)


def sum(a):
    p = 0
    for k in a:
        p += a[k]
    return p


def pr(a):
    pr = 1
    for k in a:
        pr *= a[k]
    return pr


print(f'Сумма = {sum(a)}; Произведение = {pr(a)}')

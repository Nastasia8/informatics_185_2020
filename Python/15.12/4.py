import copy
a = {'tiger', 0, 'leopard', 'elephant',  2, 7}
b = {1, 'camel', 'elephant', 2, 9}
c = copy.deepcopy(b)
d = set()
for item in a:
    c.add(item)
for item in a:
    for i in b:
        if i == item:
            d.add(i)
print(f'Объединение = {c}')
print(f'Пересечение = {d}')
# или
print(a.union(b))
print(a.intersection(b))

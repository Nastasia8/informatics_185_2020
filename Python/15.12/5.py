a = (1, 2, 2, 3, 1, 2, 4, 3, 2, 2)
b = []
for i in range(len(a)):
    if 2 == a[i]:
        b.append(i)
print(b)

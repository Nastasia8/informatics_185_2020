import sys
t = int(input("Vedi 6-noe chislo"))
i = 0
n = t
pr = 1
while (n != 0):
    n = n // 10
    i += 1
if (i != 6):
    print("Error")
    sys.exit()
while (t != 0):
    pr *= t % 10
    t = t // 10
print(pr)

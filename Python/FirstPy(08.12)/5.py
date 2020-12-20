k = int(input("Enter k: "))
pr = 1
n = 1
while n != k:
    pr *= (n+3**n)/(n + 5**(2*n))
    n += 1
print(pr)

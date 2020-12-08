k = int(input("Enter k: "))
pr = 1
n = 1
for i in range(k):
    pr *= (n+3**n)/(n + 5**(2*n))
print(pr)

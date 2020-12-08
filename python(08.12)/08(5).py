from math import pow

def multiplying (k):
    result = 1
    n = 1
    while n < k:
        result *= round((n+pow(3, n))/(n+pow(5, n * 2)), 2)
        n+=1
    print(result)

k=int(input('K: '))

multiplying(k)
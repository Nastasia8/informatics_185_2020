k = int(input("Input count of iterations"))
def calc(count):
    p = 1
    for n in range(count):
        p = p * (n + 3**n) / (n + 5**(2*n))
    return p
print(calc(k))

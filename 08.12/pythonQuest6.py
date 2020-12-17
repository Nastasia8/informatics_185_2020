

def calc(k):
    result = 1
    for n in range(k):
        result = result * (n + (3**n)) / (n + (5**(2*n)))
    return result


k = int(input("Enter count of iterations"))
print(calc(k))
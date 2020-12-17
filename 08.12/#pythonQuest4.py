def calculateDeposit(P, m, n):
    s = P * (1 + ((15/100) / (m/12)) ** ((m/12)*n))
    return s

P = int(input("Enter deposit amount"))
m = int(input("Enter number of interest accruals per year"))
n = int(input("Enter term of the deposit"))

print(calculateDeposit(P, m, n))
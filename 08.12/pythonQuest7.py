from math import sqrt
def calc(x, y, z):
    D = (y**2) - (4 * x * z)
    if D < 0:
        return ("x, y, z don't have roots:", D)
    elif D == 0:
        print("D:", D)
        return (-1*y) / (2*x)
    else:
        print("D:", D)
        return ((-1*y + sqrt(D)) / (2*x)), ((-1*y - sqrt(D)) / (2*x))
    return "Wrong"

x = int(input("X:"))
y = int(input("Y:"))
z = int(input("Z:"))
print(calc(x, y, z))
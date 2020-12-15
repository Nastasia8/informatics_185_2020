# С документацией по pep8
def discr(a: float, b: float, c: float) -> None:
    '''Метод принимает на вход коэффиценты квадратного уравнения (старший, второй и свободый) и выводит на экран его корни'''
    d = b**2 - 4*a*c
    if d > 0:
        print(f"x1 = {((-b+d**(1/2))/(2*a))}")
        print(f"x2 = {((-b-d**(1/2))/(2*a))}")
    if d == 0:
        print(f"x1, x2 = {((-b+d**(1/2))/(2*a))}")
    else:
        print("Корней нет")


x = float(input("enter x: "))
y = float(input("enter y: "))
z = float(input("enter z: "))
discr(x, y, z)

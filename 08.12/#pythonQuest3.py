

def calculate(x, y, choice):
    if choice == 1:
        return x + y
    elif choice == 2:
        return x * y
    elif choice == 3:
        return x / y
    elif choice == 4:
        return x - y
    elif choice == 5:
        return x ** y
    else:
        return None

exit = False
while exit != True:
    print("""
        1 - sum(+)
        2 - multiply(*)
        3 - division(/)
        4 - subtraction(-)
        5 - exponentiation(**)
        6 - exit()
    """)
    choice = int(input("Select function: \n"))
    if choice == 6:
        exit = False
        break
    else:
        x = int(input("Enter first num:\n"))
        y = int(input("Enter first num:\n"))
        print(calculate(x, y, choice))


print ("\n\n\n2-ое задание\n")
def mathPendulum():
    g = 9,8
    L = float (input("Введите значение L\n"))
    result = round((2 * math.pi * math.sqrt(L / g)), 2)
    print (result)
mathPendulum()
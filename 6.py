print ("\n\n\n6-ое задание\n")
def calculateOdd ():
    v = int (input("Укажите диапазон\n"))
    sum = 0
    for i in range (1, v + 1):
        value = int (input ())
        if ((value % 2) == 1):
            sum += value
    return sum
print ("Сумма нечётных чисел заданного диапазона - ", calculateOdd())
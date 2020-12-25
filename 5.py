print ("\n\n\n5-ое задание\n")
def resultСomposition():
    result = 1
    for n in range (1, k + 1):
        result = result * (n + 3 ** n) / (n + 5 ** (2 * n))
    return result
k = int (input("Введите k: "))
print ("Результат: ", resultСomposition())

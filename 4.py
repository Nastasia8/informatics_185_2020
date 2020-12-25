print ("\n\n\nЧетвёртое задание\n")
P = float (input ("Сумма вклада: "))
I = float (input ("Ставка за период: "))
m = float (input ("Количество начислений процентов в год: "))
n = float (input ("Количество лет: "))
def calculateCost():
     S = round((P * (1 + (I / 100) / (m / 12)) ** (m / 12 * n)), 1)
     print ("Будущая стоимость вклада:", S)
calculateCost()
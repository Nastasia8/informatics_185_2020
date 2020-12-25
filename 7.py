print ("\n\n\n7-ое задание\n")
def equation ():
     x = float (input("x = "))
     y = float (input("y = "))
     z = float (input("z =  "))
     if (y ** 2 - 4 * x * z < 0):
        print ('Корней нет')
     elif y ** 2 - 4 * x * z == 0:
         print ("x = ", (-y / (2 * x)))
     else:
         print ("x1 =", (-y + math.sqrt(y ** 2 - 4 * x * z)) / (2 * x))
         print ("x2 =", (-y - math.sqrt(y ** 2 - 4 * x * z)) / (2 * x))
equation(
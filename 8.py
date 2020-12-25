print ("\n\n\n8-ое задание\n")
def сomposition():
    value = int (input("Введите восьмизначное число\n"))
    сompositionNumbers = 1
    while value > 0:
         сompositionNumbers *= value % 10 
         value = value // 10
    print ("Произведения чисел восьмизначного числа - ", сompositionNumbers)
сomposition()
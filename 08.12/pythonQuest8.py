def calc(number):
    result = 1
    for i in range(6):
        x = number % 10
        result *= x
        number = number // 10
    return result


number = int(input("Enter six digit number: "))
if number < 1000000 and number > 99999:
    print(calc(number))
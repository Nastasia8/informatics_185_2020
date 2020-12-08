a = int(input("Vedi diapozon(first number)"))
b = int(input("Vedi diapozon (poslednie number)"))


def nechet(a, b):
    s = 0
    while a != b+1:
        if a % 2 == 1:
            s += a
        a += 1

    return s


print(nechet(a, b))

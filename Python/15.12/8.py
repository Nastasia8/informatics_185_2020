def sl(a):
    b = {}
    for item in a:
        if type(item) == str:
            x = item
            b[x] = []
        if type(item) == int:
            b[x].append(item)
    print(b)


a = ['Tom', 23, 170, 65, 'Anna', 18, 160, 55,
     'Alex', 24, 175, 70, 'Kim', 33, 180, 57]
sl(a)

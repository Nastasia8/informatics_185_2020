list1 = (1, 2, 3, 4, 5, 4, 6, 2, 4, 7, 9, 4, 5, 6, 5, 0, 4, 2)
list2 = list1[::-1]

def calc(arr1, arr2, sym):
    list3 = []
    try:
        a = int(arr1.index(sym))
    except:
        return (f"Number {sym} not in")
        
    if a == int(arr2.index(sym)):
            b =   -1 * (int(arr2.index(sym)) + 1)
            print(a, b)
            list3 = list(arr1[a:b])
            return list3
    else:
        list3 = list(arr1[a:])
        return list3

symbol = int(input("Symbol: "))
print(calc(list1, list2, symbol))



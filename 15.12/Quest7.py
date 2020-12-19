list_ = {"A": 1, "B": 2, "C": 3, "D": 4, "E": 5, "F": 6}

def summ(arr):
    result = 0
    for i in arr.values():
        result += i
    return result

def multiply(arr):
    result = 1
    for i in arr.values():
        result += i
    return result

print(summ(list_))
print(multiply(list_))

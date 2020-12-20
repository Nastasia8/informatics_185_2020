arr1=[3, 8, 2, 1, 4, 7, 5, 6, 10, 9]
even_n=[]
def finder(*params):
    for num in arr1:
        if num % 2 == 0:
            even_n.append(num)
    return even_n
def filt(num):
    if num % 2 ==0:
        return True
    else:
        return False

print(finder(arr1, even_n), '\n')

print(list(filter(lambda num: num % 2 == 0, arr1)), '\n')

print(list(filter(filt, arr1)))
def ranges():
    result = 0
    array = input("nunbers ")
    array = array.split(' ')
    for i in range(len(array)):
        if array[i]!=" ":
            if int(array[i])%2!=0:
                result=result+int(array[i])
    print("summ nechetnoe = " + str(result))
ranges()
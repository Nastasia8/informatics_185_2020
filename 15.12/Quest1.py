def print_(arr):
    for i in range(len(arr)):
        print(arr[i])

#First way
list1 = []
for i in range(1, 11):
    list1.append(i)
print_(list1)
print("END1")

#Second way
def lower_eleven(number):
    if number <= 10:
        return number
    else:
        pass

list2 = list(filter(lower_eleven, range(1, 11)))
print_(list2)
print("END2")

#Third
list3 = list(filter(lambda x: x <= 11, range(1, 11)))
print_(list3)
print("END3")





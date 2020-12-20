from Quest1 import print_
list1 = (1, 2, 2, 3, 1, 2, 4, 3, 2, 2)
list2 = []
for i in range(len(list1)):
    if list1[i] == 2:
        list2.append(i)
        
print("Quest 5")
print_(list2)
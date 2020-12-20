from Quest2 import list2
from Quest1 import print_
# print_(list2)
print('Quest3')

def swap(arr):
    arr[0], arr[-1] = arr[-1], arr[0]
    
swap(list2)
print_(list2)


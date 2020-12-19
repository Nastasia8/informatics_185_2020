from Quest1 import print_


print("Quest2")
list1 = ["tiger", "leopard", "elephant", "Fox", "wolf", "camel", "raccoon"]

list2 = list(map(lambda x: x[-1], list1))
print_(list2)   

data = (1, 2, 2, 3, 1, 2, 4, 3, 2, 2)
indexes = []
for index_ in range(len(data)):
    if data[index_] == 2:
        indexes.append(index_)
print(indexes)
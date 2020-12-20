data = (1, 2, 3, 4, 5, 4, 6, 2, 4, 7, 9, 4, 5, 6, 5, 0, 4, 2)
indices = []
def function(data, symbol):
    for s in range(len(data)):
        if symbol == data[s]: indices.append(s)
    if len(indices) == 1: print(data[indices[0]:])
    else: print(data[indices[0]:indices[-1]+1])

symbol = int(input('Enter a symbol: '))

function(data, symbol)
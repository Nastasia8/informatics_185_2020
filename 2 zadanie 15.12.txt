animals=['tiger','leopard', 'elephant', 'Fox', 'wolf', 'camel', 'raccoon']
print(sorted(list(map(lambda l: l[len(l)-1:len(l)] , animals)))[::-1])
animals=['tiger','leopard', 'elephant', 'Fox', 'wolf', 'camel', 'raccoon']
letters = sorted(list(map(lambda l: l[len(l)-1:len(l)] , animals)))[::-1]
def changer(letters):
    letters[0], letters[-1] = letters[-1], letters[0]
    return letters

print(changer(letters))
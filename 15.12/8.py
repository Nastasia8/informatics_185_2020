data = ["Tom", 23, 170, 65, "Anna", 18, 160, 55, "Alex", 24, 175, 70, "Kim", 33, 180, 57]
dictionary = {}
def make_dict_(data, dictionary):
    name = ''
    for item in data:
        if type(item) == str:
            dictionary[item] =[]
            name = item
        elif type(item) == int:
            dictionary[name].append(item)

    print(dictionary)
make_dict_(data, dictionary)
list_ = ["Tom", 23, 170, 65, "Anna", 18, 160, 55, "Alex", 24, 175, 70, "Kim", 33, 180, 57]
dict_ = {}

def calc(arr, dict_):
    for i in range(0, len(arr), 4):
        dict_[arr[i]] = list((arr[i+1], arr[i+2], arr[i+3]))
    return dict_

print(calc(list_, dict_))
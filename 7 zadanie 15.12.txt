data = {"v1": 0, "v2": 0, "v3": 0}
def function(data):
    result1 = 0
    result2 = 1
    for key in data:
        data[key] = int(input('Enter a value: '))
        result1 += data[key]
        result2 *= data[key]
    print('Summing: ' , result1, '\t', 'Multiplying: ' , result2)
function(data)
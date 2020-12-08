def summ(x,y):
    result = 0
    for i in range(x, y+1):
        if i%2!=0:
            result+=i
    print(result)
    
    
x=int(input('The first number in your interval: '))
y=int(input('The second number in your interval: '))

summ(x, y)
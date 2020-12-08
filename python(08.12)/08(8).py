def multiplying(x):
    result = 1
    while x > 0:
        result*=x%10
        x=x//10
    print (result)

def check(x):
    if (x > 99999 and x < 1000000):
        multiplying(x)
    else:
        print("You've entered wrong number")

x=int(input('Enter six-digit number: '))
check(x)
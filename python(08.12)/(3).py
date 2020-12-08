from math import pow

x=float(input('X: '))
y=float(input('Y: '))

exit = True
def calculating(x, y):
    choice = int(input('Choose math operation (1-summing, 2-multiplying, 3-division, 4-subtraction, 5-x in power y, 6-exit)'))
    if choice==1:
        print(x+y)
    elif choice==2:
        print(x*y)
    elif choice==3:
        print(round(x/y, 2))
    elif choice==4:
        print(x-y)
    elif choice==5:
        print(pow(x, y))
    elif choice==6:
        global exit
        exit = False
    else:
        print('No such option')
while exit:
    calculating(x, y)
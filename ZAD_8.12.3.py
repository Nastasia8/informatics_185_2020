def calc(x,y,n):
    if n==1:
        print(str(x) +" + "+ str(y) +" = "+ str(x+y))
    elif n==2:
        print(str(x) +" - "+ str(y) +" = "+ str(x-y))
    elif n==3:
      print(str(x) +" / "+ str(y) +" = "+ str(x/y))
    elif n==4:
        print(str(x) +" * "+ str(y) +" = "+ str(x*y))
    elif n==5:
        print(str(x) +" ** "+ str(y) +" = "+ str(x**y))
calc(4,3,8)
calc(4,1,2)
calc(8,6,3)
calc(9,3,4)
calc(7,2,1)
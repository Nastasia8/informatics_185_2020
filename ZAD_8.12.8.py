def number16():
    p=1
    a=input("16-3nachnoe -> ")
    if len(a)==16:
        for i in range(len(a)):
            p=p*int(a[i])
        print("proizzv = "+str(p))
    else:
        print("Error")
number16()
a = input("Program work") 
def f():
    p=1
    if (a > 99999 and a < 1000000):
        for i in range(1,7):
         p=p*int(a[i])
         print(p)
    else:
        print("Error")
print("введите число")
a=int(input())
f()
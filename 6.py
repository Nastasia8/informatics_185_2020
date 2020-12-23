def f():
    s = 0 
    print("Введите количество чисел")
    n = input()
    print ("введите числа")
    for i in range(1,n):
        a= input()
        if a%2!=0:
            s=s+a
    print(s)
f()
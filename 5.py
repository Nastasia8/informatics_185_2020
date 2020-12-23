print("введите k")
k=int(input())
n=1
def f(n,k):
    while n<k:
        S=(n+3**n)/(n+5**(2*n))
        n+=1;
    print(S)    
f(n,k)
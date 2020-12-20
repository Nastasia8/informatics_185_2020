P = float(input("sum "))
I = 15
n = int(input("quantity age "))
m = int(input("3 or 6 or 12 month "))
def procent(P,I,n,m):
    if (m==3 or m==6 or m==12):
        S = P*(1+(I/100)/(m/12))**(m/12*n)
        print("S = "+str(S))
    else:
        print("m - error")

procent(P,I,n,m)
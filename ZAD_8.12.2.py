l = int(input("len ") )
def mayatnik(l):
    T=0.2
    T = 2*math.pi*math.sqrt(l/9.8)
    print("period = "+str(T))
mayatnik(l)
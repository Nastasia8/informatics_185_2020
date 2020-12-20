def deskrim(x,y,z):
    D=y**2-4*x*z
    if D<0:
        print("korni none")
    if D==0:
        f=(y*-1)/(2*x)
        print("1 koren "+str(f))
    if D>0:
        f=((y*-1)+math.sqrt(D))/(2*x)
        f2=((y*-1)-math.sqrt(D))/(2*x)
        print("2 korna "+str(f)+" "+str(f2))
x,y,z = map(int, input("x y z ->").split())
deskrim(x,y,z)
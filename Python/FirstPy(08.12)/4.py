def formula(m, n, p):
    i = 15
    return (p*(((1+((i/100)/(m/12))))**(m/12*n)))


x = int(input("Enter x: "))
y = int(input("Enter y: "))
p = int(input("Enter P: "))
print(formula(x, y, p))

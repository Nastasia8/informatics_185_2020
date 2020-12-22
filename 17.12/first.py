my_file = open("Result.txt", "w")
import math 

def Result(x):
    a = float (2.0)
    return (math.log10(a+x)**2)/(a+x)**2
my_file.write("Задание A: \n")
x = float(1.2)    
while x <= 4.2:
    my_file.write('{:2.5f}'.format(Result(x)))
    my_file.write("\n")
    x += 0.6
my_file.write("Задание B: \n")

x1 = [1.16, 1.32, 1.47, 1.65, 1.93]
for i in x1:
    my_file.write('{:2.5f}'.format(Result(i)))
    my_file.write("\n")
my_file.close()    
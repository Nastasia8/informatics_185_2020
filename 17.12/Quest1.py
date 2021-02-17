from math import sin, cos, log

#21 exercise
#result = (sin(x)**3 + cos(x)**3) * ln(x)

def write(file):
    file_ = open(file, "w", encoding="utf8")
    file_.write(str(calc(0.65)))
    file_.close()

def calc(x):
    result = (sin(x)**3 + cos(x)**3) * log(x)
    return result

file = "text.txt"
write(file)
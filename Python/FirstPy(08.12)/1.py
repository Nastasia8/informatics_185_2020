import sys
from math import pi, sqrt
m = list("The tiger once ranged widely from the Eastern Anatolia Region in the west to the Amur River basin, and in the south from the foothills of the Himalayas to Bali in the Sunda islands.")
l, s = 0, 0
for x in m:
    if x == "a":
        l += 1
    if x == "s":
        s += 1
print(f"a: {l}")
print(f"s: {s}")

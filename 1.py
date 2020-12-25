import math
print("\n\n\nПервое задание\n")
text = "The tiger once ranged widely from the Eastern Anatolia Region in the west to the Amur River basin, and in the south from the foothills of the Himalayas to Bali in the Sunda islands."
print (text)
a = 0
s = 0
for x in text:
    if x == "a":
        a += 1
    if x == "s":
        s += 1
print (a, "символов 'a'")
print (s, "символов 's'")
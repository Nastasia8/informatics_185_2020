#python

text = "The tiger once ranged widely from the Eastern Anatolia Region in the west to the Amur River basin, and in the south from the foothills of the Himalayas to Bali in the Sunda islands."
countA = 0
countB = 0
for i in text:
    if i == "a" or i == "A":
        countA += 1
    elif i == "s" or i == "S":
        countB += 1
print("A:", countA)
print("B:", countB)
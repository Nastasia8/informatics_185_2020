string = "The tiger once ranged widely from the Eastern Anatolia Region in the west to the Amur River basin, and in the south from the foothills of the Himalayas to Bali in the Sunda islands."
a=0
s=0
for i in string:
	if i=='a' or i=='A':
		a+=1
	elif i=='s'or i=='S':
		s+=1

print("a: ", a, "s: ", s)
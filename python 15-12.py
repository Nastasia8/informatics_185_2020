spisok =[3, 8, 2, 1, 4, 7, 5, 6, 10, 9]
print("spisok-->" + str(spisok) )
spisok2=[]
#cycle
def cycle(spisok,spisok2):
  for a in spisok:
    if a%2==0:
      spisok2.append(a)
  print(spisok2)
cycle(spisok,spisok2)
#filter
def funk(x):
  if x%2==0:
    return 1
  else:
    return 0
b= filter(funk,spisok)
b=list(b)
print(b)
#
spisok3=list(filter(lambda y : y%2==0 , spisok))
print(spisok3)
#
spisok3.sort()
print(spisok3)
#2
animal2=[]
animal= ["tiger", "leopard", "elephant", "Fox", "wolf", "camel", "raccoon"]
print (animal)
for i in animal:
  b = i
  animal2.append(b[-1])
print(animal2)
animal3= list(map(lambda x: x[-1], animal))
print(animal3)
animal3.sort()
print(animal3)
#3
def menmest(animal):
  animal[0],animal[-1]=animal[-1],animal[0]
  print(animal)
menmest(animal)
#4
A = {"tiger", 0, "leopard", "elephant",  2, 7}
B  = {1, "camel", "elephant", 2, 9}
rezult=[]
def peresek(rezult):
  for i in A:
    for j in B:
      if i==j:
        rezult.append(i)
  return rezult
peresek(rezult)
print(rezult)
print(set.intersection(A,B))
#5
cortegrezult=[]
corteg = (1, 2, 2, 3, 1, 2, 4, 3, 2, 2)
def cortegingex(corteg,cortegrezult):
  for i in range(len(corteg)):
    if corteg[i]==2:
      cortegrezult.append(i)
  return cortegrezult
cortegingex(corteg,cortegrezult)
print(cortegrezult)
#6
corteg2= (1, 2, 3, 4, 5, 4, 6, 2, 4, 7, 9, 4, 5, 6, 5, 0, 4, 2)
simvol=int(input())
a=0
b=-1
def cortege(corteg2,simvol,a,b):
  for i in range(len(corteg2)):
    if corteg2[i]==simvol:
      a=i
      break
  if a==0:
    print("none simvol in cortage")
  for i in range(len(corteg2)):
    if corteg2[i]==simvol:
      b=i
  if a==b:
    print(corteg2[a:])
    #global corteg3 = tuple(corteg2[a:])
  if b!=-1:
    print(corteg2[a:b+1])
  #  global corteg3 = tuple(corteg2[a:b+1])
cortege(corteg2,simvol,a,b)
#7
dict1 = {"nomer-"+str(a): a for a in range(1,5)}
print(dict1)
def summdict(dict1):
  summ=0
  for i in dict1:
    summ+=dict1[i]
  print("+ " +str(summ))
summdict(dict1)
def ymnozeniedict(dict1):
  p=1
  for i in dict1:
    p*=dict1[i]
  print("* " +str(p))
ymnozeniedict(dict1)
#8
spisochek = ["Tom", 23, 170, 65, "Anna", 18, 160, 55, "Alex", 24, 175, 70, "Kim", 33, 180, 57]
dict3={}
def dictgeneretor(spisochek,dict3):
  for i in range(len(spisochek)):
    if isinstance (spisochek[i], str):
      dict3[spisochek[i]]=[spisochek[i+1],spisochek[i+2],spisochek[i+3]]
  return dict3
dictgeneretor(spisochek,dict3)
print(dict3)
print ("Седьмое задание\n")

dictionary = {"numner-1": 5, "numner-2":   4, "numner-3": 7, "numner-4": 3 }
print(dictionary)
def summdict(dictionary):
    summ=0
    for i in dictionary:
        summ+=dictionary[i]
    print("Summ= " +str(summ))
summdict(dictionary)
def prizved(dictionary):
    p=1
    for i in dictionary:
        p*=dictionary[i]
    print("Proizved= " +str(p)) 
prizved(dictionary)

print ("Восьмое задание\n")
spisok = ["Tom", 23, 170, 65, "Anna", 18, 160, 55, "Alex", 24, 175, 70, "Kim", 33, 180, 57]
dictionarry2={}
def dictgeneretor(spisok,dictionarry2):
    for i in range(len(spisok)):
         if isinstance (spisok[i], str):
             dictionarry2[spisok[i]]=[spisok[i+1],spisok[i+2],spisok[i+3]]
    return dictionarry2
dictgeneretor(spisok,dictionarry2)
print(dictionarry2)
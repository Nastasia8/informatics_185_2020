from random import randint
####2
# list1 = list(range(1, 21, 2))
# #1
# list2 = list(map(lambda x: x**2, list1))
# #2
# list3 = [x**2 for x in list1]

# for i in list1:
#     print(i)
# for i in list2:
#     print(i)
# for i in list3:
#     print(i)

####3
# def proizv(arr):
#     result = 1
#     for i in arr:
#         result *= i
#     return result

# list1 = []
# k = int(input())
# for i in range(1, k+1):
#     list1.append(2**i - 1)

# print(proizv(list1))

####4
# sum = 0
# list1 = [7, 1, 3, 4, 3, 9, 14, -5, -17, -13, -19, -18]
# for i in list1:
#     if i < 0:
#         sum += i
# print(sum)
# sum = 0
# while list1:
#     i = list1.pop()
#     if i < 0:
#         sum += i
# print(sum)

####5
# def list_update(arr):
#     y = int(input())
#     z = int(input())
#     list1 = list(map(lambda x: x**y**z, arr)) 
#     return list1

# list1 = list(range(1,21))
# print(list_update(list1))

####6
# text = "Hello hi how hello are and you I am fine thank you and you hello You Thank And"
# arr = text.split(' ')
# arr = map(lambda x: x.lower(), arr)
# arr = (list(set(arr)))
# print(arr)
# dictionary = {}
# for i in range(len(arr)):
#     dictionary[i] = arr[i]
# print(dictionary)

####7

# matrix = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
# print(matrix[0])
# print(matrix[1])
# print(matrix[2])
# n = len(matrix)-1
# for i in range(len(matrix)):
#     print(i, n)
#     matrix[n][i] *= 2
#     n -= 1
# print(matrix[0])
# print(matrix[1])
# print(matrix[2])

####8

# def rotate(arr, n):
# 	for i in range(n):
# 		arr[i] = list(reversed(arr[i]))
# 	return arr

# def matrix_out(arr):
# 	for i in range(len(arr)):
# 		print("\n",arr[i])


# n = int(input())
# m = int(input())
# matrix = [[0] * n]*m
# matrix = [[matrix[i][j] + randint(1,100) for i in range(n)] for j in range(m)]
# #1
# matrix_out(matrix)
# print("\n\n")
# matrix_out(rotate(matrix, n))
# #2
# print("\n\n")
# matrix_out(matrix)
# matrix = [list(reversed(matrix[i])) for i in range(n)]
# print("\n\n")
# matrix_out(matrix)

####9

# def inlist(list_, set_):
# 	for i in list_:
# 		if i in set_:
# 			return True
# 	return False


# set_ = {1,2,3}
# list_ = [3,4,5]
# print(inlist(list_, set_))

####10
# list_ = [6, 43, -2, 11, -555, -12, 3, 345, 0]
# dictionary = [{number: "positive" if number>0 else "negative" if number<0 else "zero" for number in list_}]
# print(dictionary)
####11

# class Human:
#     def __init__(self, name, second_name, born_in_place, born_in_year=2021):
#         self.name = name
#         self.second_name = second_name
#         self.born_in_place = born_in_place
#         self.born_in_year = born_in_year

#     def show(self):
#         print(f"my name is {self. name} {self.second_name}. I'm borned in {self.born_in_place} in {self.born_in_year}")

#     def get_age(self):
#         return 2021 - self.born_in_year

# class Teacher(Human):
#     def __init__(self, name, second_name, born_in_place, born_in_year, subject):
#         super().__init__(name, second_name, born_in_place, born_in_year)
#         self.subject = subject

#     def teach(self):
#         print("Something very useful")

#     def show(self):
#         print(f"my subject is {self.subject}")
#         super().show()

# class Student(Human):
#     def __init__(self, name, second_name, born_in_place, born_in_year=2021, course="1"):
#         Human.__init__(self, name, second_name, born_in_place, born_in_year)
#         self.course = course

#     def understand(self):
#         print("Got it")

#     def show(self):
#         print(f"my course is {self.course}")
#         super().show()

# if __name__ == "__main__":
#     JS = Human(name="Johny", second_name="Silverleg", born_in_place="Night Town", born_in_year=2002)
#     TS = Teacher("Tonny", "Silverhead", "Night Town", 2003, "math")
#     DS = Student("Dylan", "Silverarm", "Night Town", 2001, "2")
#     JS.show()
#     if JS.get_age() <= 18:
#         print("How")
#     TS.show()
#     DS.show()
#     if TS.teach():
#         TS.teach()
#         DS.understand()



    
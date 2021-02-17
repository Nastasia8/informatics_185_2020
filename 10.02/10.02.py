import random
from math import factorial, gcd, lcm


#https://docs.google.com/document/d/172lnABeMJQIGIVLLeFd4NiRmYtk3Ts5CuEYWsXdXiaQ/edit
####1
# x = int(input())
# print(factorial(x))


####2
# def f(n):
#     if n == 0:
#         return 0
#     elif n == 1:
#         return 3
#     elif n == 2:
#         return 5
#     elif n > 2:
#         result = f(n-1) + f(n-2) + f(n-3)
#         return result
# for i in range(16):
#     print(f(i))    
####3

# def triangleFor(symbol, isInverted=False):
#     if isInverted:
#         for i in range(5)[::-1]:
#             print(symbol*i)
#     else:
#         for i in range(1, 5):
#             print(symbol*i)
#     print("\n")

# def triangleWhile(symbol, isInverted=False):
#     if isInverted:
#         i = 4
#         while i != 0:
#             print(symbol*i)
#             i -= 1
#     else:
#         i = 1
#         while i < 5:
#             print(symbol*i)
#             i += 1
#     print("\n")


# triangleFor("0")
# triangleFor("#", True)

# triangleWhile("$")
# triangleWhile("%", True)

####4

# def greatestCommonDivisor(f_num, s_num):
#     return(gcd(f_num, s_num))

# print(greatestCommonDivisor(18, 48))
####5

# def leastCommonMultiple(f_num, s_num):
#     return(lcm(f_num, s_num))

# print(leastCommonMultiple(18, 48))

####6

#http://www.cleverstudents.ru/divisibility/nod_finding.html#3_or_more
##1
# def euclid_algorithm(f_num, s_num):
#     while f_num != s_num:
#         if f_num > s_num:
#             f_num -= s_num
#         elif f_num < s_num:
#             s_num -= f_num
#     return f_num

# def greatest_common_divisor(*nums):
#     d = euclid_algorithm(nums[0], nums[1])
#     for i in range(len(nums)):
#         d = euclid_algorithm(d, nums[i])
#     return d
# print(greatest_common_divisor(18, 48, 66))

##2
def simple_multiples(number):
    result = []
    s_factor = 2
    while s_factor * s_factor <= number:
        if number % s_factor == 0:
            result.append(s_factor)
            number //= s_factor
        else:
            s_factor += 1
    if number > 1:
        result.append(number)
    return result

def set_gcd(list_):
    return list_.sort(reverse=True)
    

def greatest_common_divisor(*nums):

    result = 0
    return result

list_ = (set(simple_multiples(256)) - set(simple_multiples(128)))
print(list_)
print(simple_multiples(15))
print(set_gcd(simple_multiples(15)))
# def print_nums(x):
#     for i in range(x):
#         print(i)
#         return
# print_nums(10)


#
# def sum(x):
#     res=0
#     for i in range(x):
#         res+=1
#         return res


#
# def func(x):
#     res=0
#     for i in range(x):
#         res+=i
#     return res
#
# print(func(4))


num = int(input())


def fab(n):
    if n <= 1:
        return n

    else:
        return fab(n - 1) + fab(n - 2)


for number in range(num):
    print(fab(number))

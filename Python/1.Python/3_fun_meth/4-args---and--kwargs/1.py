#
#
# def func(a,b):
#     return sum((a,b)) * 0.05    #tuples ki from men hai
#
#
# temp=func(40,60)
#
# print(temp)
#
#


def func(*args):
    return sum(args) * 0.05


store=func(40,60,100,1,34)

print(store)

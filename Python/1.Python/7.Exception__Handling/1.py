


# def add(n1,n2):
#     print(n1+n2)
#
#
#
# n1=10
# n2=input("Enter a number")###String ki wajha se error de ga
#
#
# add(n1,n2)


try:
    result=10+10

except:
    print("Hey it looks You are not adding Corectely")
else:
    print(result)


print("|-------------Error--Wala---------------------")
print("V")

try:
    result=10+'10'   #String Hai

except:
    print("Hey it looks You are not adding Corectely")
else:
    print("Add went well!!")
    print(result)

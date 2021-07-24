def check(num):
    for i in range(0,len(num)-1):
        if num[i] ==3 and num[i+1]==3:  #or if num[i:i+1]==[3,3]
            return True
    return False




a=check([1,3,3])
b=check([1,3,1,3])
c=check([3,1,3])

print(a)
print(b)
print(c)

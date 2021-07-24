def check(a,b):
    if a%2==0 and b%2==0:
        if a>b:                 #x=max(a,b)
            return b            #return x
        else:
            return a
    else:
        if a>b:
            return a
        else:
            return b


store=check(2,4)
s=check(2,5)

print(store)
print(s)

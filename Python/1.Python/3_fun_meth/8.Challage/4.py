


def check(a):
    x=[]
    for i in a:
        if i not in x:
            x.append(i)
    return x




a=[1,1,1,1,2,2,3,3,3,3,4,5]
print(check(a))

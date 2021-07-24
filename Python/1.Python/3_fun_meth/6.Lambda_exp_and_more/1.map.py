def sq(a):
    return a**2


num=[1,2,3,4,5,6]

print(list(map(sq,num)))




def st(b):
    if len(b)%2 == 0:
        return 'EVEN'
    else:
        return b[0]



names=['Krishant','Chauhan','Keven','Ben10','Gwen']


print(list(map(st,names)))

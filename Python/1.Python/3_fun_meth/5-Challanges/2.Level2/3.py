def check(a,b,c):
    if sum([a,b,c]) <=21:
        return sum([a,b,c])
    elif 11 in [a,b,c] and sum([a,b,c])<=31 :
        return sum([a,b,c])-10
    else:
        return 'Bust'



print(check(5,6,7))
print(check(9,9,9))
print(check(9,9,11))

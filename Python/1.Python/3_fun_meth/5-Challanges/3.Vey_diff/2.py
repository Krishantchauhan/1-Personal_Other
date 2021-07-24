def check(a):
    if a<2:
        return 0

    prim=[2]    #store prime Number
    x=3  #counter
    while x<=a:
        for i in prim:
            if x%i == 0:
                x+=2
                break
        else:
            prim.append(x)
            x+=2
    print(prim)
    print('\n')
    return len(prim)



print(check(100))




def fab():
    a=int(input("Enter a Number:"))

    b=0
    c=1

    for i  in range (2,a+1):
        su=b+c
        b=c
        c=su
        print(c)


# fab()



def fabb():
    a=int(input("Enter a Number:"))

    f=[0,1]

    for i in range (2,a+1):
        f.append(f[i-1]+f[i-2])
        print(f[i])

fabb()

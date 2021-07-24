a=int(input("Enter First Number:"))
b=int(input("Enter Second Number:"))


for i in range (a,b):
    flag=0
    for j in range (2,i):
        if i%j==0:
            flag=1
            break;
    if flag==0:
        print("NUmber is :- ",i)

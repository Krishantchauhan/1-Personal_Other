num=int(input("Enter a Number:"))
# num=7

for i in range (2,num):
    flag=0
    if num%i==0:
        flag=1;
        break;

if flag==0:
    print("Number is prime \n")
else:
    if num%2==0:
        print("Number is Even \n")
    else:
        print("Number is ODD \n")

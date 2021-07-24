a=int(input("Enter a Number:"))


count=0
for i in range(2,a):
    if a%i==0 :
        count+=1

if count==0:
        print("The Number is Prime")

else:
        print("Your Number is not Prime ")

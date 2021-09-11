a = [14,32,34,4,58,17]
even=0
odd=0

for i in a:
    if i %2==0:
        # print("Even no",i)
        even+=1

    else:
        # print("Odd",i)
        odd+=1
print("Even are ",even)
print("Odd are",odd)

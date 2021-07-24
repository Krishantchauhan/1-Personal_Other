
def cal(r1,r2,r3):
    print(r1)
    print(r2)
    print(r3)



##########user I/O
def ip():
    result='WRONG'
    accept_rng=range(0,10)
    within_range=False

    while choice.isdigit() == False  or within_range==False:
        result=int(input("Enter a Number:"))


        if result.isdigit()==False:
            print("Sorry that is not Digit")



        if result.isdigit()==True:
            if int(result) in accept_rng:
                within_range=True
            else:
                within_range =False

    return int(result)

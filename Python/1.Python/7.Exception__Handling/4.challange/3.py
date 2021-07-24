def ask():
    while True:
        try:
            a=int(input("Enter a Number:"))
            b=a*a
            print(f'The Square of a Number is {b}')
        except :
            print("There is an Error/Not a number May be a String/ character")
            continue
        else:
                print("Thanks for Entring")
                break



ask()

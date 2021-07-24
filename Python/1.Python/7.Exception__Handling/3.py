


def ask_for_int():
    try:
        a=int(input("Enter a Number:"))
        print(f'The entered Number is :{a}')
    except:
        print("That is not a number")
    finally:

        print("End of try/except/finally")



ask_for_int()

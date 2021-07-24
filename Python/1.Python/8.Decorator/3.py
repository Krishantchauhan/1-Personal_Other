
def ab(temp_fun):
    def abc(num):
        if num >= 80:
            print(":)")
        temp_fun(num)
    return abc


@ab
def check(num):
    if num >= 35:
        print("pass")
    else:
        print("Fail!!!!!Whooooo :)")




b=56
check(b)

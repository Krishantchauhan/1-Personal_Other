


def check(num,l,h):
    if num in range(l,h):
        print(f'{num} is in the range between {l} and {h}')
    else:
        print(f'{num} is not in the range between {l} and {h}')



check(9,2,7)


#####Another Method By BOOLEAn

def check(num,l,h):
    if num in range(l,h):
        return bool(1)
    else:
        return bool(0)



print(check(9,2,7))

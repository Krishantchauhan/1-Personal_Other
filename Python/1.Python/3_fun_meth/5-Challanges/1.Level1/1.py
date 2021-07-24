def cap(name):
    first=name[0]
    middle=name[1:3]
    fourth=name[3]
    rest=name[4:]

    return first.upper()+middle+fourth.upper()+rest


a=cap('macdonald')
print(a)

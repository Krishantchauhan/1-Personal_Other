def spy(a):
    code=[0,0,7,'x']
    for i in a:
        if i == code[0]:
            code.pop(0)
    return len(code) ==1



print(spy([1,2,4,0,0,7,5]))
print(spy([1,0,2,4,0,5,7]))
print(spy([1,7,2,0,4,5,0]))

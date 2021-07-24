x=50
def func():
    global x
    print(f'x is {x}')

    #Updated kr rha hoo
    #x ko
    x='suar'
    print(f'I just updated x to {x}')


print(x)
# print(func())
func()
#ab global variable change ho ja a ga local varibale se
print(x)

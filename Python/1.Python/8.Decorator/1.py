def dec(org):
    def a():
        print("Before")
        org()
        print("After")
    return a

@dec
def need():
    print("I am Decorators")
need()

def add(temp):
    def a():
        print("Before")
    def b():
        print("After")
    return a


@add
def need():
    print("abcd")
need()

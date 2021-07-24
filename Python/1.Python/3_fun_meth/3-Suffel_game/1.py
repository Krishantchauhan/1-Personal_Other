from random import shuffle

def shuffle_list(lst1):
    shuffle(lst1)
    return lst1

list1=[' ','O',' ']

b=shuffle_list(list1)


def guss():
    guess=''
    while guess not in ['0','1','2']:
        guess =input("Pick a number 0,1 or 2 : ")
    return int(guess)

a=guss()
print(a)


def check(lit,guess):
    if lit[guess] == 'O':
        print("Correct")
    else:
        print("Wrong")
        print(lit)

check(b,a)

#
# queue = []
# a=int(input("Enter a Limit"))
#
#
# for i in range (0,a):
#

que=[]

ch=int(input("Enter a choice:"))

# while ch<4:
#     switcher = {
#     1:enqueue(),
#     2:display(),
#     }

while True:
    if ch==1:
        Enqueue()
    elif ch==2:
        display()


def  Enqueue():
    a=int(input("Enter a Number:"))
    que.append(a)

def  display():
    print(que)

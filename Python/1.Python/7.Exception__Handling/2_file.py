print("------------------Error---Wala---------------------")

try:
    f=open('testfile','r')
    f.write("Wroting a txt line \n I m a Good Boy")
except TypeError:
    print("There was a type error!")
except OSError:
    print("There  was a OS  Error")
finally:
    print("I always Run")


print("--------------------normal----------------------")




try:
    f=open('testfile','w')
    f.write("Wroting a txt line \n I m a Good Boy")
except TypeError:
    print("There was a type error!")
except OSError:
    print("There  was a OS  Error")
finally:
    print("I always Run")

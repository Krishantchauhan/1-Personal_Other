try :
    x=5
    y=0
    z=x/y
    print(z)
except ZeroDivisionError:
    print("There is an  Zero Division Error")
finally:
    print("All Done")

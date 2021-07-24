class Dog():
    def __init__ (self,breed,spots,name):
        self.breed=breed
        self.spots=spots
        self.name=name

    def bark(self):
        print('Woof! my name is {} '.format(self.name))


# my_dog=Dog(breed='Lab',spots='No',name='mh')
my_dog=Dog('Lab','No','mh')

print("The dog breed is",my_dog.breed)
print("The dog has ",my_dog.spots," Spots")
print("the name is ",my_dog.name)



my_dog.bark()

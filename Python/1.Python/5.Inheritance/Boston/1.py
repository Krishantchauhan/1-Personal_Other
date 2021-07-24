class Circle():
    # Class object attribute
    pi=3.14

    def __init__(self,radius):
        self.radius=radius

        self.area=self.pi*self.radius*self.radius
        #Dono same hai
        # self.area=Circle.pi*self.radius*self.radius
        print(self.area)

    # Method
    def circum(self):
        return self.radius *2*self.pi


obj1=Circle(20)
# print(obj1.radius)
obj2=Circle(40)


a=obj1.circum()
b=obj2.circum()
print(a)
# print(f'Circle of Radius{obj2.radius} Area is {b}')

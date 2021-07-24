class Circle():
    # Class object attribute
    pi=3.14

    def __init__(self,radius):
        self.radius=radius

        self.area=self.pi*self.radius*self.radius
        #Dono same hai
        self.area=Circle.pi*self.radius*self.radius


    # Method
    def cir(self):
        return self.radius *2*self.pi



c=Circle(20)

print(c.radius)

print(c.cir())
print(c.area)

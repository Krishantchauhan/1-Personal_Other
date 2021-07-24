class Deque(object):

    def  __init__(self):
        self.items=[]

    def  isEmpty(self):
        return self.items == []

    def  addFront(self,item):
        self.items.append(item)

    def  addRear(self,item):
        self.items.insert(0,item)

    def  removeFront(self):
        return self.items.pop()

    def  removeRear(self):
        return self.items.pop(0)

    def  size(self):
        return len(self.items)

    def  display(self):
        return self.items

d=Deque()
d.addFront('Krishanr')
d.addRear('Chauhan')
print(d.display())
print(d.size())
d.addRear('Nikku')
d.addFront('Chauhan')
print(d.display())
print(d.size())
d.removeRear()
d.removeFront()
print(d.display())

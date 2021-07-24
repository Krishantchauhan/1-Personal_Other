class Queue(object):
    def __init__(self):
        self.items=[]
    # def  ads(self):
    #     self.items=[]
    #
    def isEmpty(self):
        return self.items == []

    def enqueue(self,item):
        # a=int(input("Enter a Number:"))
        self.items.insert(0,item)

    def dequeue(self):
        self.items.pop()

    def size(self):
        return len(self.items)

    def  display(self):
        return self.items



q=Queue()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)

print(q.display())

import random

print(random.randint(0,10))#pick any random value



my_list=list(range(0,20))

print(my_list)

print(random.choice(my_list))

random.shuffle(my_list)

print(my_list)

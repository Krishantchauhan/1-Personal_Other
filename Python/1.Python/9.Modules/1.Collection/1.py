from collections import Counter
my_list=[1,2,3,1,1,2,2,3,4,5,6,3,2,3,3,3,5,5,5,5,7,-1,-2,3]

c=Counter(my_list)
print(c)
print("\n")

print(c.most_common())  #most_common elements
print("\n")

print(c.most_common(2))# 2 most common elements
print("\n")

print("sum",sum(c.values()))# count the no. of element in my_list
print("\n")

print(list(c))  #Find unique elements
print("\n")

print(c.most_common()[::-1])  #least most_common elements
print("\n")

c+=Counter()
print(c)

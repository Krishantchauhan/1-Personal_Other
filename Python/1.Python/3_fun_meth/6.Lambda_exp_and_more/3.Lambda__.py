sq=lambda x:x**2


print(sq(5))



#use in Map Function
lst=[1,2,3,4,5,6]
print(list(map(lambda a:a**2,lst)))


#Use in Filter function

print(list(filter(lambda a:a%2==0,lst)))


### we can ALSO USE IN sTRINGS 

#Vector Basics
#Vectors are one of the key data structures in R 
#A vector is a 1 dimensional array that can hold character, numeric, or logical data elements.

#We can create a vector by using the combine function c(). 

#To use the function, we pass in the elements we want in the array, with each individual element separated by a comma.

num <- c(1,2,4,5,3,6)
print(num)
class(num)

ch<- c("a","b","c")
print(ch)
class(ch)




#######
#Vector Names
######

#simple Vector
temps <- c(72,71,68,73,69,75,71)
print(temps)

#We can use the names() function to assign names to each element in our vector

names(temps) <- c('Mon','Tue','Wed','Thu','Fri','Sat','Sun')
print(temps)

##########################################
######################OR#####################
##########################################

days <- c('Mon','Tue','Wed','Thu','Fri','Sat','Sun')
temps2 <- c(1,2,3,4,5,6,7)
names(temps2) <- days

print(temps2)



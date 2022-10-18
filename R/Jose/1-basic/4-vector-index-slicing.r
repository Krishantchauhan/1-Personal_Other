v1<-c(100,200,300)
v2<-c("a","b","c")

#index in r starts At 1

print(v1[1])


#slicing

print(v2[c(1,3)])

v<-c(1,2,3,4,5,6,7,8,9,10)
print(v[3:5])
print(v[6:8])


#indexing with Name

v<-c(1,2,3,4)
names(v)<-c("a","b","c","d")
print(v["b"])


##########################

print(v)

###value greater then 2
print(v[v>2])  #op 3 and 4
print(v>2)  #compare the whole vector

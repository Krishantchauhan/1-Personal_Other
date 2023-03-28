import pandas as pd
from pandas import Series

obj = Series([3,4,5,6,7,8])

print(obj)

#to print the values of Series
print(obj.values)

# To print the index of series
print(obj.index)


# index is the lable of series
marks = Series([70,77,30,89,50,90,69],index=[ 'maths','cs','eng','c','python','Java','ML'])

print(marks)

#MArks greater the 70
print(marks[marks>70])

print('maths' in marks)

# Converting to Dictionary
dict=marks.to_dict()
print(dict)
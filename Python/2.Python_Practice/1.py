import numpy as np
import pandas as pd
from numpy.random import randn

# mlist=[1,2,3,4]
#
# b=np.array(mlist)
# print(b)


# labels=['a','b','c','d']
# mlist=[1,2,3,4]
# arr=np.array([1,2,3,4])
# d={'a':1,'b':2,'c':3,'d':4}
#
# b=pd.Series(mlist)
# print(b)
np.random.seed(101)

df=pd.DataFrame(randn(5,4),['A','B','C','D','E'],['W','X','Y','Z'])

print(df)

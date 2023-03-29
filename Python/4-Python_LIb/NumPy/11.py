import numpy as np


# We can create an array by directly converting a list or list of lists:

print("\nList")
my_list = [1,2,3]
print(my_list)

#Converting an List to Array
print("\nArray")
arr1=np.array(my_list)
print(arr1)

print("\nList")
my_matrix = [[1,2,3],[4,5,6],[7,8,9]]
print(my_matrix)

print("\nMatrix ")
mat = np.array(my_matrix)
print(mat)

                        #Arange Function
# Return evenly spaced values within a given interval.

print("\n Arrange Function\n",np.arange(0,10))
print("\n Arrange Function with skip every step 2\n",np.arange(0,10,2))


                        # zeros and ones
# Generate arrays of zeros or ones
# They are in float values
print("\n Zeros Array\n",np.zeros(3))
print("\n Zero Matrix\n",np.zeros((5,5)))

print("\n Onces Array\n",np.ones(3))
print("\n Onces Matrix\n",np.ones((5,5)))


                        # linspace
# Return evenly spaced numbers over a specified interval.

print("\nLinspzce \n",np.linspace(0,10,3))

                        # eye
# Creates an identity matrix
print("\nIdentity Matrix \n",np.eye(3))

                    # Arrange
arr2=np.arange(25)
random_array = np.random.randint(0,50,10)
print("\nArray with Arange\n",arr2)
print("\nArray with Random\n",random_array)

                        # Reshape
# Returns an array containing the same data with a new shape.
# print("\nArray\n",arr)
print("\nArray Reshaped \n",arr2.reshape(5,5))



                        # max,min,argmax,argmin
# These are useful methods for finding max or min values. Or to find their index locations using argmin or argmax
print("\nArray Max \n",random_array.max())
print("\nArray MIN \n",random_array.min())
print("\nArray Arg_MAx \n",random_array.argmax())
print("\nArray Args_Min \n",random_array.argmin())








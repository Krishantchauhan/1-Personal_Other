import matplotlib.pyplot as plt
import numpy as np

x=np.arange(0,11)
y=x**2

print(x)
print(y)

plt.plot(x,y)
plt.xlabel("X Label")
plt.ylabel("Y Label")
plt.title("Square")
plt.show()
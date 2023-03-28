import numpy as np
                        # Random

# Numpy also has lots of ways to create random number arrays:
        # rand
# Create an array of the given shape and populate it with random samples from a uniform distribution over [0, 1).
print("\nRandom Array \n",np.random.rand(5))
print("\nRandom Matrix \n",np.random.rand(5,5))

        # randn

# Return a sample (or samples) from the "standard normal" distribution. Unlike rand which is uniform:
print("\nRand Array \n",np.random.randn(2))
print("\nRand Matrix \n",np.random.randn(3,3))

        # randint
# Return random integers from low (inclusive) to high (exclusive).
print("\nRandINt Array \n",np.random.randint(1,100))
print("\nRandINt Matrix \n",np.random.randint(1,100,10))

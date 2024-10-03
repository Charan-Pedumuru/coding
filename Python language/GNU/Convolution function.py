# Import NumPy
import numpy as np

# First input array
a = np.array([3, 7])
print("First vector: ", a)

# Second input array
v = np.array([1, 2, 5, 7])
print("Second vector: ", v)

print("Convolution using full mode:")
# Using convolve() function in "full" mode:
print(np.convolve(a, v))

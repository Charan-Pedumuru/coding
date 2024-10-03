import numpy as np

import math

u1 = np.array([2,-1,-1,-1])

u2 = np.array([-2,1,1,0])

u3 = np.array([1,-1,1,-1])

u4 = np.array([1,-2,-2,2])
 

v1 = u1

v2 = u2 - (np.dot(v1,u2) * v1) / np.sum(v1**2) #projection of u2 on v1

v3 = u3 - ((np.dot(v1,u3) * v1) / np.sum(v1*2)) - ((np.dot(v2,u3) * v2) / np.sum(v2*2))

v4 = u4 - (((np.dot(v1,u4) * v1) / np.sum(v1*2))) - (((np.dot(v2,u4) * v2) / np.sum(v22))) - (((np.dot(v3,u4) * v1) / np.sum(v3*2)))
#space spanned by v1 and v2

print(v1,v2,v3)

v1 = v1 / math.sqrt(np.sum(v1**2))

#v1 multiplied norm (sqrt))

v2 = v2 / math.sqrt(np.sum(v2**2))

v3 = v3 / math.sqrt(np.sum(v3**2))

v4 = v4 / math.sqrt(np.sum(v3**2))
#(v1,v2,v3,v4) orthonrmal basis

print("orthonormal basis",v1,v2,v3)

print(math.sqrt(np.sum(v1**2)))
print(math.sqrt(np.sum(v2**2)))
print(math.sqrt(np.sum(v3**2)))
print(math.sqrt(np.sum(v4**2)))
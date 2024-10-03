from matplotlib import pyplot as plt
import numpy as np

a=np.arange(-10,10,1)
b=np.size(a)
c=np.zeros(b)
shift=-1
n=0

for i in range(0,b):
    if a[i]==n:
        c[i]=i
    elif a[i]==n-shift:
        c[i]=2*i
    elif a[i]==n-2*shift:
        c[i]=3*i
    elif a[i]==n-3*shift:
        c[i]=4*i
    else:
        c[i]=0

plt.stem(a,c)
plt.show()
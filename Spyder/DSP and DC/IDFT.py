import numpy as np
import matplotlib.pyplot as mpl
N=int(input("Enter number of points in the sequence: "))
X=np.zeros(N,dtype=(complex))
x=np.zeros(N)
for i in range(0,N):
    X[i]=complex(input("Enter the DFT point: "))
for i in range(0,N):
    for j in range(0,N):
       x[i]=x[i]+(1/N)*(X[j]*(np.exp(2j*(np.pi)*j*i/N)))
print(np.round(x))
mpl.stem(x)
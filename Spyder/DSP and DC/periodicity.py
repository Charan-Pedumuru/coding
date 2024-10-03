import numpy as np
import matplotlib.pyplot as mpl
N=int(input("Enter number of points in the sequence: "))
x=eval(input("Enter the points: "))
X=np.zeros(N,dtype=(complex))
X1=np.zeros(N,dtype=(complex))
for i in range(0,N):
    for j in range(0,N):
        X[i]=X[i]+(X[j]*np.exp(-2j*(np.pi)*j*i/N))
for i in range(0,N):
    for j in range(0,N):
        X1[i]=X1[i]+(X[j]*np.exp(-2j*(np.pi)*j*(i+N)/N))
print(np.round(X))
print(np.round(X1))
mpl.subplot(3,3,1)
mpl.stem(X)
mpl.subplot(3,3,3)
mpl.stem(X1)
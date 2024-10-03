
import matplotlib.pyplot as plt
import numpy as np


def DFT(x):

    N = len(x)
    n = np.arange(N)
    k = n.reshape((N, 1))
    Wn = np.exp(-2j * np.pi * k * n / N)
    
    print("The W_N matrix is \n",np.round(Wn,3))
    
    
    X = np.dot(Wn, x)
    return X


x = [0,1,2,3]
X = DFT(x)

N = len(X)
n = np.arange(0,N)




Y = np.zeros(N,dtype=np.complex_)

for i in range(0,len(X)):
    for j in range(0,len(X)):
        if(i==j):
            Y[j]=np.round(X[i],3)
    
print(Y)

plt.figure(figsize = (12, 9))

plt.subplot(2,2,1)
plt.scatter(Y.real, Y.imag)
plt.xlabel('Real')
plt.ylabel('Imaginary')
plt.title('DFT Linear Transformation')
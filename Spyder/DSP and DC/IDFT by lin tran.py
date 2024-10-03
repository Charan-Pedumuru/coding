import numpy as np
import matplotlib.pyplot as mpl
N=int(input("Enter number of points in the sequence: "))
X=np.zeros(N,dtype=(complex))
x=np.zeros(N)
for i in range(0,N):
    X[i]=complex(input("Enter the DFT point: "))
Wn=np.zeros((N,N),dtype=(complex))
W=np.zeros(N,dtype=(complex))
for i in range(0,N):
    for j in range(0,N):
        Wn[i][j]=(1/N)*(np.conj((np.exp(2j*(np.pi)*j*i/N))))
        x[i]=x[i]+X[j]*Wn[i][j]
mpl.stem(x)

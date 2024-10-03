import numpy as np;
L=int(input("Enter length of sequence-1: "))
x=eval(input("Enter sequence-1: "))
M=int(input("Enter length of sequence-2: "))
h=eval(input("Enter sequence-2: "))
N=L+M-1
y=np.zeros(N)
for n in range(0,N):
    for k in range(0,N):
        if (n>=k and (n-k)<=M-1 and k<=L-1):
            y[n]=y[n]+x[k]*h[n-k]
print(y)

                                



import numpy as np
import matplotlib.pyplot as plt
l1=int(input("Enter number of points in the sequence-1: "))
x1=eval(input("Enter sequence-1: "))
n1=int(input("Enter shift value: "))
l2=int(input("Enter number of points in the sequence-2: "))
x2=eval(input("Enter sequence-2: "))
n2=int(input("Enter scaling value: "))
m=n1
N=l1+l2
x1n=np.zeros(N)
x2n=np.zeros(N)
y=np.zeros(N)
#shift
for i in range(0,l1):
    if (m>=0):
        x1n[m]=x1[i-n1]
        m=m+1
#scale
for i in range(0,l2):
    k=int(np.round(i/n2))
    if (i%n2==1):
        x2n[i]=0
    else:
        x2n[k]=x2[i]
for i in range(0,N):
    y[i]=x1n[i]+x2n[i]
plt.subplot(3,3,1)
plt.xlim(-6,10)
plt.stem(x1n)
plt.subplot(3,3,3)
plt.stem(x2n)
plt.subplot(3,3,5)
plt.xlim(-5,10)
plt.stem(y)


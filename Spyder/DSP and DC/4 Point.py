import numpy as np
import matplotlib.pyplot as plt
N=int(input("Enter the length of  sequence: "))
if N==8:
    x=eval(input("Enter the sequnece: "))
    x1=np.zeros(4)
    x2=np.zeros(4)
    l=0
    m=0
    for i in range(0,N):
        if i%2==0:
            x1[l]=x[i]
            l=l+1
        else:
            x2[m]=x[i]
            m=m+1
else:
    x1=eval(input("Enter sequence 1: "))
    x2=eval(input("Enter sequence 1: "))
xn=np.zeros(len(x1),dtype=(complex))
x0k=np.zeros(len(x1),dtype=(complex))
xk=np.zeros(len(x1),dtype=(complex))
x1k=np.zeros(len(x1),dtype=(complex))
x2k=np.zeros(len(x1),dtype=(complex))
x3k=np.zeros(len(x),dtype=(complex))
for i in range(len(x1)):
    xn[i]=complex(x1[i],x2[i])
N=len(x1)
print(xn)
for i in range(0,N):
    for k in range(0,N):
        xk[i]=xk[i]+(xn[k]*(np.exp((-2j*np.pi*i*k)/N)))
for i in range(0,N):
    xk[i]=np.round(xk[i])
for i in range(0,N):
    x0k[i]=complex(xk[i].real,-1*xk[i].imag)
print(x0k)
print(xk)
for i in range(0,N):
    l=(N-i)%N
    a1=xk[i].real
    a2=x0k[l].real
    b1=xk[i].imag
    b2=x0k[l].imag
    a=(a1+a2)/2
    b=(b1+b2)/2
    x1k[i]=complex(a,b)
    c=(a1-a2)/2j
    d=(b1-b2)/2j
    x2k[i]=complex(c,d)
print(x1k)
print(x2k)
if len(x)==8:
    x3k=x1k+x2k
print(x3k)

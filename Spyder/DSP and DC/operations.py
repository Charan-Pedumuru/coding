import numpy as np
import matplotlib.pyplot as plt

def impuls (n,A,shift):
    i= np.zeros(len(n))
    k=np.where(n==shift)
    i[k]=A
    return i

def impuls1 (n,A,shift):
    i= np.zeros(len(n))
    k=np.where(n==shift)
    i[k]=A
    return i

n=np.arange(-2,2,1)
m=np.arange(-1,2,1)

x=impuls(n, 1, -2) + impuls(n, 2, -1)+impuls(n, 1, 0)+impuls(n, 3, 1) 
x=x.tolist()

h=impuls1(m, 2, -1) + impuls1(m, 1, 0)+impuls1(m, 1, 1)
h=h.tolist()

htemp=np.zeros(len(x)+ len(h)-1)
htemp=htemp.tolist()
y=[]
l=len(x)+len(h)-1
for i in range(0,l):
    sum=0
    if(i<len(h)):
        htemp.insert(0,h[i])
        htemp.pop(l)
    else:
        htemp.insert(0,0)
        htemp.pop(l)
    for i in range(0,len(x)):
        sum=sum+ x[i]*htemp[i]
    y.append(sum)
plt.stem(y)
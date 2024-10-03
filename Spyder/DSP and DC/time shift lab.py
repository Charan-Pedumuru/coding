import numpy as np
import matplotlib.pyplot as mpl
N=int(input("Enter number of points in sequence: "))
xi=eval(input("Enter input sequence: "))
xn=np.zeros(2*N)
l=int(input("Enter shift value: "))
Xi=np.zeros(N,dtype=(complex))
xo=np.zeros(N)
xo1=np.zeros(N)
Xo=np.zeros(N,dtype=(complex))
Xo1=np.zeros(N,dtype=(complex))
for i in range(0,2*N):
    if (i<=N-1):
        xn[i]=xi[i]
    elif (i>=N and i<=2*N):
        xn[i]=xi[i-N]
for k in range(0,N):
    for n in range(0,N):
        Xi[k]=Xi[k]+xi[n]*(np.exp(-2j*np.pi*k*n/N))
for i in range(0,N):
    xo[i]=xn[N+i-l]
for k in range(0,N):
    for n in range(0,N):
        Xo[k]=Xo[k]+xo[n]*(np.exp(-2j*np.pi*k*n/N))
for k in range(0,N):
    Xo1[k]=Xi[k]*(np.exp(-2j*np.pi*k*l/N))
for k in range(0,N):
    for n in range(0,N):
        xo1[k]=xo1[k]+(1/N)*(Xo1[n]*np.exp(2j*np.pi*k*n/N))
if (np.round(xo.all())==np.round(xo1.all())):
    print("yes")
print(xi)
print(np.round(Xi))
print(xo)
print(np.round(Xo))
print(xo1)
print(np.round(Xo1))
mpl.subplot(331)
mpl.title("input")
mpl.stem(xi)
mpl.subplot(333)
mpl.title("shifted input")
mpl.stem(xo)

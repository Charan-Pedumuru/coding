import numpy as nmp
import matplotlib.pyplot as mpl
L=int(input("Enter number of points in the sequence: "))
x=nmp.zeros(L,dtype=(int))
X=nmp.zeros(L,dtype=(complex))
y=nmp.zeros(L,dtype=(complex))
z=nmp.zeros(L,dtype=(complex))
b=nmp.zeros(L,dtype=(complex))
m=nmp.zeros(L,dtype=(complex))
s=nmp.zeros(L,dtype=(complex))
mag=nmp.zeros(L)
ang=nmp.zeros(L)
for i in range(0,L):
    x[i]=int(input("Enter the point: "))
for i in range(0,L):
    y[i]=int(input("Enter the point: "))
for i in range(0,L):
    z[i]=x[i]+1j*y[i]
for i in range(0,L):   
    print(z[i])
for k in range(0,L):
    for n in range(0,L):
        X[k]=X[k]+(z[n]*(nmp.exp((-1j*2*nmp.pi*k*n)/L)))
for i in range(0,L):
    real=X[i].real
    img=X[i].imag
    mag[i]=nmp.sqrt(real**2+img**2)
    ang[i]=nmp.arctan(img/real)
print("\nDFT Points")
for i in range(0,L):
    print(nmp.round(X[i]))
for i in range(0,L):
    b[i]=nmp.conj(X[i])
    print(nmp.round(b[i]))
for i in range(0,L):
    l=(L-i)%L
    m[i]=(X[i]+b[l])/2
    s[i]=(X[i]-b[l])/2j
    print(nmp.round(m[i]))
    print(nmp.round(s[i]))
mpl.subplot(3,3,1)
mpl.title("magnitude")
mpl.xlabel("n")
mpl.ylabel("X(mag)")
mpl.stem(mag)
mpl.subplot(3,3,3)
mpl.title("phase")
mpl.xlabel("n")
mpl.ylabel("X(ang)")
mpl.stem(ang)


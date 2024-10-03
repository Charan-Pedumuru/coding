import numpy as nmp
import matplotlib.pyplot as mpl
L=int(input("Enter number of points in the sequence: "))
x=nmp.zeros(L,dtype=(int))
X=nmp.zeros(L,dtype=(complex))
mag=nmp.zeros(L)
ang=nmp.zeros(L)
for i in range(0,L):
    x[i]=input("Enter the point: ")
for k in range(0,L):
    for n in range(0,L):
        X[k]=X[k]+(x[n]*(nmp.exp((-1j*2*nmp.pi*k*n)/L)))
for i in range(0,L):
    real=X[i].real
    img=X[i].imag
    mag[i]=nmp.sqrt(real**2+img**2)
    ang[i]=nmp.arctan(img/real)
print("\nDFT Points")
for i in range(0,L):
    print(nmp.round(X[i]))
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


import numpy as nmp
import matplotlib.pyplot as mpl
L=int(input("Enter number of points in the sequence: "))
x=nmp.zeros(L,dtype=(int))
X=nmp.zeros(L,dtype=(complex))
W=nmp.zeros((L,L),dtype=(complex))
for i in range(0,L):
    x[i]=input("Enter the point: ")
for k in range(0,L):
    for n in range(0,L):
        W[k][n]=nmp.exp((-1j*2*nmp.pi*k*n)/L)
        X[k]=X[k]+(x[n]*W[k][n])
print("\nLinear transformation matrix")
print(nmp.round(W))
print("\nDFT Points")
for i in range(0,L):
    print(nmp.round(X[i]))
mpl.subplot(3,3,1)
mpl.title("Real part")
mpl.xlabel("n")
mpl.ylabel("X(real)")
mpl.stem(X.real)
mpl.subplot(3,3,3)
mpl.title("Imaginary part")
mpl.xlabel("n")
mpl.ylabel("X(imag)")
mpl.stem(X.imag)

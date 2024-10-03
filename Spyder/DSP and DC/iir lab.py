import numpy as np
import matplotlib.pyplot as mpl
w=np.arange(0,3.14,0.03)
T=1
Ap=0.707
As=0.2
Wp=1.57
Ws=2.355
#Finding E and L
E=np.sqrt((1-pow(Ap,2))/pow(Ap,2))
L=np.sqrt((1-pow(As,2))/pow(As,2))
#Converting to Analog specifications
Op=(2/T)*(np.tan(Wp/2))
Os=(2/T)*(np.tan(Ws/2))
#Finding order of N
N=np.round((np.log(L/E))/(np.log(Os/Op)))
print(np.round(E))
print(L)
print(np.round(Op))
print(Os)
print(N)
# As N=2 
# H(s)=1/(s^2+root2*s+1)
Oc=Op/pow(np.round(E),0.5)
print(np.round(Oc))
# Oc = 2 rad/s
# Substituting s=s/2 in H(s)
# H(s)=4/(s^2+2*root2*s+4)
# substituting s=2(z-1/z+1)
# H(z)=z^2+2z+1/z^2(2+root2)+2-root2
# substitute z=e^jw
# Frequency response, H(e^jw) = e^j2w+2e^jw+1/e^j2w(2+root2)+2-root2
He=np.abs(((np.exp(2j*w))+2*(np.exp(1j*w))+1)/((np.exp(2j*w))*(2+np.sqrt(2))+2-np.sqrt(2)))
mpl.title("Frequency response")
mpl.plot(w,He)



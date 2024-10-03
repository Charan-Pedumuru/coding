import numpy as np
import cmath as cm
import math
import matplotlib.pyplot as plt
del_p = 0.707
del_s = 0.2
wo_p = 0.75*np.pi
wo_s = 0.5*np.pi
T = 1
j = cm.sqrt(-1)
d_s = 1/(10**(0.1*(del_s)))
d_p = 1/(10**(0.1*(del_p)))
sq = np.sqrt((d_s - 1)/(d_p - 1))
x = wo_s/wo_p
No = (math.log(sq,10))/(math.log(x,10))
N = math.ceil(No)
print(N)
a = 1/(2*N)
wo_c = (wo_s)/((d_s-1**a))
print(wo_c)
w = np.linspace(0,np.pi,100)
L = np.exp((j*w))
s = (2/T)*((1-(1/L)/(1+(1/L))))
k = 1
b_z = 2*(np.sin((2*k-1)*np.pi/(2*N)))
H_s = ((wo_c)*N)/((s)+b_z*wo_c*s + (wo_c*2))
plt.plot(w,abs(H_s))
plt.show()

 
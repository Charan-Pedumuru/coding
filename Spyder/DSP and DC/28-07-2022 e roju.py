import numpy as np
import cmath as cm
import math
import matplotlib.pyplot as plt
AP = 0.707
AS= 0.2
t=1
wp = 0.75*np.pi
ws = 0.5*np.pi


# digital domain to analog domain
lamda= ((1/(AS)**2)-1)**0.5
e=((1/(AP)**2)-1)**0.5
print ("the value of e is ")
print (e)
print ("the value of lamda is")
print (lamda)
w1 = (2/t)*np.tan(wp/2)
w2 = (2/t)*np.tan(ws/2)
print ("the value of w1 is")
print(w1)
print ("the value of w2 is")
print(w2)
sq = lamda/e
x = w1/w2
No = (math.log(sq,10))/(math.log(x,10))
N = math.ceil(No)
print ("the value of n is")
print(N)


# finding the cut off frequency
wc= (w2/(e)**0.5)
cutoff= math.ceil(wc)
print ("the value of cut off frequency is")
print(cutoff)

#converting analog to digital
j=cm.sqrt(-1)
w = np.linspace(0,np.pi,100)
L = np.exp((j*w))
s = (2/t)*((1-(1/L)/(1+(1/L))))
k = 1
b = 2*(np.sin((2*k-1)*np.pi/(2*N)))
H = ((cutoff)*N)/((s)+b*cutoff*s + (cutoff*2))
plt.plot(w,abs(H))
plt.show()
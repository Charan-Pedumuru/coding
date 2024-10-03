import numpy as np
import matplotlib.pyplot as mpl
#Unit Ramp
#CTS
mpl.subplot(2,2,1)
t=np.arange(-5,5,1)
x=np.zeros(len(t))
for i in range(0,len(t)):
    if t[i]>=0:
        x[i]=i-5
    else:
        x[i]=0
mpl.title('ramp CTS')
mpl.plot(t,x)
#DTS
mpl.subplot(2,2,2)
n=np.arange(-5,5,1)
y=np.zeros(len(n))
for i in range(0,len(n)):
    if n[i]>=0:
        y[i]=i-5
    else:
        y[i]=0
mpl.title('ramp DTS')
mpl.stem(n,y)
import numpy as np
import matplotlib.pyplot as mpl
#Exponential
#CTS
mpl.subplot(2,2,1)
t=np.arange(-5,5,0.05)
mpl.title('Exponential CTS')
mpl.plot(t,np.exp(t))
#DTS
mpl.subplot(2,2,2)
n=np.arange(-5,5,1)
mpl.title('Exponential DTS')
mpl.stem(n,np.exp(n))


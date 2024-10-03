import numpy as np
import matplotlib.pyplot as mpl
#Sinusoidal
#CTS
mpl.subplot(2,2,1)
t=np.arange(-2*np.pi,2*np.pi,0.05)
mpl.title('Sinusoidal CTS')
mpl.plot(t,np.sin(t))
#DTS
mpl.subplot(2,2,2)
n=np.arange(-2*np.pi,2*np.pi,1)
mpl.title('Sinusoidal DTS')
mpl.stem(n,np.sin(n))

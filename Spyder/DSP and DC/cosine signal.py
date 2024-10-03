import numpy as np
import matplotlib.pyplot as mpl
#Cosine
#CTS
mpl.subplot(2,2,1)
t=np.arange(-2*np.pi,2*np.pi,0.05)
mpl.title('Cosine CTS')
mpl.plot(t,np.cos(t))
#DTS
mpl.subplot(2,2,2)
n=np.arange(-2*np.pi,2*np.pi,1)
mpl.title('Cosine DTS')
mpl.stem(n,np.cos(n))

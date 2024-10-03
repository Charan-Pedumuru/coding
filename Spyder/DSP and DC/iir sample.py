import numpy as np
import matplotlib.pyplot as mpl
T=input("Enter Time period: ")
Ap=input("Enter pass band cutoff value: ")
As=input("Enter stop band cutoff value: ")
E=np.sqrt((1-Ap**2)/Ap**2)
L=np.sqrt((1-As**2)/As**2)
Wp=input("Enter pass band frequency: ")
Ws=input("Enter stop band frequency: ")
#Converting to Analog Frequency
#Bilinear Transformation
Op=(2/T)*(np.tan(Wp/2))
Os=(2/T)*(np.tan(Ws/2))
#Finding N
N=np.round(np.log(L/E)/np.log(Os/Op))
#Oc
Oc=Op/(E)**(1/N)
#Tranfer function




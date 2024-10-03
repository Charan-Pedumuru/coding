import numpy as np
import matplotlib.pyplot as plt

h=np.zeros(11)
w=np.pi/4

for i in range(0,11,1):
    if i!=5:
       h[i] = ((np.sin(np.pi*(i-5))-np.sin(w*(i-5)))/(np.pi*(i-5)))
        
    elif i==5:
        h[i] = (1-((np.pi/4)/np.pi)) 

print("Rectangular h[n]:",h)        
wo = np.arange(0,np.pi,.1)
H = np.zeros(len(wo),dtype=complex)

#rectangular    
for i in range(len(wo)):
    sum = complex(0,0)
    for j in range(11):
        sum = sum + (h[j]*complex(np.cos(wo[i]*j),-1*np.sin(wo[i]*j)))
    H[i] = (sum)

plt.subplot(6,2,1)
plt.title("Rectangular Window")
plt.plot(np.abs(H))
plt.subplot(6,2,2)
plt.title("Phase response")
plt.plot(np.angle(H))

#hanning
for i in range(0,11,1):
    if i!=5:
       h[i] = ((np.sin(np.pi*(i-5))-np.sin(w*(i-5)))/(np.pi*(i-5)))*(.5-(.5*np.cos((2*np.pi*i)/10)))
        
    elif i==5:
        h[i] = (1-((np.pi/4)/np.pi))*(.5-(.5*np.cos((2*np.pi*i)/10))) 

print("\nHanning h[n]:",h)        

for i in range(len(wo)):
    sum = complex(0,0)
    for j in range(11):
        sum = sum + (h[j]*complex(np.cos(wo[i]*j),-1*np.sin(wo[i]*j)))
    H[i] = (sum)

plt.subplot(6,2,5)
plt.title("Hanning Window")
plt.plot(np.abs(H))
plt.subplot(6,2,6)
plt.title("Phase response")
plt.plot(np.angle(H))

#Hamming
for i in range(0,11,1):
    if i!=5:
       h[i] = ((np.sin(np.pi*(i-5))-np.sin(w*(i-5)))/(np.pi*(i-5)))*(.54-(.46*np.cos((2*np.pi*i)/10)))
        
    elif i==5:
        h[i] = (1-((np.pi/4)/np.pi))*(.54-(.46*np.cos((2*np.pi*i)/10))) 

print("\nHamming h[n]:",h)    

plt.subplot(6,2,9)
plt.title("Hamming Window")
plt.plot(np.abs(H))
plt.subplot(6,2,10)
plt.title("Phase response")
plt.plot(np.angle(H))    
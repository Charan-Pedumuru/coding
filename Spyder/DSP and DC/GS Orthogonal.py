import numpy as np
import matplotlib.pyplot as plt
import scipy.integrate as integral

S1=[2,1,-1,1]
S2=[-2,1,1,0]
S3=[1,-1,1,-1]
S4=[1,2,-2,2]
#First Basis function
p1=[0,0,0,0]
d1=S1
f11=lambda x: (S1[0])**2
f12=lambda x: (S1[1])**2
E1a=integral.quad(f11,0,1)
E1b=integral.quad(f12,1,4)
E1=np.sqrt(E1a[0]+E1b[0])
p1[0]+=d1[0]/E1
for i in range(1,len(S1)):
    p1[i]+=d1[i]/E1
print("First Basis function is ", end=" ")
print(np.round_(p1,3))

#Second Basis function
#d2=S2-S21p1
d2=[0,0,0,0]
p2=[0,0,0,0]
f21=lambda x: (S2[0]*p1[0])
f22=lambda x: (S2[1]*p1[1])
S21a=integral.quad(f21,0,1)
S21b=integral.quad(f22,1,3)
S21=S21a[0]+S21b[0]
for i in range(0,len(S2)):
    d2[i]+=S2[i]-S21*(np.round_(p1[i],3))
f23=lambda x: (d2[0])**2
f24=lambda x: (d2[1])**2
E2a=integral.quad(f23,0,1)
E2b=integral.quad(f24,1,3)
E2=np.sqrt(E2a[0]+E2b[0])
p2[0]+=d2[0]/E2
for i in range(1,len(S1)):
    p2[i]+=d2[i]/E2
print("Second Basis function is ", end=" ")
print(np.round_(p2,3))

#Third Basis function
#d3=S3-S31p1-S32p2
d3=[0,0,0,0]
p3=[0,0,0,0]
f31=lambda x: (S3[0]*p1[0])
f32=lambda x: (S3[1]*p1[1])
S31a=integral.quad(f31,0,1)
S31b=integral.quad(f32,1,2)
S31=S31a[0]+S31b[0]
f33=lambda x: (S3[0]*p2[0])
f34=lambda x: (S3[3]*p2[3])
S32a=integral.quad(f33,0,1)
S32b=integral.quad(f34,3,4)
S32=S32a[0]+S32b[0]
for i in range(0,len(S3)):
    d3[i]+=S3[i]-S31*(np.round_(p1[i],3))-S32*(np.round_(p2[i],3))
f35=lambda x: (d3[0])**2
f36=lambda x: (d3[1])**2
f37=lambda x: (d3[2])**2
f38=lambda x: (d3[3])**2
E3a=integral.quad(f35,0,1)
E3b=integral.quad(f36,1,2)
E3c=integral.quad(f37,2,3)
E3d=integral.quad(f38,3,4)
E3=np.sqrt(E3a[0]+E3b[0]+E3c[0]+E3d[0])
for i in range(0,len(S3)):
    p3[i]+=d3[i]/E3
print("Third Basis function is ", end=" ")
print(np.round_(p3,3))

#Fourth Basis Function
#d4=S4-S41p1-S42p2-S43p3
d4=[0,0,0,0]
p4=[0,0,0,0]
f41=lambda x: (S4[0]*p1[0])
f42=lambda x: (S4[1]*p1[1])
f43=lambda x: (S4[3]*p1[3])
S41a=integral.quad(f41,0,1)
S41b=integral.quad(f42,1,3)
S41c=integral.quad(f43,3,4)  
S41=S41a[0]+S41b[0]+S41c[0]
f44=lambda x: (S4[0]*p2[0])
f45=lambda x: (S4[1]*p2[1])
f46=lambda x: (S4[3]*p2[3])
S42a=integral.quad(f44,0,1)
S42b=integral.quad(f45,1,3)
S42c=integral.quad(f46,3,4) 
S42=S42a[0]+S42b[0]+S42c[0]
f47=lambda x: (S4[0]*p2[0])
f48=lambda x: (S4[1]*p2[1])
f49=lambda x: (S4[2]*p2[2])
f50=lambda x: (S4[3]*p2[3])
S43a=integral.quad(f47,0,1)
S43b=integral.quad(f48,1,2)
S43c=integral.quad(f49,2,3)
S43d=integral.quad(f50,3,4)
S43=S43a[0]+S43b[0]+S43c[0]+S43d[0]
for i in range(0,len(S4)):
    d4[i]+=S4[i]-S41*(np.round_(p1[i],3))-S42*(np.round_(p2[i],3))-S43*(np.round_(p3[i],3))
f51=lambda x: (d4[0])**2
f52=lambda x: (d4[1])**2
f53=lambda x: (d4[2])**2
f54=lambda x: (d4[3])**2
E4a=integral.quad(f51,0,1)
E4b=integral.quad(f52,1,2)
E4c=integral.quad(f53,2,3)
E4d=integral.quad(f54,3,4)
E4=np.sqrt(E4a[0]+E4b[0]+E4c[0]+E4d[0])
for i in range(0,len(S1)):
    p4[i]+=d4[i]/E4
print("Fourth Basis function is ", end=" ")
print(np.round_(p4,3))

#Reconstruction
S1a=[0,0,0,0]
S2a=[0,0,0,0]
S3a=[0,0,0,0]
S4a=[0,0,0,0]
for i in range(0,len(S1)):
    S1a[i]+= d1[i]
    S2a[i]+= d2[i]+S21*p1[i]
    S3a[i]+= d3[i]+S31*p1[i]+S32*p2[i]
    S4a[i]+= d4[i]+S41*p1[i]+S42*p2[i]+S43*p3[i] 
print("1st Signal is ", end=" ")
print(np.round_(S1a))
print("2nd Signal is ", end=" ")
print(np.round_(S2a))
print("3rd Signal is ", end=" ")
print(np.round_(S3a))
print("4th Signal is ", end=" ")
print(np.round_(S4a))

#Plotting
plt.subplot(3,3,1)
plt.xlabel("time")
plt.ylabel("S1(t)")
plt.plot(S1)
plt.xticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.yticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.subplot(3,3,2)
plt.xlabel("time")
plt.ylabel("S2(t)")
plt.plot(S2)
plt.xticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.yticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.subplot(3,3,3)
plt.xlabel("time")
plt.ylabel("S3(t)")
plt.plot(S3)
plt.xticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.yticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.subplot(3,3,4)
plt.xlabel("time")
plt.ylabel("S4(t)")
plt.plot(S4)
plt.xticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.yticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.subplot(3,3,5)
plt.xlabel("time")
plt.ylabel("p1(t)")
plt.plot(p1)
plt.xticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.yticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.subplot(3,3,6)
plt.xlabel("time")
plt.ylabel("p2(t)")
plt.plot(p2)
plt.xticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.yticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.subplot(3,3,7)
plt.xlabel("time")
plt.ylabel("p3(t)")
plt.plot(p3)
plt.xticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.yticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.subplot(3,3,8)
plt.xlabel("time")
plt.ylabel("p4(t)")
plt.plot(p4)
plt.xticks(np.arange(min(S1)+1, max(S1)+2, 1))
plt.yticks(np.arange(min(S1)+1, max(S1)+2, 1))







    

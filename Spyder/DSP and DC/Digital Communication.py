import numpy as np
import matplotlib.pyplot as plt
import scipy.integrate as integrate

s1=[2,-1,-1,-1]
s2=[-2,1,1,0]
s3=[1,-1,1,-1]
s4=[1,-2,-2,2]
p1=p2=p3=p4=[0,0,0,0]

for i in range(1,len(s1)+1):
    if i==1:
        f=lambda x:(s1[0]**2)
        q1=integrate.quad(f,0,1)
        f=lambda x:(s1[1]**2)
        q2=integrate.quad(f,1,2)
        f=lambda x:(s1[2]**2)
        q3=integrate.quad(f,2,3)
        f=lambda x:(s1[3]**2)
        q4=integrate.quad(f,3,4)
        q=q1[0]+q2[0]+q3[0]+q4[0]
        E=np.sqrt(q)
        for j in range(0,len(s1)):
            p1[j]+=(s1[j]/E)
        print(p1)
    elif i==2:
        f=lambda x:(s2[0]**2)
        q1=integrate.quad(f,0,1)
        f=lambda x:(s2[1]**2)
        q2=integrate.quad(f,1,2)
        f=lambda x:(s2[2]**2)
        q3=integrate.quad(f,2,3)
        f=lambda x:(s2[3]**2)
        q4=integrate.quad(f,3,4)
        q=q1[0]+q2[0]+q3[0]+q4[0]
        E=np.sqrt(q)
        s21=[0,0,0,0]
        for j in range(0,len(s2)):
            s21[j]+=(s2[j]*p1[j])
        f=lambda x:(s21[0])
        q1=integrate.quad(f,0,1)
        f=lambda x:(s21[1])
        q2=integrate.quad(f,1,2)
        f=lambda x:(s21[2])
        q3=integrate.quad(f,2,3)
        f=lambda x:(s21[3])
        q4=integrate.quad(f,3,4)
        q=q1[0]+q2[0]+q3[0]+q4[0]
        S21=[0,0,0,0]
        d2=[0,0,0,0]
        for j in range(0,len(s2)):
            S21[j]+=(p1[j]*q)
        for j in range(0,len(s2)):
            d2[j]=(s2[j]-S21[j])
        for j in range(0,len(s2)):
            p2[j]+=(d2[j]/E)
        print(p2)
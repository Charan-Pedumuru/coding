import numpy as np

x=eval(input("Enter input sequence: "))
h=eval(input("Enter impulse response: "))
L=int(input("Enter block length: "))
M=len(h)
F=M
N=L+M-1
T=len(x)
x1=np.zeros(5)
x2=np.zeros(5)
x3=np.zeros(5)
x4=np.zeros(5) 
for i in range(0,L):
    x1[F-1]=x[i]
    F=F+1
for i in range(0,N):
    x2[i]=x[i+1]
for i in range(0,N):
    x3[i]=x[i+4]
for i in range(0,2):
    x4[i]=x[i+7]
print(x1)
print(x2)
print(x3)
print(x4)
x1n=np.zeros(10)
x2n=np.zeros(10)
x3n=np.zeros(10)
x4n=np.zeros(10)
#convolve
for i in range(0,2*N):
    if (i<=N-1):
        x1n[i]=x1[i]
        x2n[i]=x2[i]
        x3n[i]=x3[i]
        x4n[i]=x4[i]
    elif (i>N-1 and i<=2*N-1):
        x1n[i]=x1[i-N]
        x2n[i]=x2[i-N]
        x3n[i]=x3[i-N]
        x4n[i]=x4[i-N]
hn=np.zeros(5)
if (len(h)<=N):
    for i in range(0,M):
        hn[i]=h[i]
    for i in range(M,N):
        hn[i]=0
y1=np.zeros(5)
y2=np.zeros(5)
y3=np.zeros(5)
y4=np.zeros(5)
for n in range(0,N):
    for k in range(0,N):
        y1[n]=y1[n]+hn[k]*x1n[N+n-k]
        y2[n]=y2[n]+hn[k]*x2n[N+n-k]
        y3[n]=y3[n]+hn[k]*x3n[N+n-k]
        y4[n]=y4[n]+hn[k]*x4n[N+n-k]
print(y1)
print(y2)
print(y3)
print(y4)
yn=np.zeros(11)
for i in range(0,11):
    if (i<=2):
        yn[i]=y1[i+2]
    elif (i>=3 and i<=5):
        yn[i]=y2[i-1]
    elif (i>=6 and i<=8):
        yn[i]=y3[i-4]
    elif (i>=9 and i<=10):
        yn[i]=y4[i-7]
print(yn)
        




    
            

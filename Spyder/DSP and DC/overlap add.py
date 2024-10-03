import numpy as np

x=eval(input("Enter input sequence: "))
h=eval(input("Enter impulse response: "))
L=int(input("Enter block length: "))
M=len(h)
N=L+M-1
T=len(x)
x1=np.zeros(5)
x2=np.zeros(5)
x3=np.zeros(5)
for i in range(0,L):
    x1[i]=x[i]
for i in range(0,L):
    x2[i]=x[i+3]
for i in range(0,L):
    x3[i]=x[i+6]
print(x1)
print(x2)
print(x3)
x1n=np.zeros(10)
x2n=np.zeros(10)
x3n=np.zeros(10)
for i in range(0,2*N):
    if (i<=N-1):
        x1n[i]=x1[i]
        x2n[i]=x2[i]
        x3n[i]=x3[i]
    elif (i>N-1 and i<=2*N-1):
        x1n[i]=x1[i-N]
        x2n[i]=x2[i-N]
        x3n[i]=x3[i-N]
hn=np.zeros(5)
if (len(h)<=N):
    for i in range(0,M):
        hn[i]=h[i]
    for i in range(M,N):
        hn[i]=0
y1=np.zeros(5)
y2=np.zeros(5)
y3=np.zeros(5)
yn=np.zeros(11)
for n in range(0,N):
    for k in range(0,N):
        y1[n]=y1[n]+hn[k]*x1n[N+n-k]
        y2[n]=y2[n]+hn[k]*x2n[N+n-k]
        y3[n]=y3[n]+hn[k]*x3n[N+n-k]
print(y1)
print(y2)
print(y3)
for i in range(0,11):
    if (i<=2):
        yn[i]=y1[i]
    elif (i>=3 and i<=4):
        yn[i]=y1[i]+y2[i-3]
    elif (i>4 and i<=5):
        yn[i]=y2[i-3]
    elif (i>=6 and i<=7):
        yn[i]=y2[i-3]+y3[i-6]
    elif (i>=8 and i<=10):
        yn[i]=y3[i-6]
print(yn)


n=int(input())
a=list(map(int,input().strip().split()))[:n]
print(a)

temp=a[0]
a[0]=a[-1]
a[-1]=temp
print(a)
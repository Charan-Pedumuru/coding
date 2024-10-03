n=int(input())
l=list(map(int,input().strip().split()))
s,e=map(int,input().split())

print(l)

for i in range(n):
    if s==i:
        temp=l[i]
        l[i]=e
        e=temp
print('The resulted list is ',l)
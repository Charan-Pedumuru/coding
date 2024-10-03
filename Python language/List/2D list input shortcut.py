def sumArray(a,n):
    sum=0
    for i in range(n):
        for j in range(n):
            sum+=a[i][j]
    print(sum)
 


n=int(input())
a=[]
for i in range(n):
    a.append(list(map(int,input().strip().split()))[:n])
sumArray(a,n)
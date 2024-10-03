def swap(list,p1,p2):
    temp,temp1=list[p1],list[p2]
    list[p2],list[p1]=temp,temp1
    return list

n=int(input())
a=list(map(int,input().strip().split()))[:n]
x,y=input().split()
print(swap(list,a[int(x)],a[int(y)]))
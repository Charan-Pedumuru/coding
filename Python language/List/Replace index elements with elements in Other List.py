n=int(input())
l=list(map(int,input().strip().split()))
a=['Do','Something','Great']
#l=[0,1,1,0,2,0,0,2,2,1,2,0]

result=list(map(lambda index: l[index],a))
print('The list after replacing elements is ',result)
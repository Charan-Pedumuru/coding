n=int(input())
a=list(map(int,input().strip().split()))
r=[]
r1,r2=map(int,input().split())
c=0
for element in a:
    if element<=r2 and element>=r1:
        c+=1
        r.append(element)
print('The elements in the range '+str(r1)+' and '+str(r2)+'are ',r)
print('The number of elements in the range are ',c)
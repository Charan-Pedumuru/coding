n=int(input())
l=list(map(int,input().strip().split()))
r=[]
f=int(input())

for i in l:
    freq=l.count(i)
    if freq>f and i not in r:
        r.append(i)

print("The elements with frequency "+str(f)+" are "+str(r))
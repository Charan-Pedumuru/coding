n=int(input())
a=list(map(int,input().strip().split()))
r=[]
for item in a:
    if item not in r:
        r.append(item)

r.remove(max(r))
r=sorted(r,reverse=True)
print(r[0])
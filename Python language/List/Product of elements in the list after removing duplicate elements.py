n=int(input())
l=list(map(int,input().strip().split()))
l=list(dict.fromkeys(l))
p=1
for item in l:
    p*=item
print(p)

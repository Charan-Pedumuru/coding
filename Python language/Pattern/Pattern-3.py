# Decreasing left sided triangle

n=int(input())
for i in range(n):
    for j in range(i,n):
        print('* ',end='')
    print()
print()
i=1
while i<=n:
    j=i
    while j<=n:
        print('* ',end='')
        j+=1
    print()
    i+=1
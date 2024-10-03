from re import X
# Left sided triangle

n=int(input())
for i in range(n):
    for j in range(i+1):
        print('* ',end='')
    print()
print()
i=1
while i<=n:
    j=1
    while j<=i:
        print('* ',end='')
        j+=1
    print()
    i+=1
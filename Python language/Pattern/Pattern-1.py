n=4
for i in range(n):
    for j in range(n):
        print('* ',end='')
    print()
print()
i=1
while i<=n:
    j=1
    while j<=n:
        print('* ',end='')
        j+=1
    print()
    i+=1


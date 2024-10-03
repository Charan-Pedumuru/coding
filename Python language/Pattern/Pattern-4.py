n=int(input())
for i in range(n):
    for j in range(i,n):
        print('',end='')
    for j in range(i+1):
        print('* ',end='')
    print()

i=1
while i<=n:
    j=i
    while j<=n:
        print('* ',end='')
        j+=1
    print()
    i+=1
    k=0
    while k<=i:
        print('* ',end='')
        k+=1
    print()
    i+=1
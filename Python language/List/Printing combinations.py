def combination(list,a):
    for i in range(a):
        for j in range(a):
            for k in range(a):
                if i!=j and j!=k and k!=i:
                    print(list[i],list[j],list[k])
n=int(input())                           
          # Only works for 3 order combinations 
a=list(map(int,input().strip().split()))
combination(a,n)
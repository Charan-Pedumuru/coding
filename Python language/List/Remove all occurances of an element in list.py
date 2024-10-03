def remove_occurance(l,item):
    r=list(filter((item).__ne__,l))     # removes the occurance of an element
    return r

n=int(input())
a=list(map(int,input().strip().split()))
print(a)
i=int(input())

print('The final list is ',remove_occurance(a,i))
def sort(list,size):
    for i in range(n):
        for j in range(n-1):
            if list[j]>list[i]:
                a=list[j]
                list[j]=list[i]
                list[i]=a
    return list

n=int(input("Enter the size of the list : "))
list=[]

for i in range(n):
    element=int(input('Enter the element at the index '+str(i)+': '))
    list.append(element)
print(list)
print('The sorted array is ',sort(list,n))


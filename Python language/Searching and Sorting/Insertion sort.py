def insertion_sort(list,size):
    for i in range(size):
        j=i-1
        next=list[i]

        while list[j]>next and j>=0:
            list[j+1]=list[j]
            j-=1
            list[j+1]=next
    return list


n=int(input("Enter the size of the list : "))
list=[]

for i in range(n):
    element=int(input('Enter the element at the index '+str(i)+': '))
    list.append(element)
print(list)
print('The sorted list is ',insertion_sort(list,n))

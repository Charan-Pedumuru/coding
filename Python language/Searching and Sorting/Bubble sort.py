def bubble_sort(list):
    for i in range(len(list)):
        for j in range(len(list)-1):
            if list[j]>list[j+1]:
                a=list[j]
                list[j]=list[j+1]
                list[j+1]=a
                
    return list

n=int(input("Enter the size of the list : "))
list=[]

for i in range(n):
    element=int(input('Enter the element at the index '+str(i)+': '))
    list.append(element)
print(list)
print('The sorted list is ',bubble_sort(list))
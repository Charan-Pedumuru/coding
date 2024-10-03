n=int(input("Enter the size of the list : "))
list=[]
i=0
while(i<n):
    element=int(input('Enter the element at the index '+str(i)+' : '))
    list.append(element)
    i+=1

print(list)
n=int(input("Enter the size of list : "))
list=[]

for i in range(0,n):
    element=int(input("Enter the element at the index "+str(i)+":"))
    list.append(element)

print(list)
    
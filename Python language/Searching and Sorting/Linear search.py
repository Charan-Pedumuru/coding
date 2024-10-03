def linear_search(list, target):
    for i in range(0, len(list)):
        if list[i]==target:
            return i
    return None

def verify(index):
    if index is not None:
        print("The element is found at the index : ",index)
    else:
        print("The element is not found.")

n=int(input("Enter the size of the list : "))
list=[]

for i in range(0,n):
    element=int(input("Enter the element at the index "+str(i)+" : "))
    list.append(element)

print(list)
s=int(input("Enter the element to search : "))
verify(linear_search(list,s))
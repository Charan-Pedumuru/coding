def binary_search(list,target):
    l=0
    h=len(list)-1
    while l<=h:
        m=(l+h)//2
        if list[m]<target :
            l=m+1
        elif list[m]==target:
            return m
        else:
            h=m-1
    return None

def verify(index):
    if index is None:
        print("The element is not found")
    else:
        print("The element is found at the index : ",index)

n=int(input("Enter the size of the list : "))
list=[]

for i in range(0,n):
    element=int(input("Enter an element at the index "+str(i)+" : "))
    list.append(element)
print(list)
s=int(input("Enter the element to search : "))
verify(binary_search(list,s))
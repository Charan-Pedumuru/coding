def recursive_binary_search(list, target):
    if len(list)==0:
        return False
    else:
        m=len(list)//2
        if list[m]==target:
            return True
        elif list[m]<target:
            return recursive_binary_search(list[m+1],target)
        else:
            return recursive_binary_search(list[m],target)

def verify(result):
        print("Target found : ",result )

n=int(input("Enter the size of the list : "))
list=[]

for i in range(0,n):
    element=int(input("Enter the element at the index "+str(i)+" : "))
    list.append(element)
print(list)
s=int(input("Enter the element to search : "))
verify(recursive_binary_search(list,s))

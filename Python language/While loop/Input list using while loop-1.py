list=[]
i=0
while True:
    element=int(input("Enter the element at the index "+str(i)+": "))
    list.append(element)
    choice=input("Enter y to stop or n to continue : ")
    if choice=='y':
        break

print(list)
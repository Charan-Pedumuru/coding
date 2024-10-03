name_list = ['Markian', 'Alex', 'Suzzane', 'Harleen']
print(sorted(name_list))
print(sorted(name_list, reverse=True))

n=int(input('Enter the size of the list : '))
list=[]

for i in range(n):
    element=input("Enter a character at the index : ")
    list.append(element)
print(list)
print("The ascending order of the list is ",sorted(list))
print("The descending order of the list is ",sorted(list, reverse=True))
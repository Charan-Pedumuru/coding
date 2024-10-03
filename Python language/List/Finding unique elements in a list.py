n=int(input())
l=list(map(int,input().strip().split()))
print(l)
l1=[]
c=0
for item in l:
    if item not in l1:
        c+=1
        l1.append(item)
print(l1)
print('The number f unique elements in the list are ',c)



input_list = [1, 2, 2, 5, 8, 4, 4, 8]
# converting our list to set
new_set = set(input_list)
print("No of unique items in the list are:", len(new_set))


# importing Counter module
from collections import Counter
input_list = [1, 2, 2, 5, 8, 4, 4, 8]
# creating a list with the keys
items = Counter(input_list).keys()
print("No of unique items in the list are:", len(items))



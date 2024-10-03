List=["apples","bananas","Oranges","Grapes","Pineapple","Avocado"]

print(List)
print(List[1])
print(len(List))
print(List[1:])
print(List[1:4])

List[1]="Assasin's Creed"
print(List[1])

friends=["Charan",19,'height']

print(friends)
print(len(friends))
print(friends[1])
print(friends[-3])
print(friends[1:])
print(friends[1][:])

fruits = ["apple", "banana", "cherry", "kiwi", "mango"] 
newlist = [x for x in fruits if "a" in x] 
print(newlist)

fruits = ["apple", "banana", "cherry", "kiwi", "mango"] 
newlist = [x for x in fruits] 
print(newlist)

newlist = [x for x in range(10) if x < 5] 
print(newlist)
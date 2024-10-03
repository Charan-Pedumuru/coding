n = int(input("Enter total number of names:"))
Name = []
print("Enter names: ")

for i in range(0, n):
   x = input()
   Name.append(x)

print("Names are:")

for i in range(0, n):

    print(Name[i].capitalize())
lucky_numbers=[7,6,4,8,9,1,0,69]
friends=['Charan','Jeelan','Ghouse','Hashwanth','Mahesh']

friends.extend(friends)
print(friends)

Games=['Prince of persia','Assasin creed','Far cry']
Games.append('Harry potter')
print(Games)

Movies=['Harry potter','Pirates of caribbean','Fantastic beasts','Lord of the rings']
Movies.insert(1,'Mission impossible')
print(len(Movies))

Places=['Rome','New york','Mumbai','Italy','Australia']
Places.remove('Australia')
print(Places)
Places.clear()
print(Places)

Cars=['Ferrari','Audi','Lamborghini','Wolkwagon','Rollyce royce']
Cars.pop()
print(Cars)
print(Cars.index("Ferrari"))

numbers=[1,3,5,7,6,9,69,1,69,1]
print(numbers.count(1))
numbers.sort()
print(numbers)

num=[69,78,56,43,21]
num.reverse()
print(num)

random=['Laptop','Mobile','Coding','python','Keyboard']
random1= random.copy()
print(random1)
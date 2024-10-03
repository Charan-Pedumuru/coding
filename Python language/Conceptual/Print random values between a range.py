import random


print("Random integers between 0 and 9: ")
for i in range(4, 15):
	y = random.randrange(9)
	print(y)


print("Random integers between 0 and 9: ")
for i in range(4, 11):
	y = random.uniform(4, 10)
	print(y)

from secrets import randbelow

for _ in range(3, 9):

	print(randbelow(15))


# Python code to generate
# random numbers and
# append them to a list
import numpy as np
def Rand(start, end, num):
	res = []

	for j in range(num):
		res.append(np.random.randint(start, end))

	return res


# Driver Code
num = 10
start = 20
end = 40
print(Rand(start, end, num))

# A Python program to print all 
# permutations using library function 
from itertools import permutations 


# Get all permutations of [1, 2, 3] 
perm = permutations([1, 2, 3]) 

# Print the obtained permutations 
for i in list(perm): 
	print (i) 


# Get all permutations of length 2 
# and length 2 
perm = permutations([1, 2, 3], 2) 

# Print the obtained permutations 
for i in list(perm): 
	print (i) 

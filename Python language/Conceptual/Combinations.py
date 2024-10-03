from itertools import combinations

comb = combinations([1, 2, 3], 2)

# Print the obtained combinations
for i in list(comb):
	print (i)


# A Python program to print all combinations 
# with an element-to-itself combination is 
# also included 
from itertools import combinations_with_replacement 

# Get all combinations of [1, 2, 3] and length 2 
comb = combinations_with_replacement([1, 2, 3], 2) 

# Print the obtained combinations 
for i in list(comb): 
	print (i) 

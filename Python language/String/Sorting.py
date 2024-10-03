# Sorting a list

n=int(input('Enter the size of the list : '))
list=[]

for i in range(n):
    element=int(input("Enter the element at the index "+str(i)+" : "))
    list.append(element)
print(list)
print("The sorted list is ",sorted(list))

# Sorting tuple and set

tuples = (4, 10, 1, 7)
sets = {10, 5, 10, 0, 2}
sorted_tuples = sorted(tuples)
sorted_sets = sorted(sets)
print('Sorted tuple is ',sorted_tuples)
print('Sorted set is ',sorted_sets)

# Sorting a string

num_string = '98765'
char_string = 'sorting is fun'
sorted_num_string = sorted(num_string)
sorted_char_string = sorted(char_string)
print('The sorted number string is ',sorted_num_string)
print('The sorted character string is ',sorted_char_string)

# Sorting string based on it's length

word = 'pencil'
print(len(word))
word_list = ['cherry', 'donut', 'Michigan', 'transcipt']
print(sorted(word_list, key=len))

# Sorts lower case alphabet words in order

word_list = ['cherry', 'donut', 'Michigan', 'Transcipt']
print(sorted(word_list, key=str.lower))





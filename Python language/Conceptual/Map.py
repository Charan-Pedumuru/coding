def square(n):
    return n*n
numbers=[x for x in range(10)]

squares_list=map(square,numbers) # Map gives inputs of list 'numbers' to the function 'square' and stores all the output in a list format
print(list(squares_list))
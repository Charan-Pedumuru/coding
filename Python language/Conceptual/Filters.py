def prime(a):
    for i in range(2,a):
        if a==0:
            return print('Incorrect input')
        elif a%i!=0:
            return True
        else:
            return False

f=filter(prime,range(10)) # Filters give multiple inputs to the function with range and it is further stores the returned values in a list 'f' 
# The true returned values are stored in the filter
print("The prime numbers are ",list(f))

# Filter require a function and a sequence or list and it's for boolean type


def fun(variable):
    letters = ['a', 'e', 'i', 'o', 'u'] 
    if (variable in letters): 
        return True 
    else: 
        return False 
        
sequence = ['g', 'e', 'e', 'j', 'k', 's', 'p', 'r'] 
filtered = filter(fun, sequence) 
print('The filtered letters are:') 
for s in filtered: 
    print(s)
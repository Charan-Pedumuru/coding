def sum(a,b):
    print('The sum of '+a+ ' and '+b+ ' is ',int(a)+int(b))

def subtract(a,b):
    print('The subtraction of '+a+ ' and '+b+ ' is ',int(a)-int(b))

def multiplication(a,b):
    print('The multiplication of '+a+ ' and '+b+ ' is ',int(a)*int(b))

def division(a,b):
    print('The division of '+a+ ' and '+b+ ' is ',int(a)/int(b))

a=input('Enter the first number : ')
b=input('Enter the second number : ')

sum(a,b)
subtract(a,b)
division(a,b)
multiplication(a,b)
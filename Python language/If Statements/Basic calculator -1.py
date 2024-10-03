a=int(input('Enter the 1st number : ')) #get input a datatypeof integer
op=input('Enter the operator : ')        # it will get input in the datatype of string
b=int(input('Enter the 2nd number : '))

if op=='+':
    print('The sum of '+str(a)+' and '+str(b)+' is '+str(a+b))

elif op=='-':
    print('The difference of '+str(a)+' and '+str(b)+' is '+str(a-b))

elif op=='*':
    print('The multiplication of '+str(a)+' and '+str(b)+' is '+str(a*b))

elif op=='/':
    print('The division of '+str(a)+' and '+str(b)+' is '+str(a/b))

else:
    print('Invalid operator')
try:
    n=int(input('Enter a number : ')) 
    print(n)

except ValueError:
    print('Invalid Input')


 # try and except enables us to show optional print satements when the user enters other datatypes or wrong inputs

try:
    value=10/0

except ZeroDivisionError as err:  #This code prints out the error message
    print(err)

except ZeroDivisionError:      #this code just prints out the satement we needed
    print('Divided by zero')
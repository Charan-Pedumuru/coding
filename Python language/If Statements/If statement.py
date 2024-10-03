is_male=True
is_tall=True

if is_male and is_tall :
    print("You are male and tall")

elif is_male and not(is_tall):
    print('You are male but not tall')

elif not(is_male) and not(is_tall):
    print('You are not male but tall')

else:
    print("you are neither male nor tall or both")
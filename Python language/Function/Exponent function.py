print(2**3) # it is 2^3

def raise_power(base_num, pow_num):
    res=1

    for i in range(pow_num):
        res=res*base_num
    return res


a=int(input('Enter the base number : '))
b=int(input('Enter the power number: '))
print('The power of '+str(a)+' to '+str(b)+' is '+str(raise_power(a,b)))
def max_num(a,b,c):
    if a>=b and a>=c:
        return a

    elif b>=a and b>=c:
        return b
    
    else:
        return c


print('The biggest number is '+str(max_num(1,2,3)))
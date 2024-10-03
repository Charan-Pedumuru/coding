x= lambda a: a+20
print(x(5))

y= lambda d,m: d+m
print(y(4,5))

def f1(n):
    return lambda a:a+n
r=f1(3)   # Giving the value of 3 as n
r1=f1(4)
print(r(5)) # Giving the value of 5 as a 
print(r1(6))
import math

p = float(input())

l= int(input())

ep1 = (1/(12*math.pi* p* (1-p)))*(l/((l-2)*(l-3)))

ep2 = (((1-2*p)**2)/9*math.pi*(1-p))*(1/l) 

ep3 = ((1-2*p)/4*(math.sqrt(2*math.pi*p*(1-p))))*(l/((l-2)*(l-3)*(math.sqrt(l-4)))) 

ep4 = (((1-2*p)**2)/9*math.pi*(1-p))*(l/((l-1)*(l-2)*(l-3)))

ep = ep1+ep2+ep3+ep4

print(ep)
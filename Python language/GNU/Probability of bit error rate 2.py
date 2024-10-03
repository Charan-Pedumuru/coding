import math
import numpy as np
from scipy.integrate import quad

l = 10 #int(input())
po =  0.1 #float(input())

x = -np.sqrt(l) * (0.5 - po / np.sqrt(po * (1 - po)))
si = (1 / np.sqrt((2 * math.pi))) * np.exp(-pow(x, 2) / 2)

integrand = lambda t: np.exp(-pow(t, 2) / 2)
result, _ = quad(integrand, -np.inf, x)
phi = (1 / np.sqrt((2 * math.pi))) * result

pf = phi + (1 - 2 * po) / (6 * np.sqrt(l * po * (1 - po))) * (pow(x, 2) - 1) * si

print(pf)

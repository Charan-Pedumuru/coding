import math
import numpy as np
from scipy.integrate import quad
from mpmath import mp

def binomial_coefficient(n, k):
    return math.comb(n, k)

def calculate_bit_error_rate(l, p0):
    mp.dps = 100
    x = -np.sqrt(l) * (0.5 - p0 / np.sqrt(p0 * (1 - p0)))
    si = (1 / (2 * math.pi)) * np.exp(-pow(x, 2) / 2)

    integrand = lambda t: np.exp(-pow(t, 2) / 2)
    result, _ = quad(integrand, -np.inf, x)

    phi = (1 / np.sqrt((2 * math.pi))) * result
    pf = phi + (1 - 2 * p0) / (6 * np.sqrt(l * p0 * (1 - p0))) * (pow(x, 2) - 1) * si
    return pf

def calculate_P_j_v_w(n, d_ij, p0_s, v, w):
    return binomial_coefficient(n - d_ij, w) * (p0_s ** (v + w)) * ((1 - p0_s) ** (n - v - w))

def calculate_false_probability(n, d_lim, p0, l, k):
    mp.dps = 100
    p0_s = calculate_bit_error_rate(l, p0)
    false_probability = 0
    for j in range(1, n):
        for v in range(d_ij - d_lim, d_ij + 1):
            inner_sum = 0
            for w in range(v - d_ij + d_lim + 1):
                inner_sum += calculate_P_j_v_w(n, d_ij, p0_s, v, w)
            false_probability += binomial_coefficient(d_ij, v) * inner_sum
    false_probability = pow(false_probability, k)
    
    return false_probability


n = 20 
d_ij = 12
d_lim = 5 
l = 10539
p0 = 0.495
k = 4

result = calculate_false_probability(n, d_lim, p0, l, k)
print(f"The false probability raised to the power of K is: {result}")

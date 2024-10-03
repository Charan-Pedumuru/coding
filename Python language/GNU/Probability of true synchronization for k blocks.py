from mpmath import mp
import numpy as np
import math
from scipy.integrate import quad

def binomial_coefficient(n, k):
    return mp.binomial(n, k)

def calculate_bit_error_rate(l, p0):
    mp.dps = 10
    x = -np.sqrt(l) * (0.5 - p0 / np.sqrt(p0 * (1 - p0)))
    si = (1 / np.sqrt((2 * math.pi))) * np.exp(-pow(x, 2) / 2)

    integrand = lambda t: np.exp(-pow(t, 2) / 2)
    result, _ = quad(integrand, -np.inf, x)

    phi = (1 / np.sqrt((2 * math.pi))) * result
    pf = phi + (1 - 2 * p0) / (6 * np.sqrt(l * p0 *(1 - p0))) * (pow(x, 2) - 1) * si
    return pf

def calculate_true_probability(n, d_lim, p0, l, K):
    mp.dps = 10
    p0_star = calculate_bit_error_rate(l, p0)
    true_probability = 0
    for v in range(d_lim + 1):
        true_probability += binomial_coefficient(n, v) * pow(p0_star, v) * pow(1 - p0_star, n - v)

    true_probability = pow(true_probability, K)

    return true_probability


n = 24
d_lim = 5
l = 2707
p0 = 0.495
K = 4

result = calculate_true_probability(n, d_lim, p0, l, K)
print(f"The true probability raised to the power of K is: {result}")

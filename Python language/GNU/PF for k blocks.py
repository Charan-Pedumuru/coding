import math
import numpy as np
import matplotlib.pyplot as plt

def binomial_coefficient(n, k):
    return math.comb(n, k)

def calculate_bit_error_rate(l, p0):
    p0_s_values = []  
    for l_val in l:
        p0_s = 0
        l_int = int(l_val)
        for i in range((l_int + 1) // 2, l_int + 1):
            p0_s += binomial_coefficient(l_int, i) * (p0 ** i) * ((1 - p0) ** (l_int - i))
        p0_s_values.append(p0_s)
    
    return p0_s_values

def calculate_P_j_v_w(n, d_ij, p0_s, v, w):
    return binomial_coefficient(n - d_ij, w) * (p0_s ** (v + w)) * ((1 - p0_s) ** (n - v - w))

def calculate_false_probability(n, d_lim, p0, l, k):
    p0_s_values = calculate_bit_error_rate(l, p0)
    false_probabilities = []
    for p0_s in p0_s_values:
        false_probability = 0
        for j in range(1, n):
            for v in range(d_ij - d_lim, d_ij + 1):
                inner_sum = 0
                for w in range(v - d_ij + d_lim + 1):
                    inner_sum += calculate_P_j_v_w(n, d_ij, p0_s, v, w)
                false_probability += binomial_coefficient(d_ij, v) * inner_sum
        false_probabilities.append(pow(false_probability, k))
    
    return false_probabilities

n = 24  
d_lim = 5 
d_ij = 12
xlist = np.arange(1, 1000, 200)
p_values = [0.475, 0.48, 0.485, 0.49, 0.495]
k_val = [1, 2, 3, 4]
ylists = []  # List to store results for each k

plt.figure(num=0, dpi=200)

for k in k_val:
    ylist = []  # Temporary list for each k
    for p in p_values:
        ylist.append(calculate_false_probability(n, d_lim, p, xlist, k))
    ylists.append(ylist)

for i, p0 in enumerate(p_values):
    for j, k in enumerate(k_val):
        plt.plot(xlist, [y[i] for y in ylists[j]], label=f'p0 = {p0}, k = {k}')


plt.xlabel('Accumulation factor')
plt.ylabel('Probability of false synchronization for k blocks')
plt.legend()
plt.grid()
plt.show()

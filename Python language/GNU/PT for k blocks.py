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

def calculate_true_probability(n, d_lim, p0, l, K):
    p0_s_values = calculate_bit_error_rate(l, p0)
    true_probabilities = []
    for p0_s in p0_s_values:
        true_probability = 0
        for v in range(d_lim + 1):
            true_probability += binomial_coefficient(n, v) * (p0_s ** v) * ((1 - p0_s) ** (n - v))
        true_probabilities.append(pow(true_probability, K))
    
    return true_probabilities

n = 24  
d_lim = 5 
xlist = np.arange(1, 1000, 10)
p_values = [0.475, 0.48, 0.485, 0.49, 0.495]
k_val = [1, 2, 3, 4]
ylists = []  # List to store results for each k

plt.figure(num=0, dpi=200)

for k in k_val:
    ylist = []  # Temporary list for each k
    for p in p_values:
        ylist.append(calculate_true_probability(n, d_lim, p, xlist, k))
    ylists.append(ylist)

for i, p0 in enumerate(p_values):
    for j, k in enumerate(k_val):
        plt.plot(xlist, ylists[j][i], label=f'p0 = {p0}, k = {k}')

plt.xlabel("Accumulation factor")
plt.ylabel("Probability of correct synchronization for k blocks")
plt.legend()
plt.grid()
plt.show()

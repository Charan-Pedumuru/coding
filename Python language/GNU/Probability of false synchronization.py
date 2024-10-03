import math
import matplotlib.pyplot as plt

def binomial_coefficient(n, k):
    return math.comb(n, k)

def calculate_bit_error_rate(l, p0):
    p0_s = 0
    for i in range((l + 1) // 2, l + 1):
        p0_s += binomial_coefficient(l, i) * (p0 ** i) * ((1 - p0) ** (l - i))
    
    return p0_s

def calculate_P_j_v_w(n, d_ij, p0_s, v, w):
    return binomial_coefficient(n - d_ij, w) * (p0_s ** (v + w)) * ((1 - p0_s) ** (n - v - w))

def calculate_false_probability(n, d_lim, p0, l):
    p0_s = calculate_bit_error_rate(l, p0)
    false_probability = 0
    for j in range(1, n):
        for v in range(d_ij - d_lim, d_ij + 1):
            inner_sum = 0
            for w in range(v - d_ij + d_lim + 1):
                inner_sum += calculate_P_j_v_w(n, d_ij, p0_s, v, w)
            false_probability += binomial_coefficient(d_ij, v) * inner_sum
    
    return false_probability

n = 24
d_ij = 12
d_lim = 5

p0_values = [0.475, 0.48, 0.485, 0.49, 0.495]

x_values = list(range(1, 1001, 10))
results = []

for p0 in p0_values:
    result_for_p0 = []
    for x in x_values:
        result = calculate_false_probability(n, d_lim, p0, x)
        result_for_p0.append(result)
    results.append(result_for_p0)

for i, p0 in enumerate(p0_values):
    plt.plot(x_values, results[i], label=f'p0 = {p0}')

#plt.figure(num=0, dpi=200)
plt.xlabel('Accumulation factor')
plt.ylabel('Probability of false synchronization')
plt.legend()
#plt.title('False Probability vs. Accumulation factor for Different p0 Values')
plt.grid()
plt.show()

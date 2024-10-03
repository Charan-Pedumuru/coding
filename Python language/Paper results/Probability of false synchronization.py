import math

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
l = 545
p0 = 0.495

result = calculate_false_probability(n, d_lim, p0, l)
print(f"The false probability is: {result}")

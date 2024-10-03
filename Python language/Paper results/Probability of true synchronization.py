import math

def binomial_coefficient(n, k):
    return math.comb(n, k)

def calculate_bit_error_rate(l, p0):
    p0_s = 0
    for i in range((l + 1) // 2, l + 1):
        p0_s += binomial_coefficient(l, i) * (p0 ** i) * ((1 - p0) ** (l - i))
    
    return p0_s

def calculate_true_probability(n, d_lim, p0, l):
    p0_s = calculate_bit_error_rate(l, p0)
    true_probability = 0
    for v in range(d_lim + 1):
        true_probability += binomial_coefficient(n, v) * (p0_s ** v) * ((1 - p0_s) ** (n - v))
    
    return true_probability


n = 24  
d_lim = 5  
l = 121
p0 = 0.45

result = calculate_true_probability(n, d_lim, p0, l)
print(f"The true probability is: {result}")

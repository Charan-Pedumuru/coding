import math

def binomial_coefficient(n, k):
    return math.comb(n, k)

def calculate_bit_error_rate(l, p0):
    p0_s = 0
    for i in range((l + 1) // 2, l + 1):
        p0_s += binomial_coefficient(l, i) * (p0 ** i) * ((1 - p0) ** (l - i))
    
    return p0_s

l = 10 
p0 = 0.1  

result = calculate_bit_error_rate(l, p0)
print(f"The probability of bit error rate is: {result}")

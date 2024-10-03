def permutation(n, k):

  permutation_value = 1
  for i in range(n - k + 1, n + 1):
    permutation_value *= i
  return permutation_value

print(permutation(5,3))
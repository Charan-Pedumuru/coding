def flip_array(array):
  """Flips the 1s and 0s in an array.

  Args:
    array: A list of integers.

  Returns:
    A list of integers with the 1s and 0s flipped.
  """

  flipped_array = []
  for element in array:
    if element == 1:
      flipped_array.append(0)
    else:
      flipped_array.append(1)
  return flipped_array


# Example usage:

array = [1, 0, 1, 0]
flipped_array = flip_array(array)
print(flipped_array)
def remove_leading_zeroes_from_binary(binary_value):
    # Convert binary integer to binary string (remove '0b' prefix)
    binary_str = bin(binary_value)[2:]
    
    # Remove leading zeroes
    binary_str = binary_str.lstrip('0')
    
    # Convert binary string back to an integer
    result = int(binary_str, 2)
    
    return result

# Example usage:
binary_value = 0b00011010  # Binary value with leading zeroes
result = remove_leading_zeroes_from_binary(binary_value)
print(bin(result))  # Output: 26 (binary '00011010' with leading zeroes removed)

# Input: A hexadecimal number as a string
hexadecimal_number = "1acffc1d0007fffff47ff03f7061636b657407ff3fff000648656c6c6f21"
# Convert to binary
binary_number = bin(int(hexadecimal_number, 16))

# The result will include a "0b" prefix, so you can remove it if needed
binary_number = binary_number[2:]

print(binary_number)


hexadecimal_value = 0x3A  # Replace with your hexadecimal value
binary_representation = bin(hexadecimal_value)

# You can remove the '0b' prefix from the binary string if desired
binary_representation = binary_representation[2:]

print("Hexadecimal:", hexadecimal_value)
print("Binary:", binary_representation)

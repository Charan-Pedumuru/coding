hex_string = "1a cf fc 1d 00 07 ff ff f4 7f f0 3f 70 61 63 6b 65 74 07 ff 3f ff 00 06 48 65 6c 6c 6f 21 "

# Split the hex string into individual components
hex_values = hex_string.split()

# Convert each hex value to binary and concatenate them
binary_result = "".join(bin(int(hex_value, 16))[2:].zfill(8) for hex_value in hex_values)

print(binary_result)

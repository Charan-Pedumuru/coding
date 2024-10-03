import numpy as np
def encode_cyclic(message, generator_poly):
 n = len(message) + len(generator_poly) - 1
 message_padded = np.concatenate((message, np.zeros(len(generator_poly) - 1, 
dtype=int)))
 remainder = np.polydiv(message_padded, generator_poly)[1]
 codeword = np.concatenate((message, remainder[-(n - len(message)):]))
 return codeword
def decode_cyclic(received_codeword, generator_poly):
 n = len(received_codeword)
 k = n - len(generator_poly) + 1
 syndrome = np.polydiv(received_codeword, generator_poly)[1]
 error_detected = np.any(syndrome)
 if error_detected:
     syndrome_poly = np.poly1d(syndrome[::-1])
     error_locator_poly = np.poly1d(generator_poly[::-1])
     _, remainder = np.polydiv(syndrome_poly, error_locator_poly)
     error_locator_roots = np.roots(remainder)
     error_positions = np.round(error_locator_roots).astype(int) # Convert to integer type
     error_vector = np.zeros(n, dtype=int)
     error_vector[error_positions] = 1
     decoded_codeword = (received_codeword + error_vector) % 2
 else:
     decoded_codeword = received_codeword
 decoded_message = decoded_codeword[:k]
 return decoded_message, error_detected
# Example usage
n = 7 # Total codeword length
k = 4 # Number of message bits
# Define generator polynomial
generator_poly = np.array([1, 0, 1, 1])
# Example usage: Encoding
message = np.random.randint(2, size=k) # Generate a random binary message
codeword = encode_cyclic(message, generator_poly)
print("Encoded codeword:", codeword)
# Example usage: Decoding
received_codeword = np.copy(codeword) # Make a copy of the transmitted codeword
received_codeword[2] = 1 # Introduce an error at position 2
decoded_message, error_detected = decode_cyclic(received_codeword, generator_poly)
print("Decoded message:", decoded_message)
if error_detected:
 print("Errors were detected and corrected.")
else:
 print("No errors were detected.")
# Example usage: Error detection
received_codeword_with_error = np.copy(codeword) # Make a copy of the transmitted 
codeword
received_codeword_with_error[4] = 1 # Introduce an error at position 4
decoded_message, error_detected = decode_cyclic(received_codeword_with_error, 
generator_poly)
print("Decoded message:", decoded_message)
if error_detected:
 print("Errors were detected and corrected.")
else:
 print("No errors were detected.")

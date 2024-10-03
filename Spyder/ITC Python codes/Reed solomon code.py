import numpy as np
def encode_reed_solomon(message, n, k):
 padded_message = np.concatenate((message, np.zeros(n-k, dtype=int)))
 generator_poly = np.poly1d([1] + [0] * (n-k) + [1])
 encoded_message = np.poly1d(padded_message) * generator_poly
 return encoded_message.coeffs.tolist()
def decode_reed_solomon(received_message, n, k):
 received_poly = np.poly1d(received_message)
 syndrome = np.polyval(received_poly.coeffs[::-1], np.arange(n-k, n))
 error_positions = np.roots(syndrome).real
 error_positions = error_positions[np.logical_and(0 <= error_positions, 
error_positions < n)].round().astype(int)
 if len(error_positions) > n-k:
     print("Too many errors to correct.")
     return None, True
 error_values = np.polyval(received_poly.coeffs[::-1], error_positions)
 error_locator_poly = np.poly1d(np.zeros(len(error_positions) + 1, dtype=int))
 for i, xi in enumerate(error_positions):
     error_locator_poly[-(i+1)] = 1
     for j in range(len(error_positions)):
         if j != i:
             error_locator_poly *= np.poly1d([1, -error_positions[j]])
     error_locator_poly *= -xi
 error_vector_poly = np.poly1d(error_values) / error_locator_poly(error_positions)
 error_vector = np.polyval(error_vector_poly, error_positions)
 corrected_poly = received_poly + np.poly1d(error_vector)
 decoded_message = corrected_poly.coeffs[:k]
 return decoded_message.tolist(), len(error_positions) > 0
# Example usage
n = 7 # Total codeword length
k = 4 # Number of message bits
# Example usage: Encoding
message = np.random.randint(256, size=k)
encoded_message = encode_reed_solomon(message, n, k)
print("Encoded message:", encoded_message)
# Example usage: Decoding
received_message = np.copy(encoded_message)
received_message[2] = 100 
decoded_message, error_detected = decode_reed_solomon(received_message, n, k)
print("Decoded message:", decoded_message)
if error_detected:
 print("Errors were detected and corrected.")
else:
 print("No errors were detected.")
# Example usage: Error detection
received_message_with_error = np.copy(encoded_message)
received_message_with_error[4] = 200
decoded_message, error_detected = decode_reed_solomon(received_message_with_error, n, 
k)
print("Decoded message:", decoded_message)
if error_detected:
 print("Errors were detected and corrected.")
else:
 print("No errors were detected.")

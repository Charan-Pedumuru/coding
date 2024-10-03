import numpy as np
def encode(message, generator_matrix):
 codeword = np.dot(message, generator_matrix) % 2
 return codeword
def decode(codeword, parity_check_matrix):
 n = len(codeword)
 k = n - parity_check_matrix.shape[0]
 syndrome = np.dot(parity_check_matrix, codeword) % 2
 if np.count_nonzero(syndrome) == 0:
    return codeword[:k], False
 error_positions = np.where(np.all(parity_check_matrix == syndrome[:, np.newaxis],axis=0))[0]
 error_vector = np.zeros(n)
 error_vector[error_positions] = 1
 corrected_codeword = (codeword + error_vector) % 2
 decoded_message = corrected_codeword[:k]
 return decoded_message, np.any(syndrome)
# Example usage
n = 7 # Total codeword length
k = 4 # Number of message bits
# Define generator matrix
generator_matrix = np.array([[1, 0, 0, 0, 1, 1, 0],
 [0, 1, 0, 0, 0, 1, 1],
 [0, 0, 1, 0, 1, 1, 1],
 [0, 0, 0, 1, 1, 0, 1]])
# Define parity-check matrix
parity_check_matrix = np.array([[1, 0, 1, 1, 1, 0, 0],
 [1, 1, 1, 0, 0, 1, 0],
 [0, 1, 1, 1, 0, 0, 1]])
# Example usage: Encoding
message = np.random.randint(2, size=k) # Generate a random binary message
codeword = encode(message, generator_matrix)
print("Encoded codeword:", codeword)
# Example usage: Decoding
received_codeword = codeword # Assume the received codeword is the same as the transmitted codeword
decoded_message, error_detected = decode(received_codeword, parity_check_matrix)
print("Decoded message:", decoded_message)
if error_detected:
 print("Errors were detected and corrected.")
else:
 print("No errors were detected.")
# Example usage: Error detection
received_codeword_with_error = np.random.randint(2, size=n) # Generate a random binary codeword with an error
decoded_message, error_detected = decode(received_codeword_with_error, 
parity_check_matrix)
print("Decoded message:", decoded_message)
if error_detected:
 print("Errors were detected and corrected.")
else:
 print("No errors were detected.")

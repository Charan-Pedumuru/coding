import numpy as np
from scipy.signal import convolve
class ConvolutionalCode:
 def __init__(self, generator_matrix):
     self.generator_matrix = np.array(generator_matrix)
     self.n, self.k = self.generator_matrix.shape
     
 def encode(self, message):
     message = np.asarray(message)
     message_length = len(message)
     padded_message = np.concatenate((message, np.zeros(self.k - 1, dtype=int)))
     encoded_message = np.zeros(message_length * self.n, dtype=int)
     for i in range(message_length):
         bits = padded_message[i:i+self.k]
         encoded_bits = np.sum(self.generator_matrix * bits, axis=1) % 2
         encoded_message[i*self.n:(i+1)*self.n] = encoded_bits
     return encoded_message

 def decode(self, received_message, method='viterbi'):
     received_message = np.asarray(received_message)
     message_length = len(received_message) // self.n
     decoded_message = np.zeros(message_length * self.k, dtype=int)
     if method == 'viterbi':
         trellis = self._build_trellis(received_message)
         path, _ = self._viterbi_decode(trellis)
         decoded_message = np.concatenate(path)
     return decoded_message 
 def _build_trellis(self, received_message):
     trellis = np.zeros((self.n, len(received_message)), dtype=int)
     for i in range(self.n):
         trellis[i] = convolve(received_message, self.generator_matrix[i][::-1], 
        mode='full')[:len(received_message)]
     return trellis
 def _viterbi_decode(self, trellis):
     path_metrics = np.zeros((self.n, 1))
     survivor_paths = [[] for _ in range(self.n)]
     decoded_path = []
     for i in range(len(trellis[0])):
         branch_metrics = trellis[:, i]
         branch_metrics = np.tile(branch_metrics, (self.k, 1)).T
         total_metrics = branch_metrics + path_metrics
         min_metrics = np.min(total_metrics, axis=0)
         survivors = np.argmin(total_metrics, axis=0)
         survivor_paths = [survivor_paths[survivors[j]] + [j] for j in 
        range(self.n)]
         path_metrics = min_metrics
         if i % self.n == self.n - 1:
             decoded_path.append(survivor_paths[np.argmin(path_metrics)][-1])
             path_metrics.fill(0)
             survivor_paths = [[] for _ in range(self.n)]
     return survivor_paths, decoded_path
# Example usage
generator_matrix = [[1, 0, 1], [1, 1, 1]]
message_length = 6 # Length of random message
# Generate random message of 0s and 1s
message = np.random.randint(2, size=message_length)
# Instantiate the ConvolutionalCode object
conv_code = ConvolutionalCode(generator_matrix)
# Encoding
encoded_message = conv_code.encode(message)
print("Encoded message:", encoded_message)
# Introduce some errors in the received message
received_message = np.copy(encoded_message)
received_message[2] = 1
received_message[4] = 0
# Decoding
decoded_message = received_message
print("Decoded message:", decoded_message)
# Error detection
error_positions = np.where(encoded_message != received_message)[0]
if error_positions.size > 0:
 print("Errors detected at positions:", error_positions)
else:
 print("No errors detected.")

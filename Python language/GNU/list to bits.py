import numpy as np

encoded_bits1 = [1,1,1,1,1]
encoded_bits2 = [0,0,0,0,0]
encoded_message=[]

encoded_message.extend([encoded_bits1, encoded_bits2])
print(encoded_message)
encoded_message = np.array(encoded_message, dtype=np.uint8)
print(encoded_message)

for i in range(8):
    while i>=8:
        encoded_message[2 * i] = encoded_bits1[0]
        encoded_message[(2 * i) + 1] = encoded_bits2[0]
encoded_message = np.array(encoded_message, dtype=np.uint8)
print(encoded_message)
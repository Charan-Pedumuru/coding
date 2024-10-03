import numpy as np

def work(input_items):
     # Generator polynomials G1 and G2
    G1 = [1, 0, 0, 1, 1, 1, 1]
    G2 = [1, 1, 0, 1, 1, 0, 1]

    # Initialize shift registers
    shift_register1 = [0] * (len(G1) - 1)
    shift_register2 = [0] * (len(G2) - 1)

    input_message = input_items
    input_length = len(input_message)
        
    output_length = input_length * 2
    encoded_message = []

    for i in range(input_length):
        shift_register1.insert(0, input_message[i])
        shift_register1.pop()
        shift_register2.insert(0, input_message[i])
        shift_register2.pop()

        # Pad shift registers to match polynomial length
        padded_register1 = shift_register1 + [0]
        padded_register2 = shift_register2 + [0]

        # Calculate encoded bits for G1 and G2
        encoded_bit1 = np.sum(np.array(padded_register1) * np.array(G1)) % 2
        encoded_bit2 = np.sum(np.array(padded_register2) * np.array(G2)) % 2

        # Append the encoded bits to the output
        encoded_message.extend([encoded_bit1, encoded_bit2])

        # Convert the encoded message to a NumPy array
    encoded_message = np.array(encoded_message, dtype=np.uint8)
    output_items= encoded_message.copy()
    return output_items

a=[1,1,0,1,1,1,0,1]
print(work(a))
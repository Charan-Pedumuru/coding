import numpy as np
from gnuradio import gr

class ConvolutionalEncoderBlock(gr.sync_block):
    def __init__(self):
        gr.sync_block.__init__(
            self,
            name='Convolutional Encoder Block 0',
            in_sig=[np.uint8],
            out_sig=[np.uint8]
        )

        # Generator polynomials G1 and G2
        self.G1 = [1, 1, 1, 1, 0, 0, 1]
        self.G2 = [1, 0, 1, 1, 0, 1, 1]

        # Initialize shift registers
        self.shift_register1 = [0] * (len(self.G1) - 1)
        self.shift_register2 = [0] * (len(self.G2) - 1)

    def work(self, input_items, output_items):
        input_message = input_items[0]
        input_length = len(input_message)
        
        # Calculate the output length based on the code rate
        output_length = input_length * 2

        # Initialize the encoded message
        encoded_message = []

        # Convolutional encoding
        for i in range(input_length):
            # Update shift registers
            self.shift_register1.insert(0, input_message[i])
            self.shift_register1.pop()
            self.shift_register2.insert(0, input_message[i])
            self.shift_register2.pop()

            # Pad shift registers to match polynomial length
            padded_register1 = self.shift_register1 + [0]
            padded_register2 = self.shift_register2 + [0]

            # Calculate encoded bits for G1 and G2
            encoded_bit1 = np.sum(np.array(padded_register1) * np.array(self.G1)) % 2
            encoded_bit2 = np.sum(np.array(padded_register2) * np.array(self.G2)) % 2

            # Append the encoded bits to the output
            encoded_message.extend([encoded_bit1, encoded_bit2])

        # Convert the encoded message to a NumPy array
        encoded_message = np.array(encoded_message, dtype=np.uint8)
        output_items= encoded_message.copy()
        return len(output_items)

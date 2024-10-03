import numpy as np
from gnuradio import gr

class asm_block(gr.sync_block):
    def __init__(self, asm_value = 0x1ACFFC1D):
        gr.sync_block.__init__(
            self,
            name='ASM',
            in_sig=None,
            out_sig=[np.uint8]
        )

        self.asm_value = asm_value

    def work(self, input_items, output_items):
        output_items[0]= self.asm_value.to_bytes(4,'big').hex()
        return len(output_items[0])

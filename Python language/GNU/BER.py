import numpy as np
from gnuradio import gr

class mi_bloque_embebido(gr.sync_block):


    def __init__(self, Sym_max=1e6,Errors_max=1e4): 
        gr.sync_block.__init__(
            self,
            name='e_Symbol Rate',
            in_sig=[np.int8,np.int8],
            out_sig=[np.float32,np.float32,np.float32]
        )
        self.Sym_max = Sym_max
        self.Errors_max=Errors_max
        self.errores = 0.
        self.count=0.
        self.BER=1.

    def work(self, input_items, output_items):
        in0=input_items[0]
        in1=input_items[1]
        out0=output_items[0]
        out1=output_items[1]
        out2=output_items[2]
        if self.errores<self.Errors_max:
            if self.count < self.Sym_max:
                self.count += len(in0)
                self.errores += np.count_nonzero(in0-in1)
                self.BER=self.errores/self.count
        out2[:]=self.BER
        out1[:]=self.errores
        out0[:]=self.count
        return len(output_items[0])
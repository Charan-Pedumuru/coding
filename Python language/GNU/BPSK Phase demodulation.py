import numpy as np 
from gnuradio import gr

class bpsk_demodulation_blk(gr.sync_block):
    """BPSK Demodulation Block"""

    def __init__(self, samp_rate=32e3, bit_rate=2e3, carrier_freq=32e3):
        gr.sync_block.__init__(
            self,
            name='BPSK_PM_Demodulation',
            in_sig=[np.complex64],
            out_sig=[np.int8]
        )
        self.samp_rate = samp_rate
        self.bit_rate = bit_rate
        self.carrier_freq = carrier_freq

        self.sps = int(samp_rate / bit_rate)
        self.prev_phase = 0.0

    def work(self, input_items, output_items):
        input_symbols = input_items[0]

        demodulated_symbols = np.real(input_symbols * np.exp(-1j * 2 * np.pi * self.carrier_freq * np.arange(len(input_symbols)) / self.samp_rate))
        output_items[0][:] = np.round((demodulated_symbols + 1) / 2).astype(np.int8)

        return len(output_items[0])

class phase_demodulation_blk(gr.sync_block):
    """Phase Demodulation Block"""

    def __init__(self, samp_rate=32e3, modulation_index=0.9, subcarrier_freq=32e3, bit_rate=2e3):
        gr.sync_block.__init__(
            self,
            name='Phase_Demodulation',
            in_sig=[np.complex64],
            out_sig=[np.float32]
        )
        self.samp_rate = samp_rate
        self.modulation_index = modulation_index
        self.subcarrier_freq = subcarrier_freq
        self.bit_rate = bit_rate

        self.blocks_signal_source_0 = analog.sig_source_f(self.samp_rate, analog.GR_COS_WAVE, self.subcarrier_freq, 1, 0)

    def work(self, input_items, output_items):
        input_signal = input_items[0]

        demodulated_output = np.angle(input_signal * np.exp(-1j * 2 * np.pi * self.subcarrier_freq * np.arange(len(input_signal)) / self.samp_rate))
        output_items[0][:] = demodulated_output.astype(np.float32) / self.modulation_index

        return len(output_items[0])
        
class TopBlock(gr.top_block):
    def __init__(self):
        gr.top_block.__init__(self)

        # Create instances of your demodulation blocks
        bpsk_demod = bpsk_demodulation_blk(carrier_freq=32e3)
        phase_demod = phase_demodulation_blk(subcarrier_freq=32e3)

        # Connect the output of BPSK modulation to the input of phase modulation
        self.connect((phase_demod,0), (bpsk_demod,0))

if __name__ == '__main__':
    tb = TopBlock()
    tb.run()
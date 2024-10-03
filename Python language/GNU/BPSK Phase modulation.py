import numpy as np
from gnuradio import gr, blocks, analog

class bpsk_modulation_blk(gr.sync_block):
    """BPSK Modulation Block"""

    def _init_(self, samp_rate=32e3, bit_rate=2e3, carrier_freq=32e3):
        gr.sync_block._init_(
            self,
            name='BPSK_PM_two_level_Modulation',
            in_sig=[np.int8],
            out_sig=[np.complex64]
        )
        self.samp_rate = samp_rate
        self.bit_rate = bit_rate
        self.carrier_freq = carrier_freq

        self.sps = int(samp_rate / bit_rate)
        self.phase = 0.0

    def work(self, input_items, output_items):
        input_bits = input_items[0]

        modulated_symbols = 2 * input_bits - 1
        modulated_output = modulated_symbols * np.exp(1j * 2 * np.pi * self.carrier_freq * np.arange(len(input_bits)) / self.samp_rate)
        output_items[0][:] = modulated_output.astype(np.complex64)

        return len(output_items[0])

class phase_modulation_blk(gr.sync_block):
    """Phase Modulation Block"""

    def _init_(self, samp_rate=32e3, modulation_index=0.9, subcarrier_freq=32e3, bit_rate=2e3):
        gr.sync_block._init_(
            self,
            name='Phase Modulation',
            in_sig=[np.float32],
            out_sig=[np.complex64]
        )
        self.samp_rate = samp_rate
        self.modulation_index = modulation_index
        self.subcarrier_freq = subcarrier_freq
        self.bit_rate = bit_rate

        self.blocks_signal_source_0 = analog.sig_source_f(self.samp_rate, analog.GR_COS_WAVE, self.subcarrier_freq, 1, 0)

    def work(self, input_items, output_items):
        input_signal = input_items[0]

        modulated_output = np.exp(1j * (input_signal * self.modulation_index + 2 * np.pi * self.subcarrier_freq * np.arange(len(input_signal)) / self.samp_rate))
        output_items[0][:] = modulated_output.astype(np.complex64)

        return len(output_items[0])

class TopBlock(gr.top_block):
    def _init_(self):
        gr.top_block._init_(self)

        # Create instances of your modulation blocks
        bpsk_mod = bpsk_modulation_blk(carrier_freq=32e3)  # Set carrier_freq for BPSK
        phase_mod = phase_modulation_blk(subcarrier_freq=32e3)  # Set subcarrier_freq for Phase Modulation

        # Connect the output of BPSK modulation to the input of phase modulation
        self.connect(bpsk_mod, phase_mod)

if _name_ == '_main_':
    tb = TopBlock()
    tb.run()
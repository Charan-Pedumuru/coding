import numpy as np
from gnuradio import gr, analog

class bpsk_demodulation_blk(gr.sync_block):
    """BPSK Demodulation Block"""

    def __init__(self, samp_rate=32e3, carrier_freq=32e3):
        gr.sync_block.__init__(
            self,
            name='PM_BPSK_two_level_Demodulation',
            in_sig=[np.complex64],
            out_sig=[np.int8]
        )
        self.samp_rate = samp_rate
        self.carrier_freq = carrier_freq

    def work(self, input_items, output_items):
        input_symbols = input_items[0]

        # Generate the carrier signal for demodulation
        carrier_signal = np.exp(-1j * 2 * np.pi * self.carrier_freq * np.arange(len(input_symbols)))

        # Demodulate the input symbols by multiplying with the complex conjugate of the carrier signal
        demodulated_symbols = input_symbols * np.conj(carrier_signal)

        # Extract the real part and apply sign function to recover binary data
        demodulated_bits = np.sign(np.real(demodulated_symbols))
        #demodulated_bits[demodulated_bits < 0] = 0

        # Convert to int8 and assign to output
        output_items[0][:] = demodulated_bits.astype(np.int8)

        return len(output_items[0])

class phase_demodulation_blk(gr.sync_block):
    """Phase Demodulation Block"""

    def __init__(self, samp_rate=32e3, modulation_index=0.9, subcarrier_freq=32e3, bit_rate=2e3):
        gr.sync_block.__init__(
            self,
            name='Phase Demodulation',
            in_sig=[np.complex64],
            out_sig=[np.float32]
        )
        self.samp_rate = samp_rate
        self.modulation_index = modulation_index
        self.subcarrier_freq = subcarrier_freq
        self.bit_rate = bit_rate

        self.blocks_signal_source_0 = analog.sig_source_f(self.samp_rate, analog.GR_SIN_WAVE, self.subcarrier_freq, 1, 0)

    def work(self, input_items, output_items):
        input_symbols = input_items[0]

        # Generate the carrier signal for demodulation
        carrier_signal = np.exp(1j * 2 * np.pi * self.subcarrier_freq * np.arange(len(input_symbols)))

        # Demodulate the input symbols by multiplying with the complex conjugate of the carrier signal
        demodulated_signal = input_symbols * np.conj(carrier_signal)

        # Compute the phase angle of the demodulated signal
        phase_angles = np.angle(demodulated_signal)

        # Unwrap the phase to handle phase wrapping issues
        unwrapped_phase = np.unwrap(phase_angles)

        # Differentiate the unwrapped phase to obtain the instantaneous frequency
        instantaneous_frequency = np.diff(unwrapped_phase)

        # Pad the result to make its length consistent with the input
        instantaneous_frequency = np.concatenate(([0], instantaneous_frequency))

        # Convert instantaneous frequency to float32 and assign to output
        output_items[0][:] = instantaneous_frequency.astype(np.float32)

        return len(output_items[0])

# Create a GNU Radio flowgraph
class MyFlowgraph(gr.top_block):
    def __init__(self):
        gr.top_block.__init__(self)

        # Create instances of your custom blocks
        phase_demod_block = phase_demodulation_blk()
        bpsk_demod_block = bpsk_demodulation_blk()

        # Connect the output of the phase demodulation block to the input of the BPSK demodulation block
        self.connect((phase_demod_block, 0), (bpsk_demod_block, 0))

if __name__ == "_main_":
    # Instantiate the flowgraph and run it
    flowgraph = MyFlowgraph()
    flowgraph.run()
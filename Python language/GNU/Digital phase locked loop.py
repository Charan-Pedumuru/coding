import numpy as np
import matplotlib.pyplot as plt

class SimPLL(object):
    def __init__(self, lf_bandwidth):
        self.phase_out = 0.0
        self.freq_out = 0.0
        self.vco = np.exp(1j * self.phase_out)
        self.phase_difference = 0.0
        self.bw = lf_bandwidth
        self.beta = np.sqrt(lf_bandwidth)

    def update_phase_estimate(self):
        self.vco = np.exp(1j * self.phase_out)

    def update_phase_difference(self, in_sig):
        self.phase_difference = np.angle(in_sig * np.conj(self.vco))

    def step(self, in_sig):
        self.update_phase_difference(in_sig)
        self.freq_out += self.bw * self.phase_difference
        self.phase_out += self.beta * self.phase_difference + self.freq_out
        self.update_phase_estimate()

def main():
    pll = SimPLL(0.002)
    num_samples = 500
    phi = 3.0
    frequency_offset = -0.2
    ref = []
    out = []
    diff = []
    for i in range(0, num_samples - 1):
        in_sig = np.exp(1j * phi)
        phi += frequency_offset
        pll.step(in_sig)
        ref.append(in_sig)
        out.append(pll.vco)
        diff.append(pll.phase_difference)
    plt.figure(num=0, dpi=200)
    plt.xlabel("Time (Sample Index)")
    plt.ylabel("Amplitude")
    plt.plot(ref, label="Reference Signal")
    plt.plot(out, label="VCO Output")
    plt.plot(diff, label="Phase Difference")
    plt.legend()
    plt.show()


if __name__ == "__main__":
    main()

import numpy as np
from scipy.interpolate import interp1d

# Encoder -------------------------------------------------------------------------------------------------
def v_xor(bit0, bit1):
    if bit0 == bit1:
        return 0
    else:
        return 1
#----------------------------------------------------------------------------------------------------------
def viterbi_encoder(inputs):
    s_reg = [0, 0, 0, 0, 0, 0, 0]
    encoded_output = []

    for t in range(0, len(inputs)):
        s_reg[6] = s_reg[5]
        s_reg[5] = s_reg[4]
        s_reg[4] = s_reg[3]
        s_reg[3] = s_reg[2]
        s_reg[2] = s_reg[1]
        s_reg[1] = s_reg[0]

        s_reg[0] = inputs[t] # Ensure inputs are treated as integers

        output1 = v_xor(v_xor(v_xor(v_xor(s_reg[0], s_reg[1]), s_reg[2]), s_reg[3]), s_reg[6])
        output2 = v_xor(v_xor(v_xor(v_xor(s_reg[0], s_reg[2]), s_reg[3]), s_reg[5]), s_reg[6])
        encoded_output.append(output1)
        encoded_output.append(output2)

    return encoded_output
#---------------------------------------------------------------------------------------------------------------------------
inputs=[0,0,0,1,1,1,1,1]
encoded_output=viterbi_encoder(inputs)
#print("Input Bits: ", inputs)
#print("Encoded_bits:",encoded_output)

# Modulation -----------------------------------------------------------------
def bpsk_modulate(input_bits):
    modulated_signal = []
    for bit in input_bits:
        if bit == 1:
            modulated_signal.append(1) # Positive phase for '1'
        else:
            modulated_signal.append(-1) # Negative phase for '0'
    return modulated_signal

modulated_signal = bpsk_modulate(encoded_output)
#print("Modulated signal:", modulated_signal)

# Demodulation -----------------------------------------------------------------
def bpsk_demodulate(modulated_signal):
    demodulated_bits = []
    for sample in modulated_signal:
        if sample > 0:
            demodulated_bits.append(1) # Positive phase represents '1'
        else:
            demodulated_bits.append(0) # Negative phase represents '0'
    return demodulated_bits

demodulated = bpsk_demodulate(modulated_signal)
#print("Demodulated bits:", demodulated)

#Decoder ----------------------------------------------------------------------------------------------


# Convert bits list to a string
bit_string = ''.join(map(str, demodulated))
print("String_format:",bit_string)
result = ""
for i in range(0, len(bit_string), 2):
    result += bit_string[i:i+2]

# Slicing the result into two-bit segments
two_bit_segments = [result[i:i+2] for i in range(0, len(result), 2)]
#print("two-bit:",two_bit_segments)
#---------------------------------------------------------------------------------------------------------------------------------
#STATE METRIC DEFINE THE INITISAL STATES
start_metric = {'s0': 0, 's1': 0, 's2': 0, 's3': 0, 's4': 0, 's5': 0, 's6': 0,
                's7': 0, 's8': 0, 's9': 0, 's10': 0, 's11': 0, 's12': 0, 's13': 0,
                's14': 0, 's15': 0, 's16': 0, 's17': 0, 's18': 0, 's19': 0, 's20': 0,
                's21': 0, 's22': 0, 's23': 0, 's24': 0, 's25': 0, 's26': 0, 's27': 0,
                's28': 0, 's29': 0, 's30': 0, 's31': 0, 's32': 0, 's33': 0, 's34': 0,
                's35': 0, 's36': 0, 's37': 0, 's38': 0, 's39': 0, 's40': 0, 's41': 0,
                's42': 0, 's43': 0, 's44': 0, 's45': 0, 's46': 0, 's47': 0, 's48': 0,
                's49': 0, 's50': 0, 's51': 0, 's52': 0, 's53': 0, 's54': 0, 's55': 0,
                's56': 0, 's57': 0, 's58': 0, 's59': 0, 's60': 0, 's61': 0, 's62': 0,
                's63': 0}

#FINITE STATE MACHINE FOR 64 STATES AND W.R.T CSDSS CONVENTIONS.
fsm = {

    's0': {'b1': {'out_b': '11', 'prev_st': 's1', 'input_b': 0},
           'b2': {'out_b': '00', 'prev_st': 's0', 'input_b': 0}},

    's1': {'b1': {'out_b': '10', 'prev_st': 's3', 'input_b': 0},
           'b2': {'out_b': '01', 'prev_st': 's2', 'input_b': 0}},

    's2': {'b1': {'out_b': '11', 'prev_st': 's5', 'input_b': 0},
           'b2': {'out_b': '00', 'prev_st': 's4', 'input_b': 0}},

    's3': {'b1': {'out_b': '10', 'prev_st': 's7', 'input_b': 0},
           'b2': {'out_b': '01', 'prev_st': 's6', 'input_b': 0}},

    's4': {'b1': {'out_b': '00', 'prev_st': 's9', 'input_b': 0},
           'b2': {'out_b': '11', 'prev_st': 's8', 'input_b': 0}},

    's5': {'b1': {'out_b': '01', 'prev_st': 's11', 'input_b': 0},
           'b2': {'out_b': '10', 'prev_st': 's10', 'input_b': 0}},

    's6': {'b1': {'out_b': '00', 'prev_st': 's13', 'input_b': 0},
           'b2': {'out_b': '11', 'prev_st': 's12', 'input_b': 0}},

    's7': {'b1': {'out_b': '01', 'prev_st': 's15', 'input_b': 0},
           'b2': {'out_b': '10', 'prev_st': 's14', 'input_b': 0}},

    's8': {'b1': {'out_b': '00', 'prev_st': 's17', 'input_b': 0},
           'b2': {'out_b': '11', 'prev_st': 's16', 'input_b': 0}},

    's9': {'b1': {'out_b': '01', 'prev_st': 's19', 'input_b': 0},
           'b2': {'out_b': '10', 'prev_st': 's18', 'input_b': 0}},

    's10': {'b1': {'out_b': '00', 'prev_st': 's21', 'input_b': 0},
            'b2': {'out_b': '11', 'prev_st': 's20', 'input_b': 0}},

    's11': {'b1': {'out_b': '01', 'prev_st': 's23', 'input_b': 0},
           'b2': {'out_b': '10', 'prev_st': 's22', 'input_b': 0}},

    's12': {'b1': {'out_b': '11', 'prev_st': 's25', 'input_b': 0},
           'b2': {'out_b': '00', 'prev_st': 's24', 'input_b': 0}},

    's13': {'b1': {'out_b': '10', 'prev_st': 's27', 'input_b': 0},
           'b2': {'out_b': '01', 'prev_st': 's26', 'input_b': 0}},

    's14': {'b1': {'out_b': '11', 'prev_st': 's29', 'input_b': 0},
           'b2': {'out_b': '00', 'prev_st': 's28', 'input_b': 0}},

    's15': {'b1': {'out_b': '10', 'prev_st': 's31', 'input_b': 0},
           'b2': {'out_b': '01', 'prev_st': 's30', 'input_b': 0}},

    's16': {'b1': {'out_b': '01', 'prev_st': 's33', 'input_b': 0},
           'b2': {'out_b': '10', 'prev_st': 's32', 'input_b': 0}},

    's17': {'b1': {'out_b': '00', 'prev_st': 's35', 'input_b': 0},
           'b2': {'out_b': '11', 'prev_st': 's34', 'input_b': 0}},

    's18': {'b1': {'out_b': '01', 'prev_st': 's37', 'input_b': 0},
           'b2': {'out_b': '10', 'prev_st': 's36', 'input_b': 0}},

    's19': {'b1': {'out_b': '00', 'prev_st': 's39', 'input_b': 0},
           'b2': {'out_b': '11', 'prev_st': 's38', 'input_b': 0}},

    's20': {'b1': {'out_b': '10', 'prev_st': 's41', 'input_b': 0},
           'b2': {'out_b': '01', 'prev_st': 's40', 'input_b': 0}},

    's21': {'b1': {'out_b': '11', 'prev_st': 's43', 'input_b': 0},
           'b2': {'out_b': '00', 'prev_st': 's42', 'input_b': 0}},

    's22': {'b1': {'out_b': '10', 'prev_st': 's45', 'input_b': 0},
           'b2': {'out_b': '01', 'prev_st': 's44', 'input_b': 0}},

    's23': {'b1': {'out_b': '11', 'prev_st': 's47', 'input_b': 0},
           'b2': {'out_b': '00', 'prev_st': 's46', 'input_b': 0}},

    's24': {'b1': {'out_b': '10', 'prev_st': 's49', 'input_b': 0},
           'b2': {'out_b': '01', 'prev_st': 's48', 'input_b': 0}},

    's25': {'b1': {'out_b': '11', 'prev_st': 's51', 'input_b': 0},
           'b2': {'out_b': '00', 'prev_st': 's50', 'input_b': 0}},

    's26': {'b1': {'out_b': '10', 'prev_st': 's53', 'input_b': 0},
           'b2': {'out_b': '01', 'prev_st': 's52', 'input_b': 0}},

    's27': {'b1': {'out_b': '11', 'prev_st': 's55', 'input_b': 0},
           'b2': {'out_b': '00', 'prev_st': 's54', 'input_b': 0}},

    's28': {'b1': {'out_b': '01', 'prev_st': 's57', 'input_b': 0},
           'b2': {'out_b': '10', 'prev_st': 's56', 'input_b': 0}},

    's29': {'b1': {'out_b': '00', 'prev_st': 's59', 'input_b': 0},
           'b2': {'out_b': '11', 'prev_st': 's58', 'input_b': 0}},

    's30': {'b1': {'out_b': '01', 'prev_st': 's61', 'input_b': 0},
           'b2': {'out_b': '10', 'prev_st': 's60', 'input_b': 0}},

    's31': {'b1': {'out_b': '00', 'prev_st': 's63', 'input_b': 0},
           'b2': {'out_b': '11', 'prev_st': 's62', 'input_b': 0}},

    's32': {'b1': {'out_b': '00', 'prev_st': 's1', 'input_b': 1},
           'b2': {'out_b': '11', 'prev_st': 's0', 'input_b': 1}},

    's33': {'b1': {'out_b': '01', 'prev_st': 's3', 'input_b': 1},
           'b2': {'out_b': '10', 'prev_st': 's2', 'input_b': 1}},

    's34': {'b1': {'out_b': '00', 'prev_st': 's5', 'input_b': 1},
           'b2': {'out_b': '11', 'prev_st': 's4', 'input_b': 1}},

    's35': {'b1': {'out_b': '01', 'prev_st': 's7', 'input_b': 1},
           'b2': {'out_b': '10', 'prev_st': 's6', 'input_b': 1}},

    's36': {'b1': {'out_b': '11', 'prev_st': 's9', 'input_b': 1},
           'b2': {'out_b': '00', 'prev_st': 's8', 'input_b': 1}},

    's37': {'b1': {'out_b': '10', 'prev_st': 's11', 'input_b': 1},
           'b2': {'out_b': '01', 'prev_st': 's10', 'input_b': 1}},

    's38': {'b1': {'out_b': '11', 'prev_st': 's13', 'input_b': 1},
           'b2': {'out_b': '00', 'prev_st': 's12', 'input_b': 1}},

    's39': {'b1': {'out_b': '10', 'prev_st': 's15', 'input_b': 1},
           'b2': {'out_b': '01', 'prev_st': 's14', 'input_b': 1}},

    's40': {'b1': {'out_b': '11', 'prev_st': 's17', 'input_b': 1},
           'b2': {'out_b': '00', 'prev_st': 's16', 'input_b': 1}},

    's41': {'b1': {'out_b': '10', 'prev_st': 's19', 'input_b': 1},
           'b2': {'out_b': '01', 'prev_st': 's18', 'input_b': 1}},

    's42': {'b1': {'out_b': '11', 'prev_st': 's21', 'input_b': 1},
            'b2': {'out_b': '00', 'prev_st': 's20', 'input_b': 1}},

    's43': {'b1': {'out_b': '10', 'prev_st': 's23', 'input_b': 1},
           'b2': {'out_b': '01', 'prev_st': 's22', 'input_b': 1}},

    's44': {'b1': {'out_b': '00', 'prev_st': 's25', 'input_b': 1},
           'b2': {'out_b': '11', 'prev_st': 's24', 'input_b': 1}},

    's45': {'b1': {'out_b': '01', 'prev_st': 's27', 'input_b': 1},
           'b2': {'out_b': '10', 'prev_st': 's26', 'input_b': 1}},

    's46': {'b1': {'out_b': '00', 'prev_st': 's29', 'input_b': 1},
           'b2': {'out_b': '11', 'prev_st': 's28', 'input_b': 1}},

    's47': {'b1': {'out_b': '01', 'prev_st': 's31', 'input_b': 1},
           'b2': {'out_b': '10', 'prev_st': 's30', 'input_b': 1}},

    's48': {'b1': {'out_b': '10', 'prev_st': 's33', 'input_b': 1},
           'b2': {'out_b': '01', 'prev_st': 's32', 'input_b': 1}},

    's49': {'b1': {'out_b': '11', 'prev_st': 's35', 'input_b': 1},
           'b2': {'out_b': '00', 'prev_st': 's34', 'input_b': 1}},

    's50': {'b1': {'out_b': '10', 'prev_st': 's37', 'input_b': 1},
           'b2': {'out_b': '01', 'prev_st': 's36', 'input_b': 1}},

    's51': {'b1': {'out_b': '11', 'prev_st': 's39', 'input_b': 1},
           'b2': {'out_b': '00', 'prev_st': 's38', 'input_b': 1}},

    's52': {'b1': {'out_b': '01', 'prev_st': 's41', 'input_b': 1},
           'b2': {'out_b': '10', 'prev_st': 's40', 'input_b': 1}},

    's53': {'b1': {'out_b': '00', 'prev_st': 's43', 'input_b': 1},
           'b2': {'out_b': '11', 'prev_st': 's42', 'input_b': 1}},

    's54': {'b1': {'out_b': '01', 'prev_st': 's45', 'input_b': 1},
           'b2': {'out_b': '10', 'prev_st': 's44', 'input_b': 1}},

    's55': {'b1': {'out_b': '00', 'prev_st': 's47', 'input_b': 1},
           'b2': {'out_b': '11', 'prev_st': 's46', 'input_b': 1}},

    's56': {'b1': {'out_b': '01', 'prev_st': 's49', 'input_b': 1},
           'b2': {'out_b': '10', 'prev_st': 's48', 'input_b': 1}},

    's57': {'b1': {'out_b': '00', 'prev_st': 's51', 'input_b': 1},
           'b2': {'out_b': '11', 'prev_st': 's50', 'input_b': 1}},

    's58': {'b1': {'out_b': '01', 'prev_st': 's53', 'input_b': 1},
           'b2': {'out_b': '10', 'prev_st': 's52', 'input_b': 1}},

    's59': {'b1': {'out_b': '00', 'prev_st': 's55', 'input_b': 1},
           'b2': {'out_b': '11', 'prev_st': 's54', 'input_b': 1}},

    's60': {'b1': {'out_b': '10', 'prev_st': 's57', 'input_b': 1},
           'b2': {'out_b': '01', 'prev_st': 's56', 'input_b': 1}},

    's61': {'b1': {'out_b': '11', 'prev_st': 's59', 'input_b': 1},
           'b2': {'out_b': '00', 'prev_st': 's58', 'input_b': 1}},

    's62': {'b1': {'out_b': '10', 'prev_st': 's61', 'input_b': 1},
           'b2': {'out_b': '01', 'prev_st': 's60', 'input_b': 1}},

    's63': {'b1': {'out_b': '11', 'prev_st': 's63', 'input_b': 1},
           'b2': {'out_b': '10', 'prev_st': 's62', 'input_b': 1}},

}

#-------------------------------------------------------------------------------------------------------------
def bits_diff_num(num_1, num_2):
    if not isinstance(num_1, (str, list)) or not isinstance(num_2, (str, list)):
        raise TypeError("Both inputs must be sequences (strings or lists)")

    count = 0
    min_length = min(len(num_1), len(num_2))

    for i in range(min_length):
        if num_1[i] != num_2[i]:
            count += 1

    count += abs(len(num_1) - len(num_2))

    return count

#----------------------------------------------------------------------------------------------------------------
def viterbi(obs, start_metric, state_machine):
    V = [{}]
    for st in state_machine:
        V[0][st] = {"metric": start_metric[st]}

    # Convert each observation to a 2-bit string if it's not already
    obs = [format(o, '02b') if isinstance(o, int) else o for o in obs]

    for t in range(1, len(obs) + 1):
        V.append({})
        for st in state_machine:
            prev_st = state_machine[st]['b1']['prev_st']
            first_b_metric = V[t-1][prev_st]["metric"] + bits_diff_num(state_machine[st]['b1']['out_b'], obs[t-1])
            prev_st = state_machine[st]['b2']['prev_st']
            second_b_metric = V[t-1][prev_st]["metric"] + bits_diff_num(state_machine[st]['b2']['out_b'], obs[t-1])

            if first_b_metric > second_b_metric:
                V[t][st] = {"metric": second_b_metric, "branch": 'b2'}
            else:
                V[t][st] = {"metric": first_b_metric, "branch": 'b1'}

    # Find the ending state with the smallest metric
    min_metric_state = min(V[-1], key=lambda st: V[-1][st]["metric"])
    min_metric = V[-1][min_metric_state]["metric"]

    # Backtrack to find the path
    output_bits = []
    source_state = min_metric_state
    for t in range(len(obs), 0, -1):
        branch = V[t][source_state]["branch"]
        output_bits.insert(0, state_machine[source_state][branch]['input_b'])
        source_state = state_machine[source_state][branch]['prev_st']

    return output_bits


#------------------------------------------------------------------------------------------------------------------------------------------
obs = two_bit_segments

# Measure the time it takes to encode the data
decoded_bits = viterbi(obs, start_metric, fsm)
print("Decoded bits :", decoded_bits)
print("Original input bits:", inputs)
#print("Functionality check done")


#-----------------------------------------------------------------------------------------------------------------------------------
import numpy as np
import matplotlib.pyplot as plt
from scipy.special import erfc

# Parameters
N = 10**7 #no.of bits
Eb_No_dB = np.arange(-4, 15, 1)
BER_sim = np.zeros(len(Eb_No_dB)) # Simulated Bit error rates

EbN0dBs = np.arange(start=-4, stop=15, step=1)
BER_BPSK_sim = np.zeros(len(EbN0dBs)) # Simulated Bit error rates
nSym = 10**6
# BPSK modulation parameters
M = 2 # Number of points in BPSK constellation
m = np.arange(0, M) # All possible input symbols
A = 1 # Amplitude
constellation = A * np.cos(m / M * 2 * np.pi) # Reference constellation for BPSK

# Transmitter
inputSyms = np.random.randint(low=0, high=M, size=nSym) # Random 1's and 0's as input to BPSK modulator
s = constellation[inputSyms] # Modulated symbols

for j, Eb_No in enumerate(Eb_No_dB):

    message_bits = np.random.randint(0, 2, N)
    # Encoding
    encoded_output = viterbi_encoder(message_bits)

    # Modulation
    modulated_signal = bpsk_modulate(encoded_output)

     # Add AWGN to the modulated signal
    noise_std_dev = np.sqrt(1 / (2 * 10**(Eb_No / 10)))
    noise = noise_std_dev * np.random.randn(len(modulated_signal))
    received_signal = modulated_signal + noise

    # Demodulation
    demodulated = bpsk_demodulate(received_signal) # Use your demodulation function
    bit_string = ''.join(map(str, demodulated))
    result = ""
    for i in range(0, len(bit_string), 2):
        result += bit_string[i:i+2]
    two_bit_segments = [result[i:i+2] for i in range(0, len(result), 2)]
    demodulated=two_bit_segments
    # Decoding
    decoded_bits = viterbi(demodulated, start_metric, fsm)


    # BER calculation
    BER_sim[j] = np.sum(decoded_bits[:N] != message_bits) / float(N)
    print(f"SNR: {Eb_No_dB} dB, BER: {BER_sim[j]}")

# Channel
for j, EbN0dB in enumerate(EbN0dBs):
    gamma = 10**(EbN0dB / 10) # SNRs to linear scale
    P = sum(abs(s)**2) / len(s) # Actual power in the vector
    N0 = P / gamma # Find the noise spectral density
    n = np.sqrt(N0 / 2) * np.random.standard_normal(s.shape) # Computed noise vector
    r = s + n # Received signal

    # Receiver
    detectedSyms = (r <= 0).astype(int) # Thresholding at value 0
    BER_BPSK_sim[j] = np.sum(detectedSyms != inputSyms) / nSym # Calculate BER
    print(f"SNR_BPSK: {EbN0dBs} dB, BER_BPSK: {BER_BPSK_sim[j]}")


# BER_theory calculation for BPSK over AWGN (if needed)
BER_theory = 0.5*erfc(np.sqrt(10**(Eb_No_dB/10)))

interp_sim = interp1d(BER_sim[::-1], Eb_No_dB[::-1], fill_value="extrapolate")
interp_theory = interp1d(BER_theory[::-1], Eb_No_dB[::-1], fill_value="extrapolate")
snr_at_ber_1e_4_sim = interp_sim(1e-4)
snr_at_ber_1e_4_theory = interp_theory(1e-4)
print(f"Estimated SNR for simulated BER = 10^-4: {snr_at_ber_1e_4_sim} dB")
print(f"Estimated SNR for theoretical BER = 10^-4: {snr_at_ber_1e_4_theory} dB")

# Plotting
plt.figure()
plt.semilogy(EbN0dBs, BER_BPSK_sim, color='r', marker='o', linestyle='', label='Simulated Uncoded_BPSK')
plt.semilogy(Eb_No_dB, BER_sim, color='g', marker='o', linestyle='', label='Simulated BER-CC(1/2,7)')
plt.semilogy(Eb_No_dB, BER_theory, marker='', linestyle='-', label='Theoretical UNcoded_BPSK ')
plt.xlabel('$E_b/N_0(dB)$')
plt.ylabel('BER ($P_b$)')
plt.title('Bit Error Rate for Convolutional Code over AWGN Channel')
plt.grid(True)
plt.legend()
plt.show()
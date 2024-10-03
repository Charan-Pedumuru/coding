import numpy as np
from scipy.interpolate import interp1d

def v_xor(bit0, bit1):
    if bit0 == bit1:
        return 0
    else:
        return 1

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


#------------------------------------------------------------------------------------------------------------------------------------------
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


inputs=[1,0,0,1,0,1,1,0,1,0,0,0,1,1,0,1,0,1,0,1,1,1,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,0,0,1,1,0,1,0,1,0,1,1,1,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,0,0,1,1,0,1,0,1,0,1,1,1,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,0,0,1,1,0,1,0,1,0,1,1,1,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,0,0,1,1,0,1,0,1,0,1,1,1,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,0,0,1,1,0,1,0,1,0,1,1,1,0,0,1,1,0,1,0,1,0,1
]
encoded_output=viterbi_encoder(inputs)

print("Encoder output : ",encoded_output)

def flip_array(encoded_output):

  flipped_array = []
  for element in encoded_output:
    if element == 1:
      flipped_array.append(0)
    else:
      flipped_array.append(1)
  return flipped_array

flipped_array = flip_array(encoded_output)
print("flipped_array : " ,flipped_array)

bit_string = ''.join(map(str, flipped_array))
print("String_format:",bit_string)
result = ""
for i in range(0, len(bit_string), 2):
    result += bit_string[i:i+2]

# Slicing the result into two-bit segments
two_bit_segments = [result[i:i+2] for i in range(0, len(result), 2)]
obs = two_bit_segments

# Measure the time it takes to encode the data
decoded_bits = viterbi(obs, start_metric, fsm)
dec_bit=flip_array(decoded_bits)
print("Decoded bits :", dec_bit)
print("Original input bits:", inputs)


# plt.figure()
# plt.semilogy(Eb_No_dB, BER_sim, color='g', marker='o', linestyle='', label='Simulated BER-CC(1/2,7)')
# plt.xlabel('$E_b/N_0(dB)$')
# plt.ylabel('BER ($P_b$)')
# plt.title('Bit Error Rate for Convolutional Code over AWGN Channel')
# plt.grid(True)
# plt.legend()
# plt.show()
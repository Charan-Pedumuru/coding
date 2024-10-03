import numpy as np
import matplotlib.pyplot as plt

def generate_hamming_matrix(n):
    k = n - int(np.log2(n)) - 1
    H = np.zeros((n-k, n))
    for i in range(n-k):
        for j in range(n):
            if ((j+1) & (1 << i)) != 0:
                H[i,j] = 1
    return H

def hamming_encode(msg):
    n = 7
    k = 4
    G = np.array([[1,0,0,0,1,1,1],[0,1,0,0,1,0,1],[0,0,1,0,1,1,0],[0,0,0,1,0,1,1]])
    codeword = np.mod(np.dot(msg, G), 2)
    return codeword

def hamming_decode(received):
    n = 7
    k = 4
    H = generate_hamming_matrix(n)
    syndrome = np.mod(np.dot(H, received), 2)
    error = -1
    for i in range(n):
        if np.array_equal(syndrome, H[:,i]):
            error = i
            break
    if error >= 0:
        received[error] = (received[error] + 1) % 2
    decoded = received[:k]
    return decoded

def simulate_channel(msg, snr_db):
    snr = 10**(snr_db/10)
    sigma = np.sqrt(1/(2*snr))
    noise = sigma * np.random.randn(*msg.shape)
    received = msg + noise
    return received

def calculate_ber(msg, decoded):
    errors = 0
    for i in range(len(msg)):
        errors += np.sum(msg[i] != decoded[i])
    ber = errors / (len(msg) * len(msg[0]))
    return ber

# Main program
msg_len = 100000
snr_range_db = np.arange(0, 11, 1)
uncoded_ber = np.zeros(len(snr_range_db))
coded_ber = np.zeros(len(snr_range_db))

for i in range(len(snr_range_db)):
    snr_db = snr_range_db[i]
    msg = np.random.randint(2, size=(msg_len, 4))
    
    # Uncoded transmission
    received = simulate_channel(msg, snr_db)
    decoded = received.round().astype(int)
    uncoded_ber[i] = calculate_ber(msg, decoded)
    
    # Coded transmission
    codeword = np.zeros((msg_len, 7))
    for j in range(msg_len):
        codeword[j,:] = hamming_encode(msg[j,:])
    received = simulate_channel(codeword, snr_db)
    decoded = np.zeros((msg_len, 4))
    for j in range(msg_len):
        decoded[j,:] = hamming_decode(received[j,:])
    coded_ber[i] = calculate_ber(msg, decoded)
    
    # Print encoded and decoded messages for the first transmission
    if i == 0:
        print("Uncoded transmission")
        print("Original message: ", msg[0])
        print("Decoded message: ", decoded[0])
        print("Coded transmission")
        print("Original message: ", msg[0])
        print("Encoded message: ", codeword[0])
        print("Decoded message: ", decoded[0])

# Plot BER vs SNR
plt.semilogy(snr_range_db, uncoded_ber, label='Uncoded')
plt.semilogy(snr_range_db, coded_ber, label='Coded')
plt.xlabel('SNR (dB)')
plt.ylabel('BER')
plt.title('BER vs SNR for Hamming Code (7,4)')
plt.legend()
plt.show()

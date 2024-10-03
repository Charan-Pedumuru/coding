# Function to create a telemetry packet
def create_telemetry_packet():
    # Initialize the packet header values
    version_no = 0b00
    type_indicator = 0b0
    secondary_header_flag = 0b0
    app_process_id = 0x07FF
    grouping_flags = 0b00
    source_seq_count = 0x3FFF
    
    # Calculate the header values
    header1 = (version_no) | (type_indicator) | (secondary_header_flag) | app_process_id
    header2 = (grouping_flags) | source_seq_count
    
    # Convert header values to bytes
    header_bytes = header1.to_bytes(2, 'big') + header2.to_bytes(2, 'big')
    print(header_bytes.hex())
    
    # Input the source data
    source_data = 'Hello!'#input("Enter SOURCE DATA: ")
    
    # Create the telemetry packet by concatenating the header, source data, and calculating the data length
    data_length = len(source_data)
    packet = header_bytes + data_length.to_bytes(2, 'big') + source_data.encode()
    
    print(source_data.encode())
    
    # Add the ASM header (assuming a 16-bit ASM value)
    asm_header = 0x1ACFFC1D  # Replace with your ASM header value
    #print(asm_header.to_bytes(4,'big').hex())
    packet = asm_header.to_bytes(4, 'big') + packet
    binary_representation = bin(packet)
    binary_representation = binary_representation[2:]
    
    return binary_representation

# Example usage
telemetry_packet = create_telemetry_packet()
print("Generated Telemetry Packet:")
print(telemetry_packet.hex())
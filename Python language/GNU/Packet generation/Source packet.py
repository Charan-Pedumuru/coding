import struct

# CCSDS Packet Header
class CCSDSPacketHeader:
    def __init__(self, apid, sequence_count):
        self.sync_marker = 0x1ACFFC1D
        self.version = 0b00
        self.packet_type = 0b00000
        self.secondary_header_flag = 0b0
        self.apid = apid & 0x07FF
        self.sequence_flags = 0b00
        self.sequence_count = sequence_count & 0x3FFF

    def pack(self):
        return struct.pack('!QH', self.sync_marker, ((self.version << 1) | self.packet_type) << 9 | (self.secondary_header_flag << 8) | self.apid)

# Data to be sent in the packet
data = b"Hello, World!"

# APID (Application Process ID) and Sequence Count
apid = 0x123
sequence_count = 0x4567

# Create a CCSDS Packet Header
packet_header = CCSDSPacketHeader(apid, sequence_count)

# Pack the header
header_bytes = packet_header.pack()

# Combine the header and data
ccsds_packet = header_bytes + data

# Print the binary representation of the packet
print(ccsds_packet)

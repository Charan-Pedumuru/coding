tf_version_no = 0b00
space_craft_id = 0b1111111111
virtual_channel_id = 0b111
open_control_field_flag = 0b0
master_channel_frame_count = 0b00000000
virtual_channel_frame_count = 0b1111111111
tf_frame_sec_head = 0b0
synch_flag = 0b1
packet_order_flag = 0b0
segment_len_id = 0b00
first_header_pointer = 0b11111111111
tf_sec_header_ver_no = 0b00
tf_sec_header_length = 0b000011
tf_sec_header_data = 0b00001111

result = (tf_version_no << 24) | (space_craft_id << 13) | (virtual_channel_id << 10) | (open_control_field_flag << 9) | (master_channel_frame_count << 1) | virtual_channel_frame_count
result = (result << 1) | tf_frame_sec_head
result = (result << 1) | synch_flag
result = (result << 1) | packet_order_flag
result = (result << 2) | segment_len_id
result = (result << 11) | first_header_pointer
result = (result << 2) | tf_sec_header_ver_no
result = (result << 6) | tf_sec_header_length
result = (result << 4) | tf_sec_header_data

asm_header = 0x1ACFFC1D

header_bytes = asm_header.to_bytes(4, 'big') + result.to_bytes(8, 'big')
space_craft_application_data = 'packet'
packet = header_bytes + space_craft_application_data.encode()

print(packet.hex())
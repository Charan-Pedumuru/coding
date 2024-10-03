import numpy
from gnuradio import gr
import pmt
from satellites import telemetry
import array
from collections import deque

class telemetry_primaryheader_adder(gr.basic_block):
    
    def __init__(self, asm= None, transfer_frame_version_number=None, spacecraft_id=None, virtual_channel_id=None, ocf_flag=None,  master_channel_frame_count=None,
                 virtual_channel_frame_count=None, transfer_frame_secondary_header_flag=None, synch_flag=None, packet_order_flag=None, segment_length_id=None,
                 first_header_pointer=None, secondary_header_versio_no =None,secondary_header_length=None,secondary_header_data=None, spacecraft_application_data=None,ocf_data=None,frame_error_control_field_data=None, num_of_octets=0):
        gr.basic_block.__init__(self,
            name="Telemetry Primary header adder",
            in_sig=[],
            out_sig=[])

        ##################################################
        # Parameters
        ##################################################
        num_of_octets += 1
        self.asm = asm
        self.transfer_frame_version_number = 0
        self.spacecraft_id = spacecraft_id
        self.virtual_channel_id = virtual_channel_id
        self.ocf_flag = ocf_flag
        self.master_channel_frame_count = master_channel_frame_count
        self.virtual_channel_frame_count = virtual_channel_frame_count
        self.transfer_frame_secondary_header_flag = transfer_frame_secondary_header_flag
        self.synch_flag = synch_flag
        self.packet_order_flag = packet_order_flag
        self.segment_length_id = segment_length_id
        self.first_header_pointer = 0

        self.secondary_header_versio_no = secondary_header_versio_no
        self.secondary_header_length = secondary_header_length
        self.secondary_header_data = secondary_header_data
        self.spacecraft_application_data = spacecraft_application_data
        self.ocf_data = ocf_data
        self.frame_error_control_field_data = frame_error_control_field_data

    
        self.num_of_octets = num_of_octets
        ##################################################
        # Variables
        ##################################################
        self.list = []
        self.size = self.num_of_octets
        ##################################################
        # Blocks
        ##################################################
        self.message_port_register_in(pmt.intern('in'))
        self.set_msg_handler(pmt.intern('in'), self.handle_msg)
        self.message_port_register_out(pmt.intern('out'))

    def handle_msg(self, msg_pmt):
        msg = pmt.cdr(msg_pmt)
        if not pmt.is_u8vector(msg):
            print("[ERROR] Received invalid message type. Expected u8vector")
            return
        packet = pmt.u8vector_elements(msg)

        next_pointer = 0

        while len(packet) > 0:
            limit = self.size - len(self.list)
            if len(packet) > limit:
                if len(packet) >= limit + self.size:
                    next_pointer = 0x3ff
                else:
                    next_pointer = len(packet) - limit
            elif len(packet) == limit:
                next_pointer = 0

            self.list.extend(packet[:limit])
            packet = packet[limit:]

            if len(self.list) == self.size:
                finalPacket = numpy.append(self.calculateFinalHeader(), self.list)
                self.sendPacket(finalPacket)
                self.list = []
                self.first_header_pointer = next_pointer

    def sendPacket(self, packet):
        packet = array.array('B', packet[:])
        packet = pmt.cons(pmt.PMT_NIL, pmt.init_u8vector(len(packet), packet))
        self.message_port_pub(pmt.intern('out'), packet)


    def calculateFinalHeader(self):
        finalHeader = array.array('B', telemetry.PrimaryHeader.build(dict(asm = self.asm,
                                                                          transfer_frame_version_number = self.transfer_frame_version_number,
                                                                          spacecraft_id = self.spacecraft_id,
                                                                          virtual_channel_id = self.virtual_channel_id,
                                                                          ocf_flag = self.ocf_flag,
                                                                          master_channel_frame_count = self.master_channel_frame_count,
                                                                          virtual_channel_frame_count = self.virtual_channel_frame_count,
                                                                          transfer_frame_secondary_header_flag = self.transfer_frame_secondary_header_flag,
                                                                          synch_flag = self.synch_flag,
                                                                          packet_order_flag = self.packet_order_flag,
                                                                          segment_length_id = self.segment_length_id,
                                                                          first_header_pointer = self.first_header_pointer,
                                                                          secondary_header_versio_no = self.secondary_header_versio_no,
                                                                          secondary_header_length = self.secondary_header_length,
                                                                          secondary_header_data = self.secondary_header_data,
                                                                          spacecraft_application_data = self.spacecraft_application_data,
                                                                          ocf_data = self.ocf_data,
                                                                          frame_error_control_field_data = self.frame_error_control_field_data)))
        return finalHeader
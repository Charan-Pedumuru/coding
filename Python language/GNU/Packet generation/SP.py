import numpy
from gnuradio import gr
import pmt
from satellites import telemetry
import array
from collections import deque

class source_packet_format(gr.basic_block):
    
    def __init__(self,version_no=None,type_indicator=None,secondary_header_flag=None, app_process_id=None, grouping_flags=None, source_seq_count=None,packet_data_length=None,packet_sec_header = None,num_of_octets=0):
        gr.basic_block.__init__(self,
            name="Source Packet",
            in_sig=[],
            out_sig=[])

        ##################################################
        # Parameters
        ##################################################
        num_of_octets += 1
        self.version_no = 0
        self.type_indicator = 0
        self.secondary_header_flag = 0
        self.app_process_id = app_process_id
        self.grouping_flags = grouping_flags
        self.source_seq_count = source_seq_count
        self.packet_data_length = packet_data_length
        self.packet_sec_header = packet_sec_header

    
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
        finalHeader = array.array('B', telemetry.PrimaryHeader.build(dict(version_no = self.version_no,
                                                                          type_indicator = self.type_indicator,
                                                                          secondary_header_flag = self.secondary_header_flag,
                                                                          app_process_id = self.app_process_id,
                                                                          grouping_flags = self.grouping_flags,
                                                                          source_seq_count = self.source_seq_count,
                                                                          source_data = self.source_data,
                                                                          packet_data_length = self.packet_data_length,
                                                                          packet_sec_header = self.packet_sec_header)))
        return finalHeader
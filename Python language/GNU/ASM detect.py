import numpy as np
from gnuradio import gr
import pmt

class blk_correlate_access_code(gr.sync_block):

  def __init__(self, access_code_str="1a cf fc 1d", threshold=0.0):

    access_code_hex = access_code_str.split()  
    access_code = [int(x, 16) for x in access_code_hex]  

    self.access_code = np.array(access_code, dtype=np.uint8) 

    gr.sync_block.__init__(
      self,
      name='ASM detector', 
      in_sig=[np.uint8],
      out_sig=[]  
    )

    self.threshold = threshold
    self.found_access_code = False
    self.correlation=0
    #self.message_port_register_in(pmt.intern('in'))
    #self.set_msg_handler(pmt.intern('in'), self.handle_msg)
    self.message_port_register_out(pmt.intern('OK'))
    self.message_port_register_out(pmt.intern('Fail'))
  def work(self, input_items, output_items):

    sample = np.frombuffer(input_items[0][:4], dtype=np.uint8)

    self.correlation = np.abs(np.correlate(self.access_code, sample))


    return len(input_items[0])
    
  def get_access_code_found(self):

    return self.found_access_code

  def handle_msg(self, msg_pmt):
    msg = pmt.cdr(msg_pmt)
    if not pmt.is_u8vector(msg):
        print("[ERROR] Received invalid message type. Expected u8vector")
        return
    packet = bytes(pmt.u8vector_elements(msg))
    if self.correlation > self.threshold and self.correlation <=100:
      self.found_access_code = True
      #print("Correlation:", self.correlation)
      print("ASM detected :", self.found_access_code)
      self.message_port_pub(pmt.intern('OK'),msg_pmt)

    else:
      self.found_access_code = False
      #print("Correlation:", self.correlation)
      print("ASM detected :", self.found_access_code)
      self.message_port_pub(pmt.intern('Fail'),msg_pmt)
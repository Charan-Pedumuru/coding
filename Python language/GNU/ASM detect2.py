import numpy as np
from gnuradio import gr


class blk_correlate_access_code(gr.sync_block):

  def __init__(self, access_code_str="1a cf fc 1d", threshold=0.0, print_interval=100):

    access_code_hex = access_code_str.split()  # Split on spaces
    access_code = [int(x, 16) for x in access_code_hex]  # Convert each hex string to integer

    self.access_code = np.array(access_code, dtype=np.uint8)  # Convert to NumPy array

    gr.sync_block.__init__(
      self,
      name='Correlate Access Code',  # Block name in GRC
      in_sig=[np.uint8],
      out_sig=[]  # This block doesn't produce output
    )

    self.threshold = threshold
    self.found_access_code = False

  def work(self, input_items, output_items):

    sample = np.frombuffer(input_items[0][:4], dtype=np.uint8)

    correlation = np.abs(np.correlate(self.access_code, sample))

    # Check if correlation exceeds threshold
    if correlation > self.threshold and correlation != 0.0 and correlation > 90:
      self.found_access_code = True
      print("Correlation:", correlation)
      print("ACM detected :", self.found_access_code)
    else:
      self.found_access_code = False
      print("Correlation:", correlation)
      print("ACM detected :", self.found_access_code)

    return len(input_items[0])

  def get_access_code_found(self):

    return self.found_access_code

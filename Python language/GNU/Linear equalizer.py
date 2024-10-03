#!/usr/bin/env python
#
# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#
#

from gnuradio import gr, gr_unittest

import random
import numpy
from gnuradio import digital, blocks, channels


class qa_linear_equalizer(gr_unittest.TestCase):

    def unpack_values(self, values_in, bits_per_value, bits_per_symbol):
        # verify that 8 is divisible by bits_per_symbol
        m = bits_per_value / bits_per_symbol
        # print(m)
        mask = 2**(bits_per_symbol) - 1

        if bits_per_value != m * bits_per_symbol:
            print(
                "error - bits per symbols must fit nicely into bits_per_value bit values")
            return []

        num_values = len(values_in)
        num_symbols = int(num_values * (m))

        cur_byte = 0
        cur_bit = 0
        out = []
        for i in range(num_symbols):
            s = (
                values_in[cur_byte] >> (
                    bits_per_value -
                    bits_per_symbol -
                    cur_bit)) & mask
            out.append(s)
            cur_bit += bits_per_symbol

            if cur_bit >= bits_per_value:
                cur_bit = 0
                cur_byte += 1

        return out

    def map_symbols_to_constellation(self, symbols, cons):
        l = list(map(lambda x: cons.points()[x], symbols))
        return l

    def setUp(self):
        random.seed(987654)
        self.tb = gr.top_block()
        self.num_data = num_data = 10000

        self.sps = sps = 4
        self.eb = eb = 0.35
        self.preamble = preamble = [
            0x27,
            0x2F,
            0x18,
            0x5D,
            0x5B,
            0x2A,
            0x3F,
            0x71,
            0x63,
            0x3C,
            0x17,
            0x0C,
            0x0A,
            0x41,
            0xD6,
            0x1F,
            0x4C,
            0x23,
            0x65,
            0x68,
            0xED,
            0x1C,
            0x77,
            0xA7,
            0x0E,
            0x0A,
            0x9E,
            0x47,
            0x82,
            0xA4,
            0x57,
            0x24,
        ]

        self.payload_size = payload_size = 300  # bytes
        self.data = data = [0] * 4 + \
            [random.getrandbits(8) for i in range(payload_size)]
        self.gain = gain = .001  # LMS gain
        self.corr_thresh = corr_thresh = 3e6
        self.num_taps = num_taps = 16

    def tearDown(self):
        self.tb = None

    def transform(self, src_data, const, alg):
        src = blocks.vector_source_c(src_data, False)
        leq = digital.linear_equalizer(
            4,
            1,
            alg,
            True,
            [],
            '')
        dst = blocks.vector_sink_c()
        self.tb.connect(src, leq, dst)
        self.tb.run()
        return dst.data()


if __name__ == '__main__':
    gr_unittest.run(qa_linear_equalizer)
static void femul(uint32_t out[16], const uint32_t in1[16], const uint32_t in2[16]) {
  { const uint32_t x32 = in1[15];
  { const uint32_t x33 = in1[14];
  { const uint32_t x31 = in1[13];
  { const uint32_t x29 = in1[12];
  { const uint32_t x27 = in1[11];
  { const uint32_t x25 = in1[10];
  { const uint32_t x23 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x62 = in2[15];
  { const uint32_t x63 = in2[14];
  { const uint32_t x61 = in2[13];
  { const uint32_t x59 = in2[12];
  { const uint32_t x57 = in2[11];
  { const uint32_t x55 = in2[10];
  { const uint32_t x53 = in2[9];
  { const uint32_t x51 = in2[8];
  { const uint32_t x49 = in2[7];
  { const uint32_t x47 = in2[6];
  { const uint32_t x45 = in2[5];
  { const uint32_t x43 = in2[4];
  { const uint32_t x41 = in2[3];
  { const uint32_t x39 = in2[2];
  { const uint32_t x37 = in2[1];
  { const uint32_t x35 = in2[0];
  { uint64_t x64 = (((uint64_t)(x19 + x32) * (x49 + x62)) - ((uint64_t)x19 * x49));
  { uint64_t x65 = ((((uint64_t)(x17 + x33) * (x49 + x62)) + ((uint64_t)(x19 + x32) * (x47 + x63))) - (((uint64_t)x17 * x49) + ((uint64_t)x19 * x47)));
  { uint64_t x66 = ((((uint64_t)(x15 + x31) * (x49 + x62)) + (((uint64_t)(x17 + x33) * (x47 + x63)) + ((uint64_t)(x19 + x32) * (x45 + x61)))) - (((uint64_t)x15 * x49) + (((uint64_t)x17 * x47) + ((uint64_t)x19 * x45))));
  { uint64_t x67 = ((((uint64_t)(x13 + x29) * (x49 + x62)) + (((uint64_t)(x15 + x31) * (x47 + x63)) + (((uint64_t)(x17 + x33) * (x45 + x61)) + ((uint64_t)(x19 + x32) * (x43 + x59))))) - (((uint64_t)x13 * x49) + (((uint64_t)x15 * x47) + (((uint64_t)x17 * x45) + ((uint64_t)x19 * x43)))));
  { uint64_t x68 = ((((uint64_t)(x11 + x27) * (x49 + x62)) + (((uint64_t)(x13 + x29) * (x47 + x63)) + (((uint64_t)(x15 + x31) * (x45 + x61)) + (((uint64_t)(x17 + x33) * (x43 + x59)) + ((uint64_t)(x19 + x32) * (x41 + x57)))))) - (((uint64_t)x11 * x49) + (((uint64_t)x13 * x47) + (((uint64_t)x15 * x45) + (((uint64_t)x17 * x43) + ((uint64_t)x19 * x41))))));
  { uint64_t x69 = Op (Syntax.IdWithAlt Syntax.TZ (Syntax.TWord 6) (Syntax.TWord 6)) (((((uint64_t)(x9 + x25) * (x49 + x62)) +ℤ (((uint64_t)(x11 + x27) * (x47 + x63)) + (((uint64_t)(x13 + x29) * (x45 + x61)) + (((uint64_t)(x15 + x31) * (x43 + x59)) + (((uint64_t)(x17 + x33) * (x41 + x57)) + ((uint64_t)(x19 + x32) * (x39 + x55))))))) -ℤ (((uint64_t)x9 * x49) + (((uint64_t)x11 * x47) + (((uint64_t)x13 * x45) + (((uint64_t)x15 * x43) + (((uint64_t)x17 * x41) + ((uint64_t)x19 * x39))))))), (((((uint64_t)x9 * x62) + (((uint64_t)x11 * x63) + (((uint64_t)x13 * x61) + (((uint64_t)x15 * x59) + (((uint64_t)x17 * x57) + ((uint64_t)x19 * x55)))))) + (((uint64_t)x25 * x49) + (((uint64_t)x27 * x47) + (((uint64_t)x29 * x45) + (((uint64_t)x31 * x43) + (((uint64_t)x33 * x41) + ((uint64_t)x32 * x39))))))) + (((uint64_t)x25 * x62) + (((uint64_t)x27 * x63) + (((uint64_t)x29 * x61) + (((uint64_t)x31 * x59) + (((uint64_t)x33 * x57) + ((uint64_t)x32 * x55))))))));
  { uint64_t x70 = Op (Syntax.IdWithAlt Syntax.TZ (Syntax.TWord 6) (Syntax.TWord 6)) (((((uint64_t)(x7 + x23) * (x49 + x62)) +ℤ (((uint64_t)(x9 + x25) * (x47 + x63)) +ℤ (((uint64_t)(x11 + x27) * (x45 + x61)) + (((uint64_t)(x13 + x29) * (x43 + x59)) + (((uint64_t)(x15 + x31) * (x41 + x57)) + (((uint64_t)(x17 + x33) * (x39 + x55)) + ((uint64_t)(x19 + x32) * (x37 + x53)))))))) -ℤ (((uint64_t)x7 * x49) + (((uint64_t)x9 * x47) + (((uint64_t)x11 * x45) + (((uint64_t)x13 * x43) + (((uint64_t)x15 * x41) + (((uint64_t)x17 * x39) + ((uint64_t)x19 * x37)))))))), (((((uint64_t)x7 * x62) + (((uint64_t)x9 * x63) + (((uint64_t)x11 * x61) + (((uint64_t)x13 * x59) + (((uint64_t)x15 * x57) + (((uint64_t)x17 * x55) + ((uint64_t)x19 * x53))))))) + (((uint64_t)x23 * x49) + (((uint64_t)x25 * x47) + (((uint64_t)x27 * x45) + (((uint64_t)x29 * x43) + (((uint64_t)x31 * x41) + (((uint64_t)x33 * x39) + ((uint64_t)x32 * x37)))))))) + (((uint64_t)x23 * x62) + (((uint64_t)x25 * x63) + (((uint64_t)x27 * x61) + (((uint64_t)x29 * x59) + (((uint64_t)x31 * x57) + (((uint64_t)x33 * x55) + ((uint64_t)x32 * x53)))))))));
  { ℤ x71 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) (((((uint64_t)(x5 + x21) * (x49 + x62)) +ℤ (((uint64_t)(x7 + x23) * (x47 + x63)) +ℤ (((uint64_t)(x9 + x25) * (x45 + x61)) +ℤ (((uint64_t)(x11 + x27) * (x43 + x59)) + (((uint64_t)(x13 + x29) * (x41 + x57)) + (((uint64_t)(x15 + x31) * (x39 + x55)) + (((uint64_t)(x17 + x33) * (x37 + x53)) + ((uint64_t)(x19 + x32) * (x35 + x51))))))))) -ℤ (((uint64_t)x5 * x49) + (((uint64_t)x7 * x47) + (((uint64_t)x9 * x45) + (((uint64_t)x11 * x43) + (((uint64_t)x13 * x41) + (((uint64_t)x15 * x39) + (((uint64_t)x17 * x37) + ((uint64_t)x19 * x35))))))))), (((((uint64_t)x5 * x62) + (((uint64_t)x7 * x63) + (((uint64_t)x9 * x61) + (((uint64_t)x11 * x59) + (((uint64_t)x13 * x57) + (((uint64_t)x15 * x55) + (((uint64_t)x17 * x53) + ((uint64_t)x19 * x51)))))))) + (((uint64_t)x21 * x49) + (((uint64_t)x23 * x47) + (((uint64_t)x25 * x45) + (((uint64_t)x27 * x43) + (((uint64_t)x29 * x41) + (((uint64_t)x31 * x39) + (((uint64_t)x33 * x37) + ((uint64_t)x32 * x35))))))))) +ℤ (((uint64_t)x21 * x62) + (((uint64_t)x23 * x63) + (((uint64_t)x25 * x61) + (((uint64_t)x27 * x59) + (((uint64_t)x29 * x57) + (((uint64_t)x31 * x55) + (((uint64_t)x33 * x53) + ((uint64_t)x32 * x51))))))))));
  { uint64_t x72 = Op (Syntax.IdWithAlt Syntax.TZ (Syntax.TWord 6) (Syntax.TWord 6)) (((((uint64_t)(x5 + x21) * (x47 + x63)) +ℤ (((uint64_t)(x7 + x23) * (x45 + x61)) +ℤ (((uint64_t)(x9 + x25) * (x43 + x59)) + (((uint64_t)(x11 + x27) * (x41 + x57)) + (((uint64_t)(x13 + x29) * (x39 + x55)) + (((uint64_t)(x15 + x31) * (x37 + x53)) + ((uint64_t)(x17 + x33) * (x35 + x51)))))))) -ℤ (((uint64_t)x5 * x47) + (((uint64_t)x7 * x45) + (((uint64_t)x9 * x43) + (((uint64_t)x11 * x41) + (((uint64_t)x13 * x39) + (((uint64_t)x15 * x37) + ((uint64_t)x17 * x35)))))))), (((((uint64_t)x5 * x63) + (((uint64_t)x7 * x61) + (((uint64_t)x9 * x59) + (((uint64_t)x11 * x57) + (((uint64_t)x13 * x55) + (((uint64_t)x15 * x53) + ((uint64_t)x17 * x51))))))) + (((uint64_t)x21 * x47) + (((uint64_t)x23 * x45) + (((uint64_t)x25 * x43) + (((uint64_t)x27 * x41) + (((uint64_t)x29 * x39) + (((uint64_t)x31 * x37) + ((uint64_t)x33 * x35)))))))) + (((uint64_t)x21 * x63) + (((uint64_t)x23 * x61) + (((uint64_t)x25 * x59) + (((uint64_t)x27 * x57) + (((uint64_t)x29 * x55) + (((uint64_t)x31 * x53) + ((uint64_t)x33 * x51)))))))));
  { uint64_t x73 = Op (Syntax.IdWithAlt Syntax.TZ (Syntax.TWord 6) (Syntax.TWord 6)) (((((uint64_t)(x5 + x21) * (x45 + x61)) +ℤ (((uint64_t)(x7 + x23) * (x43 + x59)) + (((uint64_t)(x9 + x25) * (x41 + x57)) + (((uint64_t)(x11 + x27) * (x39 + x55)) + (((uint64_t)(x13 + x29) * (x37 + x53)) + ((uint64_t)(x15 + x31) * (x35 + x51))))))) -ℤ (((uint64_t)x5 * x45) + (((uint64_t)x7 * x43) + (((uint64_t)x9 * x41) + (((uint64_t)x11 * x39) + (((uint64_t)x13 * x37) + ((uint64_t)x15 * x35))))))), (((((uint64_t)x5 * x61) + (((uint64_t)x7 * x59) + (((uint64_t)x9 * x57) + (((uint64_t)x11 * x55) + (((uint64_t)x13 * x53) + ((uint64_t)x15 * x51)))))) + (((uint64_t)x21 * x45) + (((uint64_t)x23 * x43) + (((uint64_t)x25 * x41) + (((uint64_t)x27 * x39) + (((uint64_t)x29 * x37) + ((uint64_t)x31 * x35))))))) + (((uint64_t)x21 * x61) + (((uint64_t)x23 * x59) + (((uint64_t)x25 * x57) + (((uint64_t)x27 * x55) + (((uint64_t)x29 * x53) + ((uint64_t)x31 * x51))))))));
  { uint64_t x74 = ((((uint64_t)(x5 + x21) * (x43 + x59)) + (((uint64_t)(x7 + x23) * (x41 + x57)) + (((uint64_t)(x9 + x25) * (x39 + x55)) + (((uint64_t)(x11 + x27) * (x37 + x53)) + ((uint64_t)(x13 + x29) * (x35 + x51)))))) - (((uint64_t)x5 * x43) + (((uint64_t)x7 * x41) + (((uint64_t)x9 * x39) + (((uint64_t)x11 * x37) + ((uint64_t)x13 * x35))))));
  { uint64_t x75 = ((((uint64_t)(x5 + x21) * (x41 + x57)) + (((uint64_t)(x7 + x23) * (x39 + x55)) + (((uint64_t)(x9 + x25) * (x37 + x53)) + ((uint64_t)(x11 + x27) * (x35 + x51))))) - (((uint64_t)x5 * x41) + (((uint64_t)x7 * x39) + (((uint64_t)x9 * x37) + ((uint64_t)x11 * x35)))));
  { uint64_t x76 = ((((uint64_t)(x5 + x21) * (x39 + x55)) + (((uint64_t)(x7 + x23) * (x37 + x53)) + ((uint64_t)(x9 + x25) * (x35 + x51)))) - (((uint64_t)x5 * x39) + (((uint64_t)x7 * x37) + ((uint64_t)x9 * x35))));
  { uint64_t x77 = ((((uint64_t)(x5 + x21) * (x37 + x53)) + ((uint64_t)(x7 + x23) * (x35 + x51))) - (((uint64_t)x5 * x37) + ((uint64_t)x7 * x35)));
  { uint64_t x78 = (((uint64_t)(x5 + x21) * (x35 + x51)) - ((uint64_t)x5 * x35));
  { ℤ x79 = (((((uint64_t)x19 * x49) + ((uint64_t)x32 * x62)) +ℤ x72) +ℤ x64);
  { ℤ x80 = ((((((uint64_t)x17 * x49) + ((uint64_t)x19 * x47)) + (((uint64_t)x33 * x62) + ((uint64_t)x32 * x63))) + x73) +ℤ x65);
  { ℤ x81 = ((((((uint64_t)x15 * x49) + (((uint64_t)x17 * x47) + ((uint64_t)x19 * x45))) + (((uint64_t)x31 * x62) + (((uint64_t)x33 * x63) + ((uint64_t)x32 * x61)))) + x74) +ℤ x66);
  { ℤ x82 = ((((((uint64_t)x13 * x49) + (((uint64_t)x15 * x47) + (((uint64_t)x17 * x45) + ((uint64_t)x19 * x43)))) + (((uint64_t)x29 * x62) + (((uint64_t)x31 * x63) + (((uint64_t)x33 * x61) + ((uint64_t)x32 * x59))))) + x75) +ℤ x67);
  { ℤ x83 = ((((((uint64_t)x11 * x49) + (((uint64_t)x13 * x47) + (((uint64_t)x15 * x45) + (((uint64_t)x17 * x43) + ((uint64_t)x19 * x41))))) + (((uint64_t)x27 * x62) + (((uint64_t)x29 * x63) + (((uint64_t)x31 * x61) + (((uint64_t)x33 * x59) + ((uint64_t)x32 * x57)))))) + x76) +ℤ x68);
  { ℤ x84 = ((((((uint64_t)x9 * x49) + (((uint64_t)x11 * x47) + (((uint64_t)x13 * x45) + (((uint64_t)x15 * x43) + (((uint64_t)x17 * x41) + ((uint64_t)x19 * x39)))))) + (((uint64_t)x25 * x62) + (((uint64_t)x27 * x63) + (((uint64_t)x29 * x61) + (((uint64_t)x31 * x59) + (((uint64_t)x33 * x57) + ((uint64_t)x32 * x55))))))) + x77) +ℤ x69);
  { ℤ x85 = ((((((uint64_t)x7 * x49) + (((uint64_t)x9 * x47) + (((uint64_t)x11 * x45) + (((uint64_t)x13 * x43) + (((uint64_t)x15 * x41) + (((uint64_t)x17 * x39) + ((uint64_t)x19 * x37))))))) + (((uint64_t)x23 * x62) + (((uint64_t)x25 * x63) + (((uint64_t)x27 * x61) + (((uint64_t)x29 * x59) + (((uint64_t)x31 * x57) + (((uint64_t)x33 * x55) + ((uint64_t)x32 * x53)))))))) + x78) +ℤ x70);
  { uint64_t x86 = ((((uint64_t)x5 * x49) + (((uint64_t)x7 * x47) + (((uint64_t)x9 * x45) + (((uint64_t)x11 * x43) + (((uint64_t)x13 * x41) + (((uint64_t)x15 * x39) + (((uint64_t)x17 * x37) + ((uint64_t)x19 * x35)))))))) + (((uint64_t)x21 * x62) + (((uint64_t)x23 * x63) + (((uint64_t)x25 * x61) + (((uint64_t)x27 * x59) + (((uint64_t)x29 * x57) + (((uint64_t)x31 * x55) + (((uint64_t)x33 * x53) + ((uint64_t)x32 * x51)))))))));
  { uint64_t x87 = (((((uint64_t)x5 * x47) + (((uint64_t)x7 * x45) + (((uint64_t)x9 * x43) + (((uint64_t)x11 * x41) + (((uint64_t)x13 * x39) + (((uint64_t)x15 * x37) + ((uint64_t)x17 * x35))))))) + (((uint64_t)x21 * x63) + (((uint64_t)x23 * x61) + (((uint64_t)x25 * x59) + (((uint64_t)x27 * x57) + (((uint64_t)x29 * x55) + (((uint64_t)x31 * x53) + ((uint64_t)x33 * x51)))))))) + x64);
  { uint64_t x88 = (((((uint64_t)x5 * x45) + (((uint64_t)x7 * x43) + (((uint64_t)x9 * x41) + (((uint64_t)x11 * x39) + (((uint64_t)x13 * x37) + ((uint64_t)x15 * x35)))))) + (((uint64_t)x21 * x61) + (((uint64_t)x23 * x59) + (((uint64_t)x25 * x57) + (((uint64_t)x27 * x55) + (((uint64_t)x29 * x53) + ((uint64_t)x31 * x51))))))) + x65);
  { uint64_t x89 = (((((uint64_t)x5 * x43) + (((uint64_t)x7 * x41) + (((uint64_t)x9 * x39) + (((uint64_t)x11 * x37) + ((uint64_t)x13 * x35))))) + (((uint64_t)x21 * x59) + (((uint64_t)x23 * x57) + (((uint64_t)x25 * x55) + (((uint64_t)x27 * x53) + ((uint64_t)x29 * x51)))))) + x66);
  { uint64_t x90 = (((((uint64_t)x5 * x41) + (((uint64_t)x7 * x39) + (((uint64_t)x9 * x37) + ((uint64_t)x11 * x35)))) + (((uint64_t)x21 * x57) + (((uint64_t)x23 * x55) + (((uint64_t)x25 * x53) + ((uint64_t)x27 * x51))))) + x67);
  { uint64_t x91 = (((((uint64_t)x5 * x39) + (((uint64_t)x7 * x37) + ((uint64_t)x9 * x35))) + (((uint64_t)x21 * x55) + (((uint64_t)x23 * x53) + ((uint64_t)x25 * x51)))) + x68);
  { uint64_t x92 = (((((uint64_t)x5 * x37) + ((uint64_t)x7 * x35)) + (((uint64_t)x21 * x53) + ((uint64_t)x23 * x51))) + x69);
  { ℤ x93 = ((((uint64_t)x5 * x35) + ((uint64_t)x21 * x51)) +ℤ x70);
  { uint64_t x94 = (x86 >> 0x1c);
  { uint32_t x95 = ((uint32_t)x86 & 0xfffffff);
  { uint64_t x96 = (x71 >> 0x1c);
  { uint32_t x97 = (x71 & 0xfffffff);
  { ℤ x98 = ((0x10000000 *ℤ x96) +ℤ x97);
  { uint64_t x99 = (x98 >> 0x1c);
  { uint32_t x100 = (x98 & 0xfffffff);
  { ℤ x101 = ((x94 +ℤ x85) +ℤ x99);
  { uint64_t x102 = (x101 >> 0x1c);
  { uint32_t x103 = (x101 & 0xfffffff);
  { ℤ x104 = (x93 +ℤ x99);
  { uint64_t x105 = (x104 >> 0x1c);
  { uint32_t x106 = (x104 & 0xfffffff);
  { ℤ x107 = (x102 +ℤ x84);
  { uint64_t x108 = (x107 >> 0x1c);
  { uint32_t x109 = (x107 & 0xfffffff);
  { uint64_t x110 = (x105 + x92);
  { uint64_t x111 = (x110 >> 0x1c);
  { uint32_t x112 = ((uint32_t)x110 & 0xfffffff);
  { ℤ x113 = (x108 +ℤ x83);
  { uint64_t x114 = (x113 >> 0x1c);
  { uint32_t x115 = (x113 & 0xfffffff);
  { uint64_t x116 = (x111 + x91);
  { uint64_t x117 = (x116 >> 0x1c);
  { uint32_t x118 = ((uint32_t)x116 & 0xfffffff);
  { ℤ x119 = (x114 +ℤ x82);
  { uint64_t x120 = (x119 >> 0x1c);
  { uint32_t x121 = (x119 & 0xfffffff);
  { uint64_t x122 = (x117 + x90);
  { uint64_t x123 = (x122 >> 0x1c);
  { uint32_t x124 = ((uint32_t)x122 & 0xfffffff);
  { ℤ x125 = (x120 +ℤ x81);
  { uint64_t x126 = (x125 >> 0x1c);
  { uint32_t x127 = (x125 & 0xfffffff);
  { uint64_t x128 = (x123 + x89);
  { uint64_t x129 = (x128 >> 0x1c);
  { uint32_t x130 = ((uint32_t)x128 & 0xfffffff);
  { ℤ x131 = (x126 +ℤ x80);
  { uint64_t x132 = (x131 >> 0x1c);
  { uint32_t x133 = (x131 & 0xfffffff);
  { uint64_t x134 = (x129 + x88);
  { uint64_t x135 = (x134 >> 0x1c);
  { uint32_t x136 = ((uint32_t)x134 & 0xfffffff);
  { ℤ x137 = (x132 +ℤ x79);
  { uint64_t x138 = (x137 >> 0x1c);
  { uint32_t x139 = (x137 & 0xfffffff);
  { uint64_t x140 = (x135 + x87);
  { uint64_t x141 = (x140 >> 0x1c);
  { uint32_t x142 = ((uint32_t)x140 & 0xfffffff);
  { uint64_t x143 = (x138 + x100);
  { uint32_t x144 = (uint32_t) (x143 >> 0x1c);
  { uint32_t x145 = ((uint32_t)x143 & 0xfffffff);
  { uint64_t x146 = (x141 + x95);
  { uint32_t x147 = (uint32_t) (x146 >> 0x1c);
  { uint32_t x148 = ((uint32_t)x146 & 0xfffffff);
  { uint64_t x149 = (((uint64_t)0x10000000 * x144) + x145);
  { uint32_t x150 = (uint32_t) (x149 >> 0x1c);
  { uint32_t x151 = ((uint32_t)x149 & 0xfffffff);
  { uint32_t x152 = ((x147 + x103) + x150);
  { uint32_t x153 = (x152 >> 0x1c);
  { uint32_t x154 = (x152 & 0xfffffff);
  { uint32_t x155 = (x106 + x150);
  { uint32_t x156 = (x155 >> 0x1c);
  { uint32_t x157 = (x155 & 0xfffffff);
  out[0] = x157;
  out[1] = (x156 + x112);
  out[2] = x118;
  out[3] = x124;
  out[4] = x130;
  out[5] = x136;
  out[6] = x142;
  out[7] = x148;
  out[8] = x154;
  out[9] = (x153 + x109);
  out[10] = x115;
  out[11] = x121;
  out[12] = x127;
  out[13] = x133;
  out[14] = x139;
  out[15] = x151;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
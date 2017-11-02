#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "fesquare.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline fesquare(uint64_t* out, uint64_t x21, uint64_t x22, uint64_t x20, uint64_t x18, uint64_t x16, uint64_t x14, uint64_t x12, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2)
{  uint64_t x23 = (((uint64_t)x2 * x21) + ((0x2 * ((uint64_t)x4 * x22)) + (((uint64_t)x6 * x20) + (((uint64_t)x8 * x18) + ((0x2 * ((uint64_t)x10 * x16)) + (((uint64_t)x12 * x14) + (((uint64_t)x14 * x12) + ((0x2 * ((uint64_t)x16 * x10)) + (((uint64_t)x18 * x8) + (((uint64_t)x20 * x6) + ((0x2 * ((uint64_t)x22 * x4)) + ((uint64_t)x21 * x2))))))))))));
{  uint64_t x24 = ((((uint64_t)x2 * x22) + (((uint64_t)x4 * x20) + (((uint64_t)x6 * x18) + (((uint64_t)x8 * x16) + (((uint64_t)x10 * x14) + (((uint64_t)x12 * x12) + (((uint64_t)x14 * x10) + (((uint64_t)x16 * x8) + (((uint64_t)x18 * x6) + (((uint64_t)x20 * x4) + ((uint64_t)x22 * x2))))))))))) + (0xbd * ((uint64_t)x21 * x21)));
{  uint64_t x25 = ((((uint64_t)x2 * x20) + ((0x2 * ((uint64_t)x4 * x18)) + ((0x2 * ((uint64_t)x6 * x16)) + (((uint64_t)x8 * x14) + ((0x2 * ((uint64_t)x10 * x12)) + ((0x2 * ((uint64_t)x12 * x10)) + (((uint64_t)x14 * x8) + ((0x2 * ((uint64_t)x16 * x6)) + ((0x2 * ((uint64_t)x18 * x4)) + ((uint64_t)x20 * x2)))))))))) + (0xbd * ((0x2 * ((uint64_t)x22 * x21)) + (0x2 * ((uint64_t)x21 * x22)))));
{  uint64_t x26 = ((((uint64_t)x2 * x18) + ((0x2 * ((uint64_t)x4 * x16)) + (((uint64_t)x6 * x14) + (((uint64_t)x8 * x12) + ((0x2 * ((uint64_t)x10 * x10)) + (((uint64_t)x12 * x8) + (((uint64_t)x14 * x6) + ((0x2 * ((uint64_t)x16 * x4)) + ((uint64_t)x18 * x2))))))))) + (0xbd * (((uint64_t)x20 * x21) + ((0x2 * ((uint64_t)x22 * x22)) + ((uint64_t)x21 * x20)))));
{  uint64_t x27 = ((((uint64_t)x2 * x16) + (((uint64_t)x4 * x14) + (((uint64_t)x6 * x12) + (((uint64_t)x8 * x10) + (((uint64_t)x10 * x8) + (((uint64_t)x12 * x6) + (((uint64_t)x14 * x4) + ((uint64_t)x16 * x2)))))))) + (0xbd * (((uint64_t)x18 * x21) + (((uint64_t)x20 * x22) + (((uint64_t)x22 * x20) + ((uint64_t)x21 * x18))))));
{  uint64_t x28 = ((((uint64_t)x2 * x14) + ((0x2 * ((uint64_t)x4 * x12)) + ((0x2 * ((uint64_t)x6 * x10)) + (((uint64_t)x8 * x8) + ((0x2 * ((uint64_t)x10 * x6)) + ((0x2 * ((uint64_t)x12 * x4)) + ((uint64_t)x14 * x2))))))) + (0xbd * ((0x2 * ((uint64_t)x16 * x21)) + ((0x2 * ((uint64_t)x18 * x22)) + (((uint64_t)x20 * x20) + ((0x2 * ((uint64_t)x22 * x18)) + (0x2 * ((uint64_t)x21 * x16))))))));
{  uint64_t x29 = ((((uint64_t)x2 * x12) + ((0x2 * ((uint64_t)x4 * x10)) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + ((0x2 * ((uint64_t)x10 * x4)) + ((uint64_t)x12 * x2)))))) + (0xbd * (((uint64_t)x14 * x21) + ((0x2 * ((uint64_t)x16 * x22)) + (((uint64_t)x18 * x20) + (((uint64_t)x20 * x18) + ((0x2 * ((uint64_t)x22 * x16)) + ((uint64_t)x21 * x14))))))));
{  uint64_t x30 = ((((uint64_t)x2 * x10) + (((uint64_t)x4 * x8) + (((uint64_t)x6 * x6) + (((uint64_t)x8 * x4) + ((uint64_t)x10 * x2))))) + (0xbd * (((uint64_t)x12 * x21) + (((uint64_t)x14 * x22) + (((uint64_t)x16 * x20) + (((uint64_t)x18 * x18) + (((uint64_t)x20 * x16) + (((uint64_t)x22 * x14) + ((uint64_t)x21 * x12)))))))));
{  uint64_t x31 = ((((uint64_t)x2 * x8) + ((0x2 * ((uint64_t)x4 * x6)) + ((0x2 * ((uint64_t)x6 * x4)) + ((uint64_t)x8 * x2)))) + (0xbd * ((0x2 * ((uint64_t)x10 * x21)) + ((0x2 * ((uint64_t)x12 * x22)) + (((uint64_t)x14 * x20) + ((0x2 * ((uint64_t)x16 * x18)) + ((0x2 * ((uint64_t)x18 * x16)) + (((uint64_t)x20 * x14) + ((0x2 * ((uint64_t)x22 * x12)) + (0x2 * ((uint64_t)x21 * x10)))))))))));
{  uint64_t x32 = ((((uint64_t)x2 * x6) + ((0x2 * ((uint64_t)x4 * x4)) + ((uint64_t)x6 * x2))) + (0xbd * (((uint64_t)x8 * x21) + ((0x2 * ((uint64_t)x10 * x22)) + (((uint64_t)x12 * x20) + (((uint64_t)x14 * x18) + ((0x2 * ((uint64_t)x16 * x16)) + (((uint64_t)x18 * x14) + (((uint64_t)x20 * x12) + ((0x2 * ((uint64_t)x22 * x10)) + ((uint64_t)x21 * x8)))))))))));
{  uint64_t x33 = ((((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)) + (0xbd * (((uint64_t)x6 * x21) + (((uint64_t)x8 * x22) + (((uint64_t)x10 * x20) + (((uint64_t)x12 * x18) + (((uint64_t)x14 * x16) + (((uint64_t)x16 * x14) + (((uint64_t)x18 * x12) + (((uint64_t)x20 * x10) + (((uint64_t)x22 * x8) + ((uint64_t)x21 * x6))))))))))));
{  uint64_t x34 = (((uint64_t)x2 * x2) + (0xbd * ((0x2 * ((uint64_t)x4 * x21)) + ((0x2 * ((uint64_t)x6 * x22)) + (((uint64_t)x8 * x20) + ((0x2 * ((uint64_t)x10 * x18)) + ((0x2 * ((uint64_t)x12 * x16)) + (((uint64_t)x14 * x14) + ((0x2 * ((uint64_t)x16 * x12)) + ((0x2 * ((uint64_t)x18 * x10)) + (((uint64_t)x20 * x8) + ((0x2 * ((uint64_t)x22 * x6)) + (0x2 * ((uint64_t)x21 * x4))))))))))))));
{  uint64_t x35 = (x34 >> 0x16);
{  uint32_t x36 = ((uint32_t)x34 & 0x3fffff);
{  uint64_t x37 = (x35 + x33);
{  uint64_t x38 = (x37 >> 0x15);
{  uint32_t x39 = ((uint32_t)x37 & 0x1fffff);
{  uint64_t x40 = (x38 + x32);
{  uint64_t x41 = (x40 >> 0x15);
{  uint32_t x42 = ((uint32_t)x40 & 0x1fffff);
{  uint64_t x43 = (x41 + x31);
{  uint64_t x44 = (x43 >> 0x16);
{  uint32_t x45 = ((uint32_t)x43 & 0x3fffff);
{  uint64_t x46 = (x44 + x30);
{  uint64_t x47 = (x46 >> 0x15);
{  uint32_t x48 = ((uint32_t)x46 & 0x1fffff);
{  uint64_t x49 = (x47 + x29);
{  uint64_t x50 = (x49 >> 0x15);
{  uint32_t x51 = ((uint32_t)x49 & 0x1fffff);
{  uint64_t x52 = (x50 + x28);
{  uint64_t x53 = (x52 >> 0x16);
{  uint32_t x54 = ((uint32_t)x52 & 0x3fffff);
{  uint64_t x55 = (x53 + x27);
{  uint64_t x56 = (x55 >> 0x15);
{  uint32_t x57 = ((uint32_t)x55 & 0x1fffff);
{  uint64_t x58 = (x56 + x26);
{  uint64_t x59 = (x58 >> 0x15);
{  uint32_t x60 = ((uint32_t)x58 & 0x1fffff);
{  uint64_t x61 = (x59 + x25);
{  uint64_t x62 = (x61 >> 0x16);
{  uint32_t x63 = ((uint32_t)x61 & 0x3fffff);
{  uint64_t x64 = (x62 + x24);
{  uint64_t x65 = (x64 >> 0x15);
{  uint32_t x66 = ((uint32_t)x64 & 0x1fffff);
{  uint64_t x67 = (x65 + x23);
{  uint32_t x68 = (uint32_t) (x67 >> 0x15);
{  uint32_t x69 = ((uint32_t)x67 & 0x1fffff);
{  uint64_t x70 = (x36 + ((uint64_t)0xbd * x68));
{  uint32_t x71 = (uint32_t) (x70 >> 0x16);
{  uint32_t x72 = ((uint32_t)x70 & 0x3fffff);
{  uint32_t x73 = (x71 + x39);
{  uint32_t x74 = (x73 >> 0x15);
{  uint32_t x75 = (x73 & 0x1fffff);
out[0] = x69;
out[1] = x66;
out[2] = x63;
out[3] = x60;
out[4] = x57;
out[5] = x54;
out[6] = x51;
out[7] = x48;
out[8] = x45;
out[9] = x74 + x42;
out[10] = x75;
out[11] = x72;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[12];
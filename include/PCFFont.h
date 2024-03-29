#include <stdint.h>

#define PCF_PROPERTIES         (1<<0)
#define PCF_ACCELERATORS       (1<<1)
#define PCF_METRICS            (1<<2)
#define PCF_BITMAPS            (1<<3)
#define PCF_INK_METRICS        (1<<4)
#define PCF_BDF_ENCODINGS      (1<<5)
#define PCF_SWIDTHS            (1<<6)
#define PCF_GLYPH_NAMES        (1<<7)
#define PCF_BDF_ACCELERATORS   (1<<8)

#define PCF_DEFAULT_FORMAT     0x00000000
#define PCF_INKBOUNDS          0x00000200
#define PCF_ACCEL_W_INKBOUNDS  0x00000100
#define PCF_COMPRESSED_METRICS 0x00000100

#define PCF_GLYPH_PAD_MASK     (3<<0)            /* See the bitmap table for explanation */
#define PCF_BYTE_MASK          (1<<2)            /* If set then Most Sig Byte First */
#define PCF_BIT_MASK           (1<<3)            /* If set then Most Sig Bit First */
#define PCF_SCAN_UNIT_MASK     (3<<4)            /* See the bitmap table for explanation */

extern const uint8_t pcf_start[]  asm("_binary_unifont_15_1_04_p1L_pcf_start");
extern const uint8_t pcf_end[]    asm("_binary_unifont_15_1_04_p1L_pcf_end");

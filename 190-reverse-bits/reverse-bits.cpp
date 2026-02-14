class Solution {
    uint32_t rev8[256];
public:
    Solution() {
        for (int i = 0; i < 256; ++i) {
            uint32_t x = i, r = 0;
            for (int b = 0; b < 8; ++b) {
                r = (r << 1) | (x & 1);
                x >>= 1;
            }
            rev8[i] = r;
        }
    }

    uint32_t reverseBits(uint32_t n) {
        return (rev8[n & 0xff] << 24) |
               (rev8[(n >> 8) & 0xff] << 16) |
               (rev8[(n >> 16) & 0xff] << 8) |
               (rev8[(n >> 24) & 0xff]);
    }
};

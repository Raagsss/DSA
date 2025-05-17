class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result=0;
        for(int i=0;i<32;i++) {
            result<<=1;  // making space for other bits
            result=result|(n&1); // adding the last bit
            n>>=1;  // move to next bit
        }
        return result;
    }
};
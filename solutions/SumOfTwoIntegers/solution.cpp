
class Solution {
public:
    int getSum(int a, int b) {
        unsigned int carry = 1;

        int i=32;
        while (i--) {
            carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }

        return a;


        // below works too and more intuitive for me
        /*int ret=0, carr=0;

        for (int i = 0; i < 32; i++){
            int bt = (a & 1) ^ (b & 1) ^ carr;
            carr = ((a & 1) & (b & 1)) | (a & carr) | (b & carr);
            ret = ret | (bt << i);

            a = a >> 1;
            b = b >> 1;
        }

        return ret;*/
    }
};

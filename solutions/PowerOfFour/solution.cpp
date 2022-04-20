class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num <= 0) return false;
        if (num & (num-1)) return false;

        // 0xAAAAAAAA = 10101010101010101010101010101010
        //return !(num & (0xAAAAAAAA));

        for (int i=0; i<32; i++)
            if (num & (1 << i))
                if (i % 2 == 0)
                    return true;
                else
                    return false;

        return false;
    }
};

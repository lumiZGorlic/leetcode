// https://leetcode.com/problems/single-number-iii/discuss/68900/Accepted-C%2B%2BJava-O(n)-time-O(1)-space-Easy-Solution-with-Detail-Explanations

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // Pass 1 : 
        // Get the XOR of the two numbers we need to find
        int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());

        // Get its last set bit
        for (int i=0; i<32; i++)
            if(diff & (1 << i)) { diff = (1 << i); break; }

        // Pass 2 :
        vector<int> rets = {0, 0}; // this vector stores the two numbers we will return
        for (int num : nums)
        {
            if ((num & diff) == 0) // the bit is not set
            {
                rets[0] ^= num;
            }
            else // the bit is set
            {
                rets[1] ^= num;
            }
        }

        return rets;
    }
};

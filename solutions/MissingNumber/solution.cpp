class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz=nums.size();
        int ret=0;

        for (int i=0; i<=sz; i++) ret ^= i;

        for (const auto& n: nums) ret ^= n;

        return ret;
    }
};

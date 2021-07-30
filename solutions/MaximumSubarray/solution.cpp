class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ret = nums[0], sum = 0;

        for (auto n: nums){
            sum += n;
            if (n > sum) sum = n;
            ret = max(ret, sum);
        }

        return ret;
    }
};

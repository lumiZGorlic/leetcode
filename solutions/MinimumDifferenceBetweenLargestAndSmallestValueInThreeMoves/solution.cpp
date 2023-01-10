class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ret = INT_MAX, sz = nums.size();

        if (sz <= 4) return 0;

        ret = min(ret, nums[sz-1] - nums[3]);
        ret = min(ret, nums[sz-4] - nums[0]);
        ret = min(ret, nums[sz-3] - nums[1]);
        ret = min(ret, nums[sz-2] - nums[2]);

        return ret;
    }
};

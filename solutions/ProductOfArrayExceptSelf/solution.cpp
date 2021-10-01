class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();

        vector<int> left(sz), right(sz), ret(sz);

        for (int i=0; i<sz; i++)
            left[i] = nums[i] * (i > 0 ? left[i-1] : 1);

        for (int i=sz-1; i>=0; i--)
            right[i] = nums[i] * (i < sz-1 ? right[i+1] : 1);

        for (int i=0; i<sz; i++)
            ret[i] = (i > 0 ? left[i-1] : 1) * (i < sz-1 ? right[i+1] : 1);

        return ret;
    }
};

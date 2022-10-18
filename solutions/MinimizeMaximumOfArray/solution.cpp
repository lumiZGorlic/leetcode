class Solution {
    bool ok(vector<int> nums, int v){
        if(nums[0] > v) return false;
        long long c = 0;

        for (int i: nums){
            if (i < v)
                c += v-i;
            else {
                c -= i-v;
                if(c < 0) return false;
            }
        }
        return true;
    }
public:
    int minimizeArrayValue(vector<int>& nums) {
        int sz = nums.size(), ret = 0;
        int l = 0, r = 1000000000;

        while (l <= r){
            int m = l + (r-l)/2;
            if(ok(nums, m))
                r = m-1;
            else
                l = m+1;
        }

        return l;
    }
};

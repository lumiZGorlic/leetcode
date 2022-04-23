class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int sz = nums.size(), ret = nums[k];
        if (sz==1) return ret;

        int l=k, r=k, mn = nums[k];
        do {
            if (l > 0 && r < sz-1){
                if (min(mn, nums[l-1])*(r-l+2) > min(mn, nums[r+1])*(r-l+2)){
                    mn = min(mn, nums[--l]);
                }
                else {
                    mn = min(mn, nums[++r]);
                }
            }
            else if (l > 0){
                mn = min(mn, nums[--l]);
            }
            else {
                mn = min(mn, nums[++r]);
            }

            ret = max(ret, mn*(r-l+1));
        }
        while (l > 0 || r < sz-1);

        return ret;
    }
};

class Solution {
public:
    int rob(vector<int>& nums) {
        int sz = nums.size();

        // dp1 - max sum if current elemet taken
        // dp2 - max if current not taken. Note that in such a case
        // we're not sure if sum includes nums[curr_idx-1] 
        int dp1 = nums[0], dp2 = 0;

        for (int i=1; i<sz; i++){
            int tmp = dp2;
            dp2 = max(dp1, dp2);
            dp1 = tmp + nums[i];
        }

        return max(dp1, dp2);
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sz=nums.size();
        vector<vector<int>> ret;
        sort(begin(nums), end(nums));

        for (int i = 0; i < sz-2; i++){
            if (i && nums[i] == nums[i-1]) continue;

            int l = i+1, r = sz-1;

            while (l < r){
                int s = nums[i] + nums[l] + nums[r];

                if (s < 0) {
                    l++;
                    while (l < r && nums[l-1] == nums[l]) l++;}
                else if (s > 0) {
                    r--;
                    while (l < r && nums[r] == nums[r+1]) r--;}
                else {
                    ret.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    while (l < r && nums[l-1] == nums[l]) l++;
                    r--;
                    while (l < r && nums[r] == nums[r+1]) r--;
                }
            }
        }

        return ret;
    }
};

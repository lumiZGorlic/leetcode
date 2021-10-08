class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> sorted(nums);
        sort(sorted.begin(),sorted.end());
        int j = 0;
        int k = (nums.size() + 1)/2;
        for(int i = nums.size() - 1;i>=0;i--) {
            if(i & 1) {
                nums[i] = sorted[k++];
            } else {
                nums[i] = sorted[j++];
            }
        }
    }
    // in the above if the loop was from 0, the following wouldn't pass - [4,5,5,6]
};

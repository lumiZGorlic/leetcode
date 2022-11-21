class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int sz = nums.size();
        vector<int> ret;

        int i = 0;
        while (i < sz){
            int correct = nums[i] - 1;
            if (i == correct || nums[i] == nums[correct]){
                i++;
            }
            else {
                swap(nums[i], nums[correct]);
            }
        }

        for (int i=0; i<sz; i++)
            if (nums[i]-1 != i)
                ret.push_back(nums[i]);

        return ret;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz = nums.size();
        
        unordered_map<int, int> val2Idx;
        
        for (int i=0; i<sz; i++) val2Idx[nums[i]] = i;
        
        for (int i=0; i<sz; i++){
            int tmp = target - nums[i];
            if (val2Idx.count(tmp) && i != val2Idx[tmp])
                return {i, val2Idx[tmp]};
        }
        
        return {-1, -1};
    }
};


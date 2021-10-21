class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int sz=nums.size();
        int szofset = pow(2, sz);
        vector<vector<int>> ret;

        for (int i=0; i<szofset; i++){
            vector<int> cur;

            for (int j=0; j<sz; j++){
                if(i & (1 << j)) cur.push_back(nums[j]);
            }
            
            ret.push_back(cur);
        }
        return ret;
    }
};

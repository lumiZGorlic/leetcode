class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int sz = nums.size();
        int ret = 0;

        unordered_map<int, int> tab;

        for (int i=0; i<sz; i++)
            for (int j=i+1; j<sz; j++)
                tab[nums[i] * nums[j]] += 1;

        for (int i=0; i<sz; i++){
            for (int j=i+1; j<sz; j++){
                int res = nums[i] * nums[j];
                ret += (tab[res]-1) * 4;
            }
        }

        return ret;
    }
};

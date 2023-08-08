class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int sz = nums.size();
        int ret = 0;

        unordered_set<int> unq (begin(nums), end(nums));
        int unqsz = unq.size();

        //if (unqsz == 1) return (sz+1)*(sz)/2;

        unordered_map<int, int> mp;
        int r = -1;

        for (int i=0; i<sz; i++){
            while (mp.size() < unqsz && r < sz-1)
                mp[nums[++r]]++;

            if (mp.size() == unqsz) ret += sz-r;

            mp[nums[i]]--;
            if(mp[nums[i]] == 0) mp.erase(nums[i]);
        }

        return ret;
    }
};

class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int sz = nums.size();
        long long ret = 0;
        vector<int> numsRev;

        for(int n: nums){
            auto tmp = to_string(n);
            reverse(tmp.begin(), tmp.end());
            numsRev.push_back( stoi(tmp) );
        }

        unordered_map<int, long long> mp;

        for (int i=0; i<sz; i++) mp[nums[i] - numsRev[i]]++;

        for(auto& it: mp){
            ret += it.second * (it.second-1) / 2 ;
            ret %= 1000000007;
        }

        return ret;
    }
};

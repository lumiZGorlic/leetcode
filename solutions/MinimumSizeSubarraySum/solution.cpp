class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int sz = nums.size();
        int ret = 100001;
        long long sum = 0;
        int l = 0;

        for (int i=0; i<sz; i++){
            sum += nums[i];
            while (l <= i && sum >= s){
                ret = min(ret, i-l+1);
                sum -= nums[l++];
            }
        }

        return ret == 100001 ? 0 : ret;
    }
};

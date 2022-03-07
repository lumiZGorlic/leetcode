long long sumRange(long l, long r){
    return (l+r) * (r-l+1) / 2;
}

class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        nums.push_back(0);
        sort(begin(nums), end(nums));
        long long ret = 0;

        int idx = 0, sz = nums.size();

        while (idx < sz && k){
            if (idx == sz-1){
                int l = nums[idx] + 1, r = nums[idx] + k;
                ret += sumRange(l, r);
                break;
            }
            else {
                int l = nums[idx] + 1, r = nums[idx+1] - 1;
                if (l > r){
                    // step between values in nums is 1 so do nothing
                }
                else if (r - l + 1 >= k){
                    r = l + k - 1;
                    ret += sumRange(l, r);
                    break;
                }
                else{
                    ret += sumRange(l, r);
                    k -= r-l+1;
                }
            }
            idx++;
        }

        return ret;
    }
};

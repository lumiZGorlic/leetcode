class Solution {
public:
    int findMin(vector<int>& nums) {
        int sz = nums.size();
        int l = 0, r = sz-1;

        while (l <= r) {
            if (r-l == 1) return min(nums[l], nums[r]);
            
            int mid = l + (r-l)/2;
            if (nums[l] > nums[mid])
                r = mid;
            else if (nums[mid] > nums[r])
                l = mid;
            else
                return nums[l];
        }

        return nums[l];
    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz = nums.size();
        int l=0, r=sz-1;

        // at each step either left or right sub-array will have a nums in right order
        // we check if target is there. if not, let's go for the other sub-array.
        while (l <= r){
            int mid = l + (r-l)/2;
            if (nums[mid] == target) return mid;
            
            if (nums[l] <= nums[mid]){
                if (nums[l] <= target && target <= nums[mid])
                    r = mid-1;
                else
                    l = mid+1;
            }
            else if (nums[mid] <= nums[r]){
                if (nums[mid] <= target && target <= nums[r])
                    l = mid+1;
                else
                    r = mid-1;
            }
        }
        
        return -1;
    }
};

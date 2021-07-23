class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        int maybe = nums[0], cnt = 1;
        
        for (int i=1; i<sz; i++){
            if(nums[i] == maybe)
                cnt++;
            else {
                if(!--cnt){
                    maybe = nums[i];
                    cnt = 1;
                }
            }
        }
        
        return maybe;
    }
};

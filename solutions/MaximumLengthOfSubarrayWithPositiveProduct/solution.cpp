class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int sz = nums.size(), ret = 0;

        int longestPosPro=0, longestNegPro=0; // update these for every index

        for (int i=0; i<sz; i++){
            if (nums[i] > 0){
                longestPosPro++;
                if (longestNegPro) longestNegPro++;
            }
            else if (nums[i] < 0){
                int tmp = longestNegPro;
                longestNegPro = longestPosPro+1;
                if (tmp) longestPosPro = tmp+1;
                else     longestPosPro = 0;
            }
            else {
                longestPosPro = longestNegPro = 0;
            }
            ret = max(ret, longestPosPro);
        }

        return ret;
    }
};

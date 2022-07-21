class Solution {
public:
    void sortColors(vector<int>& nums) {
        int sz=nums.size();

        int idx0 = -1, idx1 = -1, idx2 = -1;

        for (int i=0; i<sz; i++){
            //////////////////////////////////
            if (nums[i] == 0){
                if      (idx0 == -1 && idx1 == -1 && idx2 == -1) idx0 = 0;
                else if (idx0 != -1 && idx1 == -1 && idx2 == -1) ;
                else if (idx0 == -1 && idx1 != -1 && idx2 == -1) {
                    idx0 = 0;
                    nums[0] = 0;
                    nums[i] = 1;
                    idx1++;
                }
                else if (idx0 == -1 && idx1 == -1 && idx2 != -1) {
                    idx0 = 0;
                    nums[0] = 0;
                    nums[i] = 2;
                    idx2++;
                }
                else if (idx0 != -1 && idx1 == -1 && idx2 != -1) {
                    nums[idx2] = 0;
                    nums[i] = 2;
                    idx2++;
                }
                else if (idx0 != -1 && idx1 != -1 && idx2 == -1) {
                    nums[idx1] = 0;
                    nums[i] = 1;
                    idx1++;
                }
                else if (idx0 == -1 && idx1 != -1 && idx2 != -1) {
                    idx0 = 0;
                    nums[0] = 0;

                    idx1++;
                    nums[idx2] = 1;
                    nums[i] = 2;
                    idx2++;
                }
                else if (idx0 != -1 && idx1 != -1 && idx2 != -1) {
                    nums[idx1] = 0;
                    idx1++;
                    nums[idx2] = 1;
                    idx2++;
                    nums[i] = 2;
                }
            }
            //////////////////////////////////
            else if (nums[i] == 1){
                if      (idx1 == -1 && idx2 == -1) idx1 = i;
                else if (idx1 != -1 && idx2 == -1) ;
                else if (idx1 == -1 && idx2 != -1){
                    idx1 = idx2;
                    nums[idx1] = 1;
                    idx2++;
                    nums[i] = 2;
                }
                else if(idx1 != -1 && idx2 != -1){
                    nums[idx2] = 1;
                    idx2++;
                    nums[i] = 2;
                }
            }
            //////////////////////////////////
            else if (nums[i] == 2){
                if (idx2 == -1) idx2 = i;
            }
        }
    }
};

class Solution {
public:
    int jump(vector<int>& nums) {
        // greedy, to see the solution i think of it this
        // way: what's the farthest we can reach with one jump, then two, etc
        int sz = nums.size();
        int curEnd=0, curFurthest=0, jumps=0;

        for (int i=0; i<sz-1; i++){

            if (curEnd >= sz-1) break;

            curFurthest = max(curFurthest, i+nums[i]);

            if (i == curEnd){
                curEnd = curFurthest;
                jumps++;
            }
        }

        return jumps;
    }
};

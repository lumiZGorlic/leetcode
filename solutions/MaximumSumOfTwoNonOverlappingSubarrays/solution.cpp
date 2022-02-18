class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int sz = nums.size();
        // leftA[i] - biggest sum with firstLen elements that is possible to the left of ith index inclusive 
        vector<int> leftA(sz, 0), rightA(sz, 0), leftB(sz, 0), rightB(sz, 0);

        int currSumA = 0, currSumB = 0;
        for (int i=0; i<sz; i++){
            if (i != 0){ leftA[i] = leftA[i-1]; leftB[i] = leftB[i-1]; }

            currSumA += nums[i];
            if (i >= firstLen) currSumA -= nums[i-firstLen];
            if (i+1 >= firstLen) leftA[i] = max(leftA[i], currSumA);

            currSumB += nums[i];
            if (i >= secondLen) currSumB -= nums[i-secondLen];
            if (i+1 >= secondLen) leftB[i] = max(leftB[i], currSumB);
        }

        currSumA = 0, currSumB = 0;
        for (int i=sz-1; i>=0; i--){
            if (i < sz-1){ rightA[i] = rightA[i+1]; rightB[i] = rightB[i+1]; }

            currSumA += nums[i];
            if (i + firstLen < sz) currSumA -= nums[i + firstLen];
            if (i + firstLen <= sz) rightA[i] = max(rightA[i], currSumA);

            currSumB += nums[i];
            if (i + secondLen < sz) currSumB -= nums[i + secondLen];
            if (i + secondLen <= sz) rightB[i] = max(rightB[i], currSumB);
        }

        int ret = 0;
        for (int i=0; i<sz-1; i++){
            ret = max(ret, leftA[i] + rightB[i+1]);
            ret = max(ret, leftB[i] + rightA[i+1]);
        }

        return ret;
    }
};

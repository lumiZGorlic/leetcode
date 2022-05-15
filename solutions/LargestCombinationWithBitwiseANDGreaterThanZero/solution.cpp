class Solution {
public:
    int largestCombination(vector<int>& cand) {
        int ret = 1;

        for (int i=0; i<32; i++){
            int tmp = 0;
            for (int c: cand) if(c & (1 << i)) tmp++;
            ret = tmp > ret ? tmp : ret;
        }

        return ret;
    }
};

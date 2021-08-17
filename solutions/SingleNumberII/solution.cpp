class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;

        vector<int> v(32, 0);

        for (const auto& n: nums){
            for (int i=0; i<32; i++){
                if ((1 << i) & n) v[i]++;
            }
        }

        for (int i=0; i<32; i++){
            if (v[i] % 3) ret |= (1 << i);
        }

        return ret;
    }
};

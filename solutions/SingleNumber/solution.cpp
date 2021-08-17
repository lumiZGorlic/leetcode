class Solution {
public:
    int singleNumber(vector<int> A){
        int ret=0;
        for (const auto& a: A) ret ^= a;
        return ret;
    }
};

class Solution {
public:
    int balancedStringSplit(string s) {
        int lnr = 0, rnr = 0; // number of 'L's, number of 'R's
        int ret = 0;

        for (auto c: s){
            if (c == 'L') lnr++; else rnr++;
            if (lnr == rnr) ret++;
        }

        return ret;
    }
};

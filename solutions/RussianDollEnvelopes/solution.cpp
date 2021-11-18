class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envlps) {
        int sz=envlps.size();

        sort( begin(envlps), end(envlps),
                 [](vector<int>& l, vector<int>& r) { if(l[0]!=r[0]) return l[0]<r[0]; return l[1]<r[1];});

        int ret = 0;
        vector<int> dp(sz+1);

        for (int i=0; i<sz; i++){
            int val = 1;
            for (int j=i-1; j>=0; j--){
                if (envlps[i][0] > envlps[j][0] && envlps[i][1] > envlps[j][1])
                    val = max(val, dp[j] + 1);
            }
            dp[i] = val;
            ret = max(ret, val);
        }

        return ret;
    }
};

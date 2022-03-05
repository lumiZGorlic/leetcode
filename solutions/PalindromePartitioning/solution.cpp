class Solution {
public:
    vector<vector<string>> partition(string s) {
        int sz=s.size();

        // ret[i] holds partitions for ith index 
        vector< vector<vector<string>> > ret(sz);
        ret[0] = {{s.substr(0,1)}};

        vector<vector<int>> dp(sz, vector<int>(sz, 0));

        for (int i=1; i<sz; i++){
            for (int j=i; j>=0; j--){
                if (i==j || (s[i]==s[j] && (j+1==i || dp[j+1][i-1]))){
                    dp[j][i] = 1;

                    if (!j){
                        ret[i].push_back({s.substr(0,i-j+1)});
                        continue;
                    }

                    for (auto vs: ret[j-1]){
                        vs.push_back(s.substr(j, i-j+1));
                        ret[i].push_back(vs);
                    }
                }
            }
        }

        return ret[sz-1];
    }
};


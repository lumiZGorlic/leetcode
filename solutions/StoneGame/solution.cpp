class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int sz = piles.size();

        vector<vector<int>> dp(sz, vector<int>(sz, 0));

        for (int w = 0; w < sz; w++){
            for (int l = 0; l < sz; l++){
                // right_idx = left_idx + width
                int r = l + w;
                if (r >= sz) break;
                if (l == r)
                    dp[l][r] = piles[l];
                else
                    dp[l][r] = max(piles[l] + dp[l+1][r], dp[l][r-1] + piles[r]);
            }
        }
        
        int total = accumulate(piles.begin(), piles.end(), 0);
        if (dp[0][sz-1] > total/2) return true;
        return false;
    }
};

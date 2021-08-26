class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz=prices.size(), ret = 0;

        for (int i=1; i<sz; i++){
            if (prices[i] > prices[i-1])
                ret += prices[i] - prices[i-1];
        }

        return ret;
    }
};

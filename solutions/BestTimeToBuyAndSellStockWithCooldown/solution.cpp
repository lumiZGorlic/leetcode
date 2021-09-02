class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz = prices.size();
        vector<int> mem(sz+2, 0);

        for (int i=1; i<sz; i++){
            int tmp=0;
            for (int j=0; j<i; j++)
                // bought on day j, sold on day i, mem[j] is max amount on day j-2
                tmp = max(tmp, prices[i] - prices[j] + mem[j]);

            mem[i+2] = max(tmp, mem[i+1]);
        }

        return mem[sz+1];
    }
};

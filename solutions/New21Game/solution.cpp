class Solution {
public:
    double new21Game(int n, int k, int mp) {
        // prob[x] - probability that when game finishes we end up with x points
        vector<double> prob(n+1, 1.0);

        for (int i = 1; i <= n; i++){
            double val = 0.0;

            for (int dif = 1; dif <= mp; dif++){
                int prevVal = i - dif;
                if(prevVal < 0) break;
                if (prevVal >= k) continue; // since when we reach k or bigger the game ends
                val += prob[prevVal] / mp;
            }
            prob[i] = val;
        }

        double ret=0.0;
        for(int i=k; i<=n; i++) ret += prob[i];
        return ret;
    }
};

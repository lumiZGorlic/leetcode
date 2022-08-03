//1 <= rods.length <= 20
//1 <= rods[i] <= 1000
//sum(rods[i]) <= 5000

/*class Solution_BruteForce {
    int ans, n;
    vector<int> rods;
public:
    int tallestBillboard(vector<int>& rods) {
        this->rods = rods;
        n = rods.size();
        ans = 0;
        return solve(0, 0, 0);
    }

    int solve(int position, int s1, int s2) {
        if (position == n) {
            if (s1 == s2)return s1;
            return 0;
        }

        int ans = 0;

        int opt1 = solve(position + 1 , s1 , s2);
        int opt2 = solve(position + 1 , s1 + rods[position], s2);
        int opt3 = solve(position + 1 , s1 , s2 + rods[position]);

        return ans = max({opt1, opt2, opt3});
    }
};*/


//Reducing one of the state in above solution , as N * M * M would lead to MLE/TLE  where M = sum(Array)
//Lets store the difference of s1 and s2 in the state , so the difference would range from -M to M
//Hence, number of states = N* ( 2 * M) , hence we reduced the time by M

const int MIN = -1e4, offset = 5000;
class Solution {
    int ans, n;
    vector<int> rods;
    int dp[21][2 * offset + 1];
public:
    int tallestBillboard(vector<int>& rods) {
        this->rods = rods;
        n = rods.size();

        memset(dp , -1 , sizeof(dp));

        int ans = solve(0, 0);
        if (ans < 0)return 0;
        else return ans;
    }

    int solve(int position, int diff) { // returns the maximum subset sum s1 , such that there exist another mutually exclusive subset s2 with difference in their sums = diff

        if (position == n) {
            if (diff == 0)return 0;
            return MIN;
        }

        int &ans = dp[position][diff + offset];
        if (ans != -1)return ans;

        int opt1 = solve(position + 1 , diff);
        int opt2 = rods[position] + solve(position + 1 , diff + rods[position]); // keeping the sum of subset1 in hand , and difference of s1 and s2 is stored in the recursive state of the dp
        int opt3 = solve(position + 1 , diff - rods[position]);

        return ans = max({opt1, opt2, opt3});
    }
};

// below my original solution. most likely it times out. maybe can be improved.

/*class Solution {
public:

    void helper(int sm, vector<int>& rods, vector<int>& cur, vector<int>& sols, int cur_sm, int str){
        if (cur_sm > sm) return;

        if (cur_sm == sm){
            int btMap = 0;
            for (int i: cur) btMap |= (1 << i);
            sols.push_back(btMap);
            return;
        }

        for (int i=str; i<rods.size(); i++){
            cur.push_back(i);
            helper(sm, rods, cur, sols, cur_sm+rods[i], i+1);
            cur.pop_back();
        }
    }

    bool f(int sm, vector<int>& rods){
        //
        vector<int> cur;
        vector<int> sols;

        helper(sm, rods, cur, sols, 0, 0);
        
        int sz = sols.size();
        
        for (int i=0; i<sz; i++)
            for (int j=i+1; j<sz; j++)
                if ((sols[i] & sols[j]) == 0) return true;

        return false;
    }

    int tallestBillboard(vector<int>& rods) {
        int sz = rods.size();

        int sm = 0;
        for (int i: rods) sm += i;

        sm /= 2;

        for (int i=sm; i>0; i--){
            if (f(i, rods)) return i;
        }

        return 0;
    }
};*/

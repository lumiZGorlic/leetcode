// https://leetcode.com/problems/minimum-number-of-refueling-stops/discuss/149839/DP-O(N2)-and-Priority-Queue-O(NlogN)

class Solution {
public:
    /*int minRefuelStops(int target, int startFuel, vector<vector<int>>& s) {
        long dp[501] = {startFuel};

        for (int i = 0; i < s.size(); ++i)
            for (int t = i; t >= 0 && dp[t] >= s[i][0]; --t)
                dp[t + 1] = max(dp[t + 1], dp[t] + s[i][1]);

        for (int t = 0; t <= s.size(); ++t)
            if (dp[t] >= target) return t;

        return -1;
    }*/

    int minRefuelStops(int target, int cur, vector<vector<int>> s) {
        int i = 0, res;
        priority_queue<int> pq;
        for (res = 0; cur < target; res++) {
            while (i < s.size() && s[i][0] <= cur)
                pq.push(s[i++][1]);
            if (pq.empty()) return -1;
            cur += pq.top(), pq.pop();
        }
        return res;
    }
};

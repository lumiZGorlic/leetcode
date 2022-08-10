class Solution {
public:
    int minOperations(vector<int>& n1, vector<int>& n2) {
        if (n2.size() * 6 < n1.size() || n1.size() * 6 < n2.size())
            return -1;

        int sum1 = accumulate(begin(n1), end(n1), 0), sum2 = accumulate(begin(n2), end(n2), 0);

        if (sum1 > sum2) swap(n1, n2);

        priority_queue <int, vector<int>, greater<int>> q1(begin(n1), end(n1));
        priority_queue<int> q2(begin(n2), end(n2));

        int cnt = 0, diff = abs(sum1 - sum2);

        while (diff > 0) {
            ++cnt;

            if (q1.empty() || (!q2.empty() && q2.top() + q1.top() > 7)) {
                diff -= q2.top() - 1;
                q2.pop();
            } else {
                diff -= 6 - q1.top();
                q1.pop();
            }
        }

        return cnt;
    }
};

class Solution {
public:
    int kSimilarity(string A, string B) {
        int len = A.length();
        queue<pair<string, int>> q;
        q.push(make_pair(A, 0));
        vector<vector<int>> v(6);
        for (int i = 0; i < len; i++) v[B[i] - 'a'].push_back(i);

        while (!q.empty()) {
            string f = q.front().first;
            int d = q.front().second;
            if (f == B) return d;
            q.pop();
            int i = 0;
            for (; i < len; i++) if (f[i] != B[i]) break;
            char c = f[i];

            for (int j : v[c - 'a']) {
                if (f[j] != B[j]) {
                    string g = f;
                    g[i] = f[j];
                    g[j] = f[i];
                    q.push(make_pair(g, d + 1));
                }
            }
        }
        return -1;
    }
};

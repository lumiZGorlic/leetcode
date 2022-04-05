using pii = pair<int, int>;
using pli = pair<long long, int>;

class Solution {
public:
    void bfs(int st, vector<vector<pii>> &al, vector<long long>& visited) {
        priority_queue<pli, vector<pli>, greater<pli>> pq;
        pq.push({0, st});
        while (!pq.empty()) {
            auto [dist, i] = pq.top(); pq.pop();
            if (visited[i] != dist)
                continue;
            for (auto [j, w] : al[i]) {
                if (visited[j] > dist + w) {
                    visited[j] = dist + w;
                    pq.push({visited[j], j});
                }
            }
        }
    }
    long long minimumWeight(int n, vector<vector<int>>& edges, int src1, int src2, int dest) {
        long long max_val = 10000000000, res = LLONG_MAX;
        vector<vector<pii>> al(n), ral(n);
        vector<long long> dd(n, max_val), s1d(n, max_val), s2d(n, max_val);
        dd[dest] = s1d[src1] = s2d[src2] = 0;
        for (auto &e : edges) {
            al[e[0]].push_back({e[1], e[2]});
            ral[e[1]].push_back({e[0], e[2]});            
        }
        bfs(dest, ral, dd);
        bfs(src1, al, s1d);
        bfs(src2, al, s2d);
        if (dd[src1] == max_val || dd[src2] == max_val)
            return -1;
        for (int i = 0; i < n; ++i)
            res = min(res, dd[i] + s1d[i] + s2d[i]);
        return res;
    }
};

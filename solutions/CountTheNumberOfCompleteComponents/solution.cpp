class Solution {
    unordered_map<int, set<int>> gr;
    unordered_set<int> done;

    void dfs(int node, int& cnt) {
        if (done.count(node)) return;
        done.insert(node);

        cnt += gr[node].size();

        for (auto i: gr[node])
            dfs(i, cnt);
    }

public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int sz = edges.size(), ret = 0;

        for (auto& edge: edges) {
            gr[edge[0]].insert(edge[1]);
            gr[edge[1]].insert(edge[0]);
        }

        for (int i=0; i<n; i++) {
            if (done.count(i)) continue;

            int cnt = 0, s = done.size();
            dfs(i, cnt);
            int d = done.size() - s; // d is number of nodes in the subgraph
            cnt /= 2; // cnt is a number of edges
            if(cnt == d*(d-1)/2) ret++;
        }

        return ret;
    }
};

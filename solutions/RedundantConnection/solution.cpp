class Solution {
    unordered_map<int, unordered_set<int>> graph;
public:
    bool dfs(int src, int target, unordered_set<int> seen){
        if (src == target) return true;

        for (auto v: graph[src]){
            if (!seen.count(v)){
                seen.insert(v);
                if (dfs(v, target, seen)) return true;
            }
        }

        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        for (const auto& edge: edges){
            unordered_set<int> seen;
            seen.insert(edge[0]);
            if(graph.count(edge[0]) && graph.count(edge[1]) && dfs(edge[0], edge[1], seen))
                return edge;

            graph[edge[0]].insert(edge[1]);
            graph[edge[1]].insert(edge[0]);
        }

        return {};
    }
};

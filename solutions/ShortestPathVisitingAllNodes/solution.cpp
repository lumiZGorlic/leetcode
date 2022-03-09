struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 

class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int sz = graph.size();

        queue<pair<int, int>> q;
        for (int i=0; i<sz; i++)
            q.push({1 << i, i}); // {bitmap with visited values, current node }

        // { bitmap, current node } -> path length
        unordered_map<pair<int, int>, int, hash_pair> mp;
        for (int i=0; i<sz; i++)
            mp[{(1 << i), i}] = 0;

        while (!q.empty()){
            auto p = q.front(); q.pop();

            int btmap = p.first, node = p.second;
            int d = mp[{btmap, node}];

            if (btmap == ((1 << sz) - 1) ) return d;

            for (int i: graph[node]){
                int btmap2 = btmap | (1 << i);

                if(!mp.count({btmap2, i})){
                    q.push({btmap2, i});
                    mp[{btmap2, i}] = d+1;
                }
            }
        }

        return 0;
    }
};

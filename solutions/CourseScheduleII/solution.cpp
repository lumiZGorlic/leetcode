class Solution {
public:
    vector<int> findOrder(int noc, vector<vector<int>>& pres) {
        // noc - number of courses
        vector<int> ret;

        vector<unordered_set<int>> graph(noc, unordered_set<int>());

        for (const auto& p: pres){
            graph[p[0]].insert(p[1]);
        }

        vector<int> inDegreeZero;

        for (int v=0; v<noc; v++)
            if (!graph[v].size()) inDegreeZero.push_back(v);

        vector<int> done(noc, 0);
 
        while (ret.size() < noc){
            if (!inDegreeZero.size()) return {};

            for (const auto& v: inDegreeZero){
                ret.push_back(v);
                done[v] = 1;

                for (auto& node: graph)
                    if (node.count(v)) node.erase(v);
            }

            inDegreeZero.clear();

            for (int v=0; v<noc; v++)
                if (!graph[v].size() && !done[v]) inDegreeZero.push_back(v);
        }

        return ret;
    }
};

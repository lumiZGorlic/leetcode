struct NodeProb{
    int node;
    double prob;
};

bool operator<(const NodeProb& a, const NodeProb& b){ return a.prob < b.prob; }

class Solution {
public:

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& pro, int start, int end) {
        int sz = edges.size();

        vector<vector< pair<int, double>>> graph(n);
        for (int i=0; i<sz; i++){
            graph[ edges[i][0] ].push_back( {edges[i][1], pro[i]} );
            graph[ edges[i][1] ].push_back( {edges[i][0], pro[i]} );
        }

        priority_queue<NodeProb> h;

        for (const auto& v: graph[start])
            h.push({v.first, v.second});

        vector<double> dist(n, 0.0);
        dist[start] = 1.0;

        while (!h.empty()){
            auto curr = h.top();
            h.pop();

            if (curr.node == end)
                return curr.prob;

            if (dist[curr.node])
                continue;

            dist[curr.node] = curr.prob;

            for (const auto& v: graph[curr.node]){
                if (!dist[v.first]){
                    h.push({v.first, curr.prob * v.second});
                }
            }
        }

        return 0.0;
    }
};

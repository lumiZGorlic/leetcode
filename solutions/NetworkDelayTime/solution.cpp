using pii = pair<int, int>;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int sz = times.size();

        vector<vector<pii>> graph(n);
        for (int i=0; i<sz; i++){
            graph[ times[i][0] - 1 ].push_back( {times[i][1] - 1, times[i][2]} );
        }

        priority_queue< pii, vector<pii>, greater<pii> > h;

        for (const auto& v: graph[k-1]) h.push({v.second, v.first});

        vector<int> dist(n, 0);

        while (!h.empty()){
            auto curr = h.top(); h.pop();

            if (curr.second == k-1) continue;
            if (dist[curr.second]) continue;

            dist[curr.second] = curr.first;

            for (const auto& v: graph[curr.second]){
                if (!dist[v.first]){
                    h.push({curr.first + v.second, v.first});
                }
            }
        }

        int ret = 0;
        for (int i=0; i<n; i++){
            if (i == k-1) continue;
            if (!dist[i]) return -1; // it's not source node and it wasn't reached
            ret = dist[i] > ret ? dist[i] : ret;
        }
        return ret;
    }
};

class Solution {
	bool dfs(int u, int par, vector<vector<int>>& adj, vector<bool>& vis){
		vis[u] = true;    //marking as visited.

		for(auto v: adj[u]){
			if(v == par) continue;

			if(vis[v] || dfs(v, u, adj, vis))
				return true;
		}

		return false;
	}

	bool isCycle(int V, vector<vector<int>>& adj){
		vector<bool>visited(V, false);

		for(int i = 0; i < V; i++){
			if(!visited[i]){
				bool cycle = dfs(i, -1, adj, visited);
				if(cycle) return true;
			}
		}
		return false;
	}

public:
    bool containsCycle(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int N = n*m;

        vector<vector<int>> adj(N, vector<int>());
        vector<vector<int>> dirs = { {-1,0}, {1,0}, {0,-1}, {0,1} };

        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++){
                
                for (auto& d: dirs){
                    int ni = i+d[0], nj = j+d[1];

                    if(ni < 0 || ni >= n || nj < 0 || nj >= m) continue;
                    if (grid[i][j] != grid[ni][nj]) continue;

                    adj[m*i + j].push_back(m*ni + nj);
                }
            }

        return isCycle(N, adj);
    }
};

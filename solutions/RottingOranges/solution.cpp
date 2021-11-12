class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int ret = 0;
        vector<pair<int, int>> freshes;

        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                if (grid[i][j] == 1) freshes.push_back({i, j});

        if (!freshes.size()) return 0;

        while (1)
        {
            ret++;

            for (const auto& fresh: freshes){
                int y = fresh.first, x = fresh.second;

                if (y > 0 && grid[y-1][x] == 2){
                    grid[y][x] = 3;
                }
                else if (y < n-1 && grid[y+1][x] == 2){
                    grid[y][x] = 3;
                }
                else if (x > 0 && grid[y][x-1] == 2){
                    grid[y][x] = 3;
                }
                else if (x < m-1 && grid[y][x+1] == 2){
                    grid[y][x] = 3;
                }
            }

            vector<pair<int, int>> freshesNew;

            for (const auto& fresh: freshes){
                int y = fresh.first, x = fresh.second;

                if (grid[y][x] == 3) grid[y][x] = 2;
                else freshesNew.push_back({y,x});
            }

            if (freshes.size() == freshesNew.size()) return -1;

            freshes = move(freshesNew);

            if (!freshes.size()) return ret;
        }

        return ret;
    }
};

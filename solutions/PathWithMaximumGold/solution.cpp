class Solution {
    int ret, lny, lnx;
public:

    int dfs(vector<vector<int>>& grid, int y, int x){
        if (y<0 || y>=lny || x<0 || x>= lnx) return 0;
        if (grid[y][x] == 0) return 0;

        int v = grid[y][x];
        grid[y][x] = 0;
        int mx=0;

        mx = max(mx, dfs(grid, y-1, x));
        mx = max(mx, dfs(grid, y+1, x));
        mx = max(mx, dfs(grid, y, x-1));
        mx = max(mx, dfs(grid, y, x+1));

        grid[y][x] = v;
        return mx+v;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        lny = grid.size();
        lnx = grid[0].size();
        ret = 0;

        for (int i = 0; i < lny; i++) {
            for (int j = 0; j < lnx; j++) {
                if (grid[i][j]) ret = max(ret, dfs(grid, i, j));
            }
        }

        return ret;
    }
};

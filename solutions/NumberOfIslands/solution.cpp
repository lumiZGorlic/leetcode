class Solution {
    void markIsland(vector<vector<char>>& grid, int row, int col){
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size()) return;
        if (grid[row][col] == '0') return;

        grid[row][col] = '0';
        markIsland(grid, row-1, col);
        markIsland(grid, row+1, col);
        markIsland(grid, row, col-1);
        markIsland(grid, row, col+1);
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size(), ret = 0;

        for (int row=0; row<n; row++)
            for (int col=0; col<m; col++)
                if (grid[row][col] == '1')
                {
                    ret++;
                    markIsland(grid, row, col);
                }

        return ret;
    }
};

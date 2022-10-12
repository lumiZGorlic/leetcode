class Solution {
    vector<vector<vector<int>>> dp;
    vector<vector<int>> grid;
    int n,m,k;
    int mod = 1000000007;

    // f finds how many routes there're which arrive at (x,y) with remainder equal to rest
    int f(int y, int x, int rest){
        if (dp[y][x][rest] != -1) return dp[y][x][rest];

        if(y == 0 && x == 0){
            if (grid[y][x] % k == rest)
                return 1;
            return 0;
        }

        int r = 0;
        for(int i=0; i<51; i++) {
            if( (grid[y][x] + i) % k == rest)
            { r=i; break; }
        }

        int ret=0;
        if(y) ret += f(y-1, x, r) % mod;
        if(x) ret += f(y, x-1, r) % mod;
        ret %= mod;
        dp[y][x][rest] = ret;
        return ret;
    }

public:
    int numberOfPaths(vector<vector<int>>& grid_orig, int k_orig) {
        this->grid = grid_orig;
        this->k = k_orig;
        this->n = grid.size(), this->m = grid[0].size();
        dp = vector<vector<vector<int>>> (n, vector<vector<int>>(m, vector<int>(51, -1)) );

        return f(n-1, m-1, 0);
    }
};

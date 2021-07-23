class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ret(m, vector<int>(n, 0));
        ret[0][0] = 1;
        
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (i) ret[i][j] += ret[i-1][j];
                if (j) ret[i][j] += ret[i][j-1];
            }
        }
        
        return ret[m-1][n-1];
    }
};

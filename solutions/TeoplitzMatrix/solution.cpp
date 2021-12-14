class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();

        for (int i=0; i<n; i++){
            int val = matrix[i][0], r=i, c=0;

            while (r<n && c<m) if(matrix[r++][c++] != val) return false;
        }

        for (int i=0; i<m; i++){
            int val = matrix[0][i], r=0, c=i;

            while (r<n && c<m) if (matrix[r++][c++] != val) return false;
        }

        return true;
    }
};

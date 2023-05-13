class Solution {
public:
    void setZeroes(vector<vector<int>>& mtx) {
        int n=mtx.size(), m=mtx[0].size();
        bool do_1st_row = false, do_1st_col = false;

        for (int i=0; i<n; i++)
            if(mtx[i][0] == 0) do_1st_col = true;

        for (int j=0; j<m; j++)
            if(mtx[0][j] == 0) do_1st_row = true;

        for (int i=1; i<n; i++)
            for (int j=1; j<m; j++)
                if (mtx[i][j] == 0)
                { mtx[i][0] = mtx[0][j] = 0; } // mark rows and cols to fill with 0s

        for (int i=1; i<n; i++)
            if (mtx[i][0]==0)
                for (int j=0; j<m; j++) mtx[i][j] = 0; // fill row with 0s

        for (int j=1; j<m; j++)
            if (mtx[0][j]==0)
                for (int i=0; i<n; i++) mtx[i][j] = 0; // fill col with 0s

        if(do_1st_row)
            for (int j=0; j<m; j++) mtx[0][j] = 0;

        if(do_1st_col)
            for (int i=0; i<n; i++) mtx[i][0] = 0;
    }
};

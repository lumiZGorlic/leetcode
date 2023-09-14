class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ret;
        int rsz = mat.size(), csz = mat[0].size();

        vector< vector<int> > d = { {-1,1}, {1,-1} };
        int ptr = 0;

        // an example diagonal [[y0,x0], [y1,x1], ... [yn,xn]]
        // yi+xi is an unique ID for a diagonal
        int id = 0;

        while(ret.size() < rsz*csz) {
            // upper right - [0, id] or [id - csz+1, csz-1]
            int upy = (csz > id) ? 0 : (id - csz+1);
            int upx = (csz > id) ? id : (csz-1);

            // lower left  - [id, 0] or [rsz-1, id - rsz+1]
            int downy = (rsz > id) ? id : (rsz-1);
            int downx = (rsz > id) ? 0 : (id - rsz+1);

            int by, bx, ey, ex;
            if(ptr==0) {
                by = downy, bx = downx;
                ey = upy-1, ex = upx+1;
            } else {
                by = upy, bx = upx;
                ey = downy+1, ex = downx-1; 
            }

            while (1){
                ret.push_back(mat[by][bx]);
                by += d[ptr][0];
                bx += d[ptr][1];
                if(by == ey && bx == ex) break;
            }

            ptr = (ptr+1) % 2;
            id++;
        }

        return ret;
    }
};


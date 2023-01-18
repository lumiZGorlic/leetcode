class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& hts) {
        int my = hts.size(), mx = hts[0].size();
        using pii = pair<int, int>;
        list<pii> queue;
        vector<vector<int>> dirs { {1,0}, {-1,0}, {0,1}, {0,-1} };

        vector<vector<bool>> pac(my, vector<bool>(mx, false));

        for (int i=0; i<my; i++) {
            pac[i][0] = true;
            queue.push_back({i,0});
        }
        for (int i=1; i<mx; i++) { // i=1 not 0 as {0,0} already covered
            pac[0][i] = true;
            queue.push_back({0,i});
        }

        while (!queue.empty()) {
            auto [y, x] = queue.front();
            queue.pop_front();

            for (const auto& d: dirs){
                int ny = y+d[0], nx = x+d[1];
                if (0 <= ny && ny < my && 0 <= nx && nx < mx && !pac[ny][nx] && hts[ny][nx] >= hts[y][x])
                {
                    pac[ny][nx] = true;
                    queue.push_back( {ny,nx} );
                }
            }
        }

        vector<vector<bool>> atl(my, vector<bool>(mx, false));

        for (int i=0; i<my; i++) {
            atl[i][mx-1] = true; queue.push_back({i,mx-1});
        }
        for (int i=0; i<mx-1; i++) { // mx-1 not mx
            atl[my-1][i] = true; queue.push_back({my-1,i});
        }

        while (!queue.empty()) {
            auto [y, x] = queue.front();
            queue.pop_front();

            for (const auto& d: dirs){
                int ny = y+d[0], nx = x+d[1];
                if (0 <= ny && ny < my && 0 <= nx && nx < mx && !atl[ny][nx] && hts[ny][nx] >= hts[y][x])
                {
                    atl[ny][nx] = true;
                    queue.push_back( {ny,nx} );
                }
            }
        }

        vector<vector<int>> ret;
        for (int i=0; i<my; i++)
            for (int j=0; j<mx; j++)
                if (pac[i][j] && atl[i][j]) ret.push_back({i,j});
        return ret;
    }
};

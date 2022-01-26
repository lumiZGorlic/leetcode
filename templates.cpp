#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

int bfsInGrid(vector<vector<int>>& grid) {
        int ret = 0;
        int ys = 0, xs = 0;
        int n = grid.size(), m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));
        queue<vector<int>> q;
        visited[ys][xs] = 1;
        q.push({ys, xs});

        while (!q.empty()){
            auto cur = q.front(); q.pop();
            int y = cur[0], x = cur[1];

            //if (sth){
                // do sth
            //}

            if (y > 0 && !visited[y-1][x]){
                q.push({y-1, x});
                visited[y-1][x] = 1;
            }
            if (y < n-1 && !visited[y+1][x]){
                q.push({y+1, x});
                visited[y+1][x] = 1;
            }
            if (x > 0 && !visited[y][x-1]){
                q.push({y, x-1});
                visited[y][x-1] = 1;
            }
            if (x < m-1 && !visited[y][x+1]){
                q.push({y, x+1});
                visited[y][x+1] = 1;
            }
        }

        /*int step = 0;
        int dirs[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

        queue<pair<int, int>> q;
        // dist[y][x] is the shortest distance from (y,x) to (ys, xs).
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        q.push({ys, xs});
        dist[ys][xs] = 0;

        while (q.size()) {
            int cnt = q.size();

            while (cnt--) {
                //auto [x, y] = q.front();
                auto cur = q.front(); q.pop();
                int y = cur.first, x = cur.second;

                //if (sth){
                    // do sth
                //}

                //for (auto &[dx, dy] : dirs) {
                for (auto &dir: dirs) {
                    int dy = dir[0], dx = dir[1];
                    int ny = y + dy, nx = x + dx;

                    if (ny < 0 || nx < 0 || ny >= n || nx >= m || dist[ny][nx] != INT_MAX) continue;

                    dist[ny][nx] = step + 1;
                    q.emplace(ny, nx);
                }
            }
            ++step;
        }*/

    return ret;
}

int main(){
    vector<vector<int>> a{{1,2,3}, {4,5,6}, {7,8,9}};
    bfsInGrid(a);


}

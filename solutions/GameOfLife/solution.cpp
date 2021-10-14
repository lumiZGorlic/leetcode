class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        int lives = 0;

        auto countLives = [&] (int i, int j) {
            if (i >= 0 && i < n && j >= 0 && j < m && (1 & board[i][j]))
                lives++;
        };

        for (int y = 0; y < n; y++){
            for (int x = 0; x < m; x++){
                lives = 0;

                countLives(y-1, x-1);
                countLives(y-1, x);
                countLives(y-1, x+1);
                countLives(y, x-1);
                countLives(y, x+1);
                countLives(y+1, x-1);
                countLives(y+1, x);
                countLives(y+1, x+1);

                if (1 & board[y][x]){     // 10
                    if (lives == 2 || lives == 3)
                        board[y][x] = 3;  // 11
                } else {                  // 00
                    if (lives == 3)
                        board[y][x] |= 2; // 01
                }
            }
        }

        // 1st bit is previous value, 2nd bit is current one
        for (int y = 0; y < n; y++)
            for (int x = 0; x < m; x++)
                board[y][x] >>= 1;
    }
};

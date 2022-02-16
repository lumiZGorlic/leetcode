class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int sz = tops.size();

        // identify 2 candidates ('a' and 'b') from the first domino piece
        int a = tops[0], b = 0;

        int cnt_a_top = 1, cnt_b_top = 0;
        int cnt_a_bot = 0, cnt_b_bot = 0;

        if (tops[0] != bottoms[0]) {
            b = bottoms[0];
            cnt_b_bot = 1;
        }
        else 
            cnt_a_bot = 1;

        for (int i=1; i<sz; i++){
            if (bottoms[i] != a && tops[i] != a) a = 0;
            if (bottoms[i] != b && tops[i] != b) b = 0;

            if (tops[i]    ==  a)  cnt_a_top++;
            if (tops[i]    ==  b)  cnt_b_top++;
            if (bottoms[i] ==  a)  cnt_a_bot++;
            if (bottoms[i] ==  b)  cnt_b_bot++;

            if (!a && !b) return -1;
        }

        int cnt_a_max = max(cnt_a_top, cnt_a_bot), cnt_b_max = max(cnt_b_top, cnt_b_bot);
        int retA = INT_MAX, retB = INT_MAX;

        if (a) ret_a = min(cnt_a_max, sz - cnt_a_max);
        if (b) ret_b = min(cnt_b_max, sz - cnt_b_max);

        return min(ret_a, ret_b);
    }
};

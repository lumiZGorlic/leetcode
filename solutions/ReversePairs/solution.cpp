class Solution {
public:
    #define iterator vector<vector<int>>::iterator
    void sort_count(iterator l, iterator r, int& ret) {
        if (r - l <= 1) return;
        iterator m = l + (r - l) / 2;
        sort_count(l, m, ret);
        sort_count(m, r, ret);
        for (iterator i = l, j = m; i < m; i++) {
            while (j < r) {
                long long x = (*i)[0], y = (*j)[0];
                y *= 2;
                if (x > y) j++; else break;
            }
            ret += j - m;
        }
        inplace_merge(l, m, r);
    }
public:
    int reversePairs(vector<int>& nums) {
        vector<vector<int>> hold;
        int n = nums.size();
        for (int i = 0; i < n; ++i) hold.push_back(vector<int>({nums[i], i})); // "zip" the nums with their indices
        int ret=0;
        sort_count(hold.begin(), hold.end(), ret);
        return ret;
    }
};

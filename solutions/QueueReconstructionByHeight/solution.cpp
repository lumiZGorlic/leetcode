class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        // sort by height (tallest first), then by position
        auto comp = [](const vector<int>& p1, const vector<int>& p2)
                        { return p1[0] > p2[0] || (p1[0] == p2[0] && p1[1] < p2[1]); };
        sort(people.begin(), people.end(), comp);

        vector<vector<int>> res;

        // for given iteration we are processing a person Pi with height hi and
        // position pi. Since all tallest persons are already in dq and in the right
        // order, we can insert Pi in the right place in dq
        for (auto& p : people) 
            res.insert(res.begin() + p[1], p);
        return res;
    }
};

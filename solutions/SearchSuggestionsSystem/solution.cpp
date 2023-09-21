class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string sw) {
        // solution 1
        /*sort(p.begin(), p.end());
        int sz = p.size();
        int sz2 = sw.size();

        vector<int> avail(sz, 1);
        vector<vector<string>> ret;

        for (int i=0; i<sz2; i++){
            vector<string> tmp;

            for (int j=0; j<sz; j++){

                if (avail[j] && (p[j].size() > i) && (sw[i] == p[j][i]) ){
                    if (tmp.size() < 3){ tmp.push_back(p[j]);}

                    // below will fail for the following test case
                    // ["my", "mz", "mx", "xoxo"], "mo"
                    // tmp.push_back(p[j]); if (tmp.size() == 3) break;

                } else {
                    avail[j] = 0;
                }
            }

            ret.push_back(tmp);
        }
        return ret;*/
        
        // solution 2
        auto it = p.begin();
        sort(it, p.end());
        vector<vector<string>> res;
        string cur = "";
        for (char c : sw) {
            cur += c;
            vector<string> suggested;
            it = lower_bound(it, p.end(), cur);
            for (int i = 0; i < 3 && it + i != p.end(); i++) {
                string& s = *(it + i);
                // to see why 'break' below needed run the below
                // ["bags","baggage","banner","box","cloths"], "bags"
                if (s.find(cur)) break;
                suggested.push_back(s);
            }
            res.push_back(suggested);
        }
        return res;
        
    }
};

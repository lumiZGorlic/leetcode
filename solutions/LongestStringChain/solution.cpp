class Solution {
public:
// really nice and concise solution
/*
    static bool compare(const string &s1, const string &s2) {
        return s1.length() < s2.length();
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), compare);
        unordered_map<string, int> dp;
        int res = 0;
        for (string w : words) {
            for (int i = 0; i < w.length(); i++) {
                string pre = w.substr(0, i) + w.substr(i + 1);
                dp[w] = max(dp[w], dp.find(pre) == dp.end() ? 1 : dp[pre] + 1);
            }
            res = max(res, dp[w]);
        }
        return res;
    }
*/


// my solution. i was keen to use charAway()

    // s2 longer
    bool charAway(string& s1, string& s2){
        if (s2.size() - s1.size() != 1) return false;

        int i=0, j=0;
        bool diff=0;
        while ( i < s1.size() ){
            if (s1[i] != s2[j]){
                if (diff) return false;
                j++; diff = 1;
            }
            else{ i++; j++; }
        }
        return true;
    }

    int longestStrChain(vector<string>& wds) {
        int sz = wds.size(), ans = 1;
        sort(begin(wds), end(wds), [](string& l, string& r){ return l.size() < r.size(); });

        unordered_map<int, vector<string>> sz2Words; // words in buckets as per size
        vector<int> vsz; // all sizes from smallest to biggest
        for (auto& w: wds) {
            sz2Words[ w.size() ].push_back( w );
            if(vsz.empty() || vsz.back() != w.size()) vsz.push_back(w.size());
        }

        using si = pair<string, int>;
        int minsz = wds[0].size();
        queue<si> q;
        for (auto& w: sz2Words[minsz]) q.push({w,1});

        for (int i = 1; i < vsz.size(); i++){
            unordered_map<string, int> best;

            if (vsz[i] - vsz[i-1] == 1){
                while(!q.empty()){
                    auto [wcur, l] = q.front(); q.pop();
                    for (auto& wnext: sz2Words[vsz[i]]){
                        if(charAway(wcur, wnext)) {
                            if (!best.count(wnext) || (best[wnext] < l+1)) best[wnext] = l+1;
                            ans = max(ans, l+1);
                        }
                        else if (!best.count(wnext))                       best[wnext] = 1;
                    }
                }
            }
            else {
                for (auto& wnext: sz2Words[vsz[i]]) best[wnext] = 1;
            }

            q = {};
            for (auto& it: best) q.push( {it.first, it.second} );
        }

        return ans;
    }
};

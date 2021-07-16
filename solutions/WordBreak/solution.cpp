
class Solution {
public:
    bool wordBreak(string s, vector<string>& wd) {
        int sz = s.size();
        
        unordered_set<string> wdSet;
        for (const auto& w: wd) wdSet.insert(w);
        
        vector<int> solved(sz+1, 0);
        solved[sz] = 1;
        
        for (int i = sz-1; i >= 0; i--){
            string prefix;
            for (int j = i; j < sz; j++){
                prefix += s[j];
                if (wdSet.count(prefix) && solved[j+1]){
                    solved[i] = 1;
                    break;
                }
            }
        }
        
        return solved[0];
    }
};

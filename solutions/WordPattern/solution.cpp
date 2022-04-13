class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> vs;
        string tmp;
        while (ss >> tmp) vs.push_back(tmp);

        if(vs.size() != pattern.size()) return false;

        unordered_map<char, string> mp;
        unordered_set<string> seen;

        for(int i = 0; i < vs.size(); i++){
            if (mp.count(pattern[i])) {
                if (mp[pattern[i]] != vs[i]) return false;
            } else {
                if(seen.count(vs[i])) return false;
                mp[pattern[i]] = vs[i];
                seen.insert(vs[i]);
            }
        }
 
        return true;
    }
};

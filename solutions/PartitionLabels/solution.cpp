class Solution {
public:
    vector<int> partitionLabels(string s) {
        int sz = s.size();
        vector<int> ret {-1};
        vector<int> lastIdxOfChar(26, -1);

        for (int i=0; i<sz; i++)
            lastIdxOfChar[s[i] - 'a'] = i;

        unordered_set<int> cur;

        for(int i=0; i<sz; i++){
            cur.insert(s[i]);
            if(lastIdxOfChar[s[i] - 'a'] == i) cur.erase(s[i]);
            if(cur.empty()) ret.push_back(i);
        }

        vector<int> ret2;

        for(int i=1; i<ret.size(); i++)
            ret2.push_back(ret[i] - ret[i-1]);

        return ret2;
    }
};

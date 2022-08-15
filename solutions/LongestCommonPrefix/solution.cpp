class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        int idx=0;
        bool done = false;
        char c = '0';

        while (1){
            if (strs[0].size() <= idx) { break; }
            else c = strs[0][idx];

            for (auto& s: strs){
                if(s.size() <= idx) { done = true; break; }
                else if (s[idx] != c) { done = true; break; }
            }
            if (done) break;
            idx++;
        }

        return strs[0].substr(0, idx);
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz = s.size(), ret = 0;

        unordered_set<char> unq;
        int l = 0;

        for (int r = 0; r < sz; r++){
            if (unq.count(s[r])){
                do { unq.erase(s[l++]); }
                while (l < r && s[l-1] != s[r]);
            }

            unq.insert(s[r]);
            ret = max(ret, r-l+1);
        }

        return ret;
    }
};

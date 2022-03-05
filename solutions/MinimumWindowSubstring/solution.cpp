class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> cnt;
        for (char c: t) cnt[c]++;

        int done = 0;
        int l = 0;
        string ret;

        unordered_map<char, int> cnt2;

        for (int r=0; r<s.size(); r++){
            if (!cnt.count(s[r])) continue;

            char c = s[r];
            cnt2[c]++;
            if(cnt[c] == cnt2[c]) done++;

            if (done == cnt.size()) {
                while (l < r) {
                    if (cnt.count(s[l])){
                        cnt2[s[l]]--;

                        if (cnt[s[l]] > cnt2[s[l]]){
                            cnt2[s[l]]++;
                            break;
                        }
                    }
                    l++;
                }

                if (ret.empty() || r-l+1 < ret.size()) ret = s.substr(l, r-l+1);
            }
        }

        return ret;
    }
};

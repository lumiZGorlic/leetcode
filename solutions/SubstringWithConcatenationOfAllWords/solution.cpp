
class Solution {
    unordered_map<string, int> cnt;
    vector<string> v;
    int wsz, ssz;

    bool helper(string& s, int idx, unordered_map<string, int>& cnt2){
        auto w = s.substr(idx, wsz);
        if (cnt2.count(w)){
            cnt2[w]--;
            if (cnt2[w] == 0) { 
                cnt2.erase(w);
                if(cnt2.size() == 0) return true;
            }
        }
        else return false;

        return helper(s, idx+wsz, cnt2);
    }

public:
    vector<int> findSubstring(string s, vector<string>& words) {
        wsz = words[0].size(), ssz = s.size();

        if (ssz < wsz * words.size()) return {};

        vector<int> ret;

        for (const auto& w: words) cnt[w]++;

        for (int i = 0; i < ssz - wsz + 1; i++){
            if(cnt.count(s.substr(i, wsz))) v.push_back( s.substr(i, wsz) );
            else v.push_back("");
        }

        int sz = words.size();

        for (int i = 0; i < ssz - sz*wsz + 1; i++){
            if (v[i] != "") {
                auto tmp = cnt;
                if(helper(s, i, tmp)) ret.push_back(i);
            }
        }

        return ret;
    }
};

class Solution {
public:
    vector<int> findAnagrams(string s, string a) {
    vector<int> ret;
    int asz = a.size(), ssz = s.size();

    if (asz > ssz) return ret;

    int cnt[26] = {0};

    for (int i = 0; i < asz; i++) {
        cnt[ a[i] - 'a' ]++;
        cnt[ s[i] - 'a' ]--;
    }

    int todo = 0;

    for (int i = 0; i < 26; i++)
        if (cnt[i] != 0) todo++;

    if (todo == 0) ret.push_back(0);

    for (int i = asz; i < ssz; i++) {

        cnt[ s[i - asz] - 'a' ]++;

        if (cnt[ s[i - asz] - 'a' ] == 0)
            todo--;
        else if (cnt[ s[i - asz] - 'a' ] == 1)
            todo++;

        cnt[ s[i] - 'a' ]--;

        if (cnt[ s[i] - 'a' ] == 0)
            todo--;
        else if (cnt[ s[i] - 'a' ] == -1)
            todo++;

        if (todo == 0) ret.push_back(i-asz+1);
    }

    return ret;        
    }
};

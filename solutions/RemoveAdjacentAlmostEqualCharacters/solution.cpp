class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int sz = word.size(), ret = 0;
        if(sz==1) return 0;

        auto areClose = [](char c1, char c2) { return abs(c1-c2) <= 1; };

        for (int i=0; i<sz-1; i++) {
            if(areClose(word[i], word[i+1])) { ret++; i++; }
        }
        
        return ret;
    }
};

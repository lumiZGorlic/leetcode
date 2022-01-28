class Solution {
public:
    // an interesting follow up questions would be to group the isomorphic strings
    // i guess below function that does encoding could be used to solve that
    string getPattern(string& s){
        string ret;
        unordered_map<char, char> seen;

        for (char c: s){
            if (seen.count(c)){
                ret += seen[c];
            }
            else {
                char val = 'a' + seen.size();
                seen[c] = val;
                ret += val;
            }
        }
        return ret;
    }

    bool isIsomorphic(string s, string t) {
        return getPattern(s) == getPattern(t);
    }
};

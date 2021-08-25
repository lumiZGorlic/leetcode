class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string tmp;
        vector<string> vs;

        while (ss >> tmp) vs.push_back(tmp);

        string ret;
        int sz = vs.size();

        for (int i=sz-1; i>0; i--){
            ret += vs[i] + ' ';
        }
        ret += vs[0];

        return ret;
    }
};

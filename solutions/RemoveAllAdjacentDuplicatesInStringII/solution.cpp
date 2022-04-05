class Solution {
public:
    string removeDuplicates(string s, int k) {
        int sz = s.size();
        vector<pair<char,int>> stack;

        for (auto c: s){
            if(!stack.empty() && stack.back().first == c){
                stack.back().second++;
                if(stack.back().second == k) stack.pop_back();
            }
            else {
                stack.push_back({c, 1});
            }
        }

        string ret;
        for (auto p: stack) ret += string(p.second, p.first);
        return ret;
    }
};

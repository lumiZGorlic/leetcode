class Solution {
public:
    string minRemoveToMakeValid(string s) {
        unordered_set<int> idxsOfUnmatchedPars;
        vector<int> stack;

        for (int i=0; i<s.size(); i++){
            if (s[i] == ')'){
                if (stack.empty())
                    idxsOfUnmatchedPars.insert(i);
                else
                    stack.pop_back();
            }
            else if (s[i] == '('){
                stack.push_back(i);
            }
        }

        for (int idx: stack)
            idxsOfUnmatchedPars.insert(idx);

        string ret;
        for (int i=0; i<s.size(); i++)
            if (!idxsOfUnmatchedPars.count(i)) ret += s[i];

        return ret;
    }
};

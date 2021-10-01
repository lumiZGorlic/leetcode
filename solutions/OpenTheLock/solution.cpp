class Solution {
public:
    int openLock(vector<string>& dd, string target) {
        set<string> dds;
        for (auto s: dd) dds.insert(s);

        unordered_map<char, vector<char>> mp = {
        {'0', {'1', '9'}}, {'1', {'2', '0'}}, {'2', {'3', '1'}}, {'3', {'4', '2'}}, {'4', {'3', '5'}},
        {'5', {'4', '6'}}, {'6', {'5', '7'}}, {'7', {'6', '8'}}, {'8', {'7', '9'}}, {'9', {'8', '0'}}
        };

        queue<pair<string, int>> q;
        q.push({"0000", 0});
        unordered_set<string> seen;
        seen.insert("0000");

        while (!q.empty()){
            auto cur = q.front();
            q.pop();

            if (dds.count(cur.first)) continue;
            if (cur.first == target) return cur.second;

            for (int i=0; i<4; i++){
                for (auto c: mp[cur.first[i]]){
                    string tmp=cur.first;
                    tmp[i] = c;
                    if (!seen.count(tmp)){
                        seen.insert(tmp);
                        q.push({tmp, cur.second+1});
                    }
                }
            }
        }

        return -1;
    }
};

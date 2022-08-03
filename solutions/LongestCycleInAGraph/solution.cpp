class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int sz = edges.size();
        int ret = -1;
        vector<int> done(sz, -1);

        for (int i=0; i<sz; i++){
            if(done[i] != -1) continue;

            int cur = i, cnt = 0;
            unordered_set<int> doneNow;

            while(edges[cur] != -1 && done[cur] == -1){
                doneNow.insert(cur);
                done[cur] = cnt++;
                cur = edges[cur];
            }

            if(edges[cur] != -1 && doneNow.count(cur))
                ret = max(ret, cnt-done[cur]);
        }

        return ret;
    }
};

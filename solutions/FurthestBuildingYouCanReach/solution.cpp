class Solution {
public:
    int furthestBuilding(vector<int>& hs, int bs, int ls) {
        // Max heap solution
        int sz = hs.size();
        priority_queue<int> pq;

        for (int i=1; i<sz; i++){
            int d = hs[i] - hs[i-1];
            if (d <= 0) continue;
            pq.push(d);

            if (d <= bs){
                bs -= d;
            }
            else if (ls){
                auto t = pq.top(); pq.pop();
                bs += t-d;
                ls--;
            }
            else {
                return i-1;
            }
        }

        return sz-1;

        // Min heap solution
        /*
        priority_queue<int> pq;
        for (int i = 0; i < hs.size() - 1; i++) {
            int d = hs[i + 1] - hs[i];
            if (d > 0)
                pq.push(-d);
            if (pq.size() > ls) {
                bs += pq.top();
                pq.pop();
            }
            if (bs < 0)
                return i;
        }
        return hs.size() - 1;
        */
    }
};

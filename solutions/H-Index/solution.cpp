class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ret = 0;
        vector<int> v(1001, 0);

        for(int c: citations) v[c]++;

        int all = 0;
        for (int i = 1000; i > 0; i--){
            all += v[i];
            if(all >= i) ret = max(ret, i);
        }

        return ret;
    }
};

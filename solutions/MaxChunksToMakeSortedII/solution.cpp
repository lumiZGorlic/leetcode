class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int sz = arr.size(), ret = 1;
        
        map<int, int> last;
        for (int i=0; i<sz; i++) last[arr[i]] = i;

        int maxSeen = -1;

        for (int i = 0; i < sz - 1; i++){
            if(last[arr[i]] == i)
                last.erase(arr[i]);

            maxSeen = arr[i] > maxSeen ? arr[i] : maxSeen;

            // last.begin()->first is the next value to complete, so
            // e.g. if it equals to 5, we know that all smaller values have
            // been traversed (if they exist at all)
            if(last.begin()->first >= maxSeen)
                ret++;
        }

        return ret;
    }
};

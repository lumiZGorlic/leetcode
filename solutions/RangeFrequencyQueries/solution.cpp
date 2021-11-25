// commented out stuff does not work cos distance on a set takes linear time, using vector its constant time
class RangeFreqQuery {
    //unordered_map<int, set<int>> val2Idxs;
    vector<int> ids[10001] = {};
public:
    RangeFreqQuery(vector<int>& arr) {
        //for (int i=0; i<arr.size(); i++) val2Idxs[arr[i]].insert(i);
        for (int i=0; i<arr.size(); ++i) ids[arr[i]].push_back(i);
    }

    int query(int left, int right, int value) {
        //return distance(val2Idxs[value].lower_bound(left),
        //                val2Idxs[value].upper_bound(right));
        return upper_bound(begin(ids[value]), end(ids[value]), right) - 
               lower_bound(begin(ids[value]), end(ids[value]), left);
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */

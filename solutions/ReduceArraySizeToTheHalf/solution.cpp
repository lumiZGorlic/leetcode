class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int sz = arr.size();
        int ret = 0;

        unordered_map<int, int> cnt;
        for (int a: arr) cnt[a]++;

        // custom comparator so the biggest value in multiset is first
        auto comp = [](int l, int r){ return l >= r;};
        multiset<int, decltype(comp)> nbOfOccurs(comp);
        for (const auto& it: cnt) nbOfOccurs.insert(it.second);

        sz /= 2;
        for (int i: nbOfOccurs){
            sz -= i;
            ret++;
            if (sz <= 0) return ret;
        }

        return ret;
    }
};

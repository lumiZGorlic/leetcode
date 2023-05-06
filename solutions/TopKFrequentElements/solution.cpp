class Solution {
public:
    using pii = pair<int, int>;
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> m;
        for (int num : nums) ++m[num];

        priority_queue<pii> pq;
        for (auto& it: m) pq.push({it.second, it.first});

        vector<int> ret;

        for (int i=0; i<k; i++){
            ret.push_back(pq.top().second);
            pq.pop();
        }
        
        return ret;
 

        // solution 2
        /*vector<pii> v;
        for (auto& it: m) v.push_back({it.second, it.first});

        partial_sort(begin(v), begin(v)+k, end(v), [](pii l, pii r) { return r.first < l.first; });
        vector<int> ret;
        for (int i=0; i<k; i++) ret.push_back(v[i].second);
        return ret;*/
        

        // solution 3
        /*unordered_map<int, int> m;
        for (int num : nums)
            ++m[num];
        
        vector<vector<int>> buckets(nums.size() + 1); 
        for (auto p : m)
            buckets[p.second].push_back(p.first);
        
        vector<int> ans;
        for (int i = buckets.size() - 1; i >= 0 && ans.size() < k; --i) {
            for (int num : buckets[i]) {
                ans.push_back(num);
                if (ans.size() == k)
                    break;
            }
        }
        return ans;*/
    }
};

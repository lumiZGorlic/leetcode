
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        using pii = pair<int, int>;
        vector<int> ret;
        priority_queue<pii> pq;

        for (int i=0; i<k; i++) pq.push({nums[i], i});

        ret.push_back(pq.top().first);
        
        for (int i=k; i<nums.size(); i++){
            pq.push({nums[i], i});
            while(pq.top().second <= i-k) pq.pop();

            ret.push_back(pq.top().first);
        }

        return ret;

        /*
        // alternative solution
        multiset<int> window(nums.begin(), nums.begin() + k);
        vector<int> maxs;
        maxs.push_back( *window.rbegin() );

        for (int i=k; i < nums.size(); i++){
            window.erase( window.lower_bound(nums[i-k]) );
            window.insert(nums[i]);
            maxs.push_back( *window.rbegin() );
        }

        return maxs;*/
    }
};

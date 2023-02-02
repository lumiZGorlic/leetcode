
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int sz = nums1.size();
        vector<pair<int, int>> v;
        priority_queue<int> pq;

        for (int i=0; i<sz; i++) v.push_back({-nums2[i], -nums1[i]});
        sort(begin(v), end(v));

        long long ret=0, sum=0;

        for (int i=0; i<k; i++){
            sum += -v[i].second;
            pq.push(v[i].second);
        }
        ret = -v[k-1].first * sum; // k biggest ints from nums2 and corresponding ints from ints nums1

        // in each iteration we get solution for v[i] as the min from nums2
        for (int i=k; i<sz; i++){
            int x = pq.top(); pq.pop();
            pq.push(v[i].second);

            sum += x - v[i].second;

            ret = max(ret, -v[i].first * sum);
        }

        return ret;
    }
};


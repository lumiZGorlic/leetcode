class Solution {
public:
    long long minimumDifference(vector<int>& nums) {
        int sz = nums.size();
        int n = sz/3;
        priority_queue<int> pq_l(begin(nums), begin(nums) + n);
        priority_queue<int, vector<int>, greater<int>> pq_r(begin(nums) + 2*n, end(nums));

        long long sum_first = accumulate(begin(nums), begin(nums) + n, 0LL);
        long long sum_second = accumulate(begin(nums) + 2*n, end(nums), 0LL);

        // at diffs[i] - an optimal result if we were to split nums into
        // left = nums[ : i+1] and right = nums[i+1 : ]
        // in which case in left we'd remove i + 1 - n largest elements
        // and in right we'd remove 2*n - i - 1 smallest elements
        // example:
        // nums = [7,9,5,8,1,3]
        // diffs = [0, 3, 1, 8, 0, 0]

        vector<long long> diffs(sz);
        long long ret = LONG_MAX;

        for (int i = n; i <= 2*n; ++i) {
            diffs[i-1] = sum_first;
            pq_l.push(nums[i]);
            auto tmp = pq_l.top(); pq_l.pop();
            sum_first += nums[i] - tmp;
        }

        for (int i = 2*n - 1; i >= n-1; --i) {
            diffs[i] -= sum_second;
            pq_r.push(nums[i]);
            auto tmp = pq_r.top(); pq_r.pop();
            sum_second += (nums[i] - tmp);

            ret = min(diffs[i], ret);
        }

        return ret;
    }
};

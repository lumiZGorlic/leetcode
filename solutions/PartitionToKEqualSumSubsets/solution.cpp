class Solution {
public:
    int dp[(1<<16)+2];

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0;
        fill(dp, dp+(1<<16)+2, -1);
        dp[0] = 0;
        sum = accumulate(begin(nums), end(nums), 0);
        if (sum % k) return false;
        int tar = sum/k;
        
        for (int mask = 0; mask < (1<<n); mask++) {
            if (dp[mask] == -1) continue;  // if current state is illegal, simply ignore it
            for (int i = 0; i < n; i++) {
                // if nums[i] is unchosen && choose nums[i] would not cross the target
                if (!(mask&(1<<i))        && dp[mask]+nums[i] <= tar) {
                    dp[mask|(1<<i)] = (dp[mask]+nums[i]) % tar;
                }
            }
        }
        return dp[(1<<n)-1] == 0;
    }
};

// below times out
/*class Solution {
    int sz, un;

    bool f(vector<int>& nums, vector<int>& part, int idx){
        bool ok=true;
        for (auto p: part)
            if(p != un) { ok=false; break; }

        if(idx == sz) return ok;

        for (auto& p: part){
            if(p + nums[idx] <= un){
                p += nums[idx];
                if (f(nums, part, idx+1))
                    return true;
                p -= nums[idx];
            }
        }
        return false;
    }

public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        sz = nums.size();
        int s = accumulate(begin(nums), end(nums), 0);
        if(s % k) return false;
        un = s / k;

        vector<int> part(k, 0);
        sort(begin(nums), end(nums), greater<>());
        return f(nums, part, 0);
    }
};*/
